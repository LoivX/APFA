/* echo command-line arguments; 1st version */
    int main(int argc, char *argv[])
    {
        int i;
        for (i = 1; i < argc; i++)  /* does not start from 0, because it is the program name. */
            printf( "%s%s", argv[i], (i < argc-1) ? " " : ""); /* note the use of printf WITHOUT \n */
        printf ("\n");
        return 0;
    }