# doxygen-template
A template to generate project  document using doxygen

### Install doxygen
sudo apt-get install doxygen

### Generate document
> doxygen -g doc.dot    

```
PROJECT_NAME           = "Device SDK APIs"
PROJECT_NUMBER         = "ver: 2.3.0"
PROJECT_LOGO           = logo.png
OUTPUT_DIRECTORY       = reference
OPTIMIZE_OUTPUT_FOR_C  = YES
INPUT                  = ./include
FILE_PATTERNS          = *.h
RECURSIVE              = YES
GENERATE_LATEX         = NO
```

> doxygen doc.dot

