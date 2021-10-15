#ifndef SCANNER_H
#define SCANNER_H

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

struct Scanner * createScanner(
    enum ScannerType scannerType,
    const int length,
    const FILE * file,
    const char * source);

struct Scanner * createScannerFromFile(
    const char * filename);

struct Scanner * createScannerFromString(
    const char * source);

void deleteScanner(
    struct Scanner * s);

struct SourceLocation getScannerPosition(
    const struct Scanner * scanner);

bool isScannerAtEof(
    const struct Scanner * scanner);

#endif