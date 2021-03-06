#' Reactome Pathway Enrichment analysis function
#' @param df DGE files (DESeq2 result files) or vector contains gene names
#' @param species species name
#' @param RO_FILE Reactome annotation data
#' @param minSize minimal number of genes included in significant terms
#' @param padj.method p value adjust method (default: BH)
#' @param cutoff cutoff value for filtering significant terms (default: 0.05)
#' @param maxSize maximum number of genes included in significant terms
#' @param keepRich keep terms with rich factor value equal 1 or not (default: TRUE)
#' @param filename output filename
#' @param gene.cutoff the cut-off value for select DEGs (default: 0.01)
#' @export
#' @author Kai Guo
RE<-function(df, RO_FILE, keytype = "SYMBOL", species = "human",padj.method = "BH", minSize=2,maxSize=500,keepRich=TRUE,filename = NULL,cutoff=0.05) {
  annot.info = RO_FILE$roan
  rownames(annot.info) <- annot.info$RO
  RO_FILE = RO_FILE$ro
  if (keytype != "ENTREZID") {
    id = idconvert(species = species, keys = RO_FILE$GeneID,
                   fkeytype = "ENTREZID", tkeytype = keytype)
    RO_FILE2 = RO_FILE[RO_FILE$GeneID %in% names(id), ]
    RO_FILE2$GeneID = id[RO_FILE2$GeneID %in% names(id)]
    RO_FILE=RO_FILE2
  }
  res = enrich(df, annot = RO_FILE, annot.info = annot.info,
               filename = filename, padj.method = padj.method,minSize=minSize,maxSize=maxSize,keepRich=keepRich)
  res<-res[res$Pvalue<cutoff,]
  return(res)
}
#' Reactome Pathway Enrichment analysis function for plant
#' @param df DGE files (DESeq2 result files) or vector contains gene names
#' @param RO_FILE GO annotation data
#' @param minSize minimal number of genes included in significant terms
#' @param padj.method p value adjust method (default: BH)
#' @param cutoff cutoff value for filtering significant terms (default: 0.05)
#' @param maxSize maximum number of genes included in significant terms
#' @param keepRich keep terms with rich factor value equal 1 or not (default: TRUE)
#' @param filename output filename
#' @param gene.cutoff the cut-off value for select DEGs (default: 0.01)
#' @export
#' @author Kai Guo
RE.plant<-function(df,RO_FILE,gene.cutoff=0.01,padj.method="BH",minSize=2,maxSize=500,keepRich=TRUE,filename=NULL,cutoff=0.05){
    annot.info=RO_FILE[,2:3]
    RO_FILE=RO_FILE[,1:2]
    rr<-strsplit(unique(apply(annot.info,1,function(x)paste(x,collapse="@",sep=""))),split = "@")
    annot.info=do.call(rbind,rr)
    rownames(annot.info)=annot.info[,1]
    colnames(annot.info)=c("RO","Description")
    res=enrich(df,annot=RO_FILE,annot.info = annot.info,filename=filename,gene.cutoff = gene.cutoff,padj.method = padj.method, minSize=minSize,maxSize=maxSize,keepRich=keepRich)
    res<-res[res$Pvalue<cutoff,]
    return(res)
}
