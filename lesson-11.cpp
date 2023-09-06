#include <stdio.h>


int main() {
    printf("Lesson 11 – File I/O\n");

    FILE *file;
    file = fopen("lesson-11-datafile.txt", "w");

    if(file == NULL){
        printf("Problem opening file. \n");
        return 1;
    }

    printf("File opened succsessfully. \n");
//    fprintf(file, "Hello there! \n");
    fprintf(file, "How are you? \n");
    fclose(file);

    char name[10] = "John";
    int id = 10;

    file = fopen("lesson-11-datafile.txt", "a");
    fprintf(file, "Student: %s; ID: %i \n", name, id);

    fputc('p', file);
    fputc('r', file);
    fputc('i', file);
    fputc('v', file);
    fputc('e', file);
    fputc('t', file);
    fputc('!', file);

    fclose(file);


    // Reading from Files
    // getc()
    char ch;

    file = fopen("lesson-11-datafile.txt", "r");
    do{
        ch = getc(file);
        printf("I found a: '%c' \n", ch);
    } while (ch != EOF);
    fclose(file);

    file = fopen("lesson-11-datafile.txt", "r");
    do{
        ch = getc(file);
        printf("I found a: '%c' \n", ch);
    } while (!feof(file));
    fclose(file);


    // fscanf()
    // read words separated by whitespace or newline
    char word[81];
    file = fopen("lesson-11-datafile.txt", "r");
    do{
        fscanf(file, "%s", word);
        printf("I found a: '%s' \n", word);
    } while (!feof(file));
    fclose(file);

    //reading in formatted data from a file using fscanf
    char t_name[81];
    int t_age, t_id;

    file = fopen("lesson-11-records.txt", "r");
    do{
        fscanf(file, "%s %i %i", t_name, &t_age, &t_id);
        printf("Record: %s, %i, %i \n", t_name, t_age, t_id);
    } while (!feof(file));
    fclose(file);


    // Using Multiple Files
    FILE *infile;
    FILE *outfile;
    infile  = fopen("lesson-11-records.txt", "r");
    outfile = fopen("lesson-11-output.txt", "w");
    if (infile == NULL || outfile == NULL) {
        printf("Problem opening files.");
        return 1;
    }
    printf("Files opened successfully. \n");
    char c_name[81];
    int c_age, c_id;
    do {
        fscanf(infile, "%s %i %i", c_name, &c_age, &c_id);
        fprintf(outfile, "Record: %s, %i, %i \n", c_name, c_age, c_id);
        printf("Record: %s, %i, %i \n", c_name, c_age, c_id);
    } while (!feof(infile));
    fclose(infile);
    fclose(outfile);

    /**
     * There is a lot to know about input and output in the C language, and we have only covered some of the functionality.
     * Just to quickly review the items that we have covered (and what you need to know for exams!), we have provided the following listing:
        Console I/O functions
            getchar(), putchar(), scanf(), printf()

        File I/O functions (and constant EOF)
            fopen(), fclose(), getc(), putc(), fscanf(), fprintf(), feof(), EOF

        Formatted Output Specifiers:
            %i, %d, %o, %x, %f, %e, %g, %c, %s

        Formatted Input Specifiers:
            %i, %f, %lf, %c, %s
     **/
    return 0;
}
