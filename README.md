## RichR
For Functional Enrichment Analysis and Network Construction 

## Description  
__RichR__ is an R package that provides an easy interface for functional enrichment analysis of differential expression analysis outcome (or even simple a gene set) as well as construction of a relation network from the enrichment analysis results. RichR supports all the species included in Ensembl and Ensembl Plant.   

## Dependencies  
R>2.15

## Installation
```   
library(devtools)    
install_github("hurlab/RichR")
### We suggest the use of RStudio to run this command, if you want to use build_vignettes
```

## Getting started
```
library(RichR)
```  
More detail please see [vignette](https://github.com/hurlab/RichR/wiki)
```    
vignette("RichR")
```   

## Some useful commands
If you want convert IDs from one type to another (e.g. "SYMBOL"->"ENSEMBL"),
``` 
idconvert (keys=vector_of_symbols, species="human", fkeytype="SYMBOL", tkeytype="ENSEMBL")
```  
If you want to combine the enrichment analysis outcome with input data (expression matrix or gene list),
```  
getdetail (enrichres, input_data)
```  

## Contact information
This package is under active development. Please, email any question or suggestion to guokai8@gmail.com. 

