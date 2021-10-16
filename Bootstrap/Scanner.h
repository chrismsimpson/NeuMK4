#ifndef SCANNER_H
#define SCANNER_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#include "SourceLocation.h"

enum ScannerType {

    scannerTypeFile,
    scannerTypeStringSource
};

struct Scanner {

    const enum ScannerType scannerType;

    const int length;

    const char * source;

    const FILE * file;

    ///

    int rawPosition;
    
    int lineNumber;

    int column;
};

///

extern struct Scanner * createScanner(
    enum ScannerType scannerType,
    const int length,
    const FILE * file,
    const char * source);

extern struct Scanner * createScannerFromFile(
    const char * filename);

extern struct Scanner * createScannerFromString(
    const char * source);

///

extern void deleteScanner(
    struct Scanner * s);

///

extern const struct SourceLocation getScannerPosition(
    const struct Scanner * scanner);

///

extern const bool isScannerAtEof(
    const struct Scanner * scanner);

///

extern char rawNext(
    const struct Scanner * scanner);

extern char * rawNextLength(
    const struct Scanner * scanner,
    const int length);

#endif