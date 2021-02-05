#include <stdio.h>
char *c[] = {"GeksQuiz", C"MQ", "TEST", "QUIZ"};
char **cp[] = {c+3, c+2, c+1, c};  //{"QUIZ","TEST","MCQ","GeksQuiz"}
char ***cpp = cp;
int main()
{
    printf("%s ", **++cpp);   //++cpp  = c+2,  **(c+2)   *c+2
    printf("%s ", *--*++cpp+3);  //(*--*++(cpp+3)  , (*--*(c+2)+3)
    printf("%s ", *cpp[0]+3);
    printf("%s ", cpp[-1][-1]+1);
    return 0;
}