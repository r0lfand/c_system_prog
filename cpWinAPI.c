#include <stdio.h>
#include <Windows.h>

int main(int argc, char* argv[]) // preserves stuff like time and other attributes
{
    if (argc != 3)
    {
        printf("Usage: cp file1 file2 \n");
        return 1;
    }

    if (!CopyFile(argv[1],argv[2],FALSE))
    {
        printf("CopyFile error: %x\n",GetLastError());
        return 2;
    }

    return 0;
}