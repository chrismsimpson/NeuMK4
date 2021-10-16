cmake_minimum_required (VERSION 3.21.2)
project (main)

add_executable(main
    main.c
    Common/String.c
    Neu/AST/NeuCodeBlockItem.c
    Neu/AST/NeuNode.c
    Neu/AST/NeuSourceFile.c
    Neu/Parser/NeuParser.c
    Neu/Tokenizer/NeuTokenizer.c
    Neu/Tokens/NeuPunc.c
    Neu/Tokens/NeuToken.c
    Path/Parser/PathParser.c
    Path/Tokenizer/PathTokenizer.c
    Path/Tokens/PathPunc.c
    Path/Tokens/PathToken.c
    Path/Path.c
    main.c
    Scanner.c
    SourceLocation.c)