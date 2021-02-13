#include "out_comment.h"

void output_comments()
{
    std::cout << "/*";
    std::cout << "*/";
    std::cout << /* */" */";//   /* */" */ <--incorrect
    std::cout << /* "*/" /* "/*" */;    
}