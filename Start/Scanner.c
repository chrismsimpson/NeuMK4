#include "Scanner.h"

struct Scanner * createScanner(
    enum ScannerType scannerType, 
    const FILE * file,
    const char * source)
{
    struct Scanner * scanner;

    ///

    if ((scanner = malloc(sizeof * scanner)) != NULL)
    {
        * (size_t *) &scanner->scannerType = scannerType;

        ///

        switch (scanner->scannerType) {

        case scannerTypeFile:
            
            scanner->file = file;

            break;

        ///

        case scannerTypeStringSource:
            
            scanner->source = source;
            
            break;

        ///
        
        default:

            break;
        }
    }

    ///

    scanner->rawPosition = 0;
    scanner->lineNumber = 1;
    scanner->column = 1;

    ///

    return scanner;
}

struct Scanner * createScannerFromFile(
    const char * filename)
{
    FILE * file = fopen(filename, "r");

    return createScanner(scannerTypeFile, file, NULL);
}

struct Scanner * createScannerFromString(
    const char * source)
{
    return createScanner(scannerTypeStringSource, NULL, source);
}

void deleteScanner(
    struct Scanner * scanner) {

    FILE * file;

    ///

    switch (scanner->scannerType) {

    case scannerTypeFile:

        fclose((FILE *) scanner->file);

        break;

    ///

    case scannerTypeStringSource:
        
        break;

    ///
    
    default:

        break;
    }

    ///

    free(scanner);

    scanner = NULL;
}

struct SourceLocation getScannerPosition(
    const struct Scanner * scanner)
{
    struct SourceLocation sourceLocation = {
        scanner->rawPosition, 
        scanner->lineNumber, 
        scanner->column};

    return sourceLocation;
}