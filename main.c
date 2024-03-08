#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct stud{
    char name[20];
    int m;
    int p;
    int c;
}student;

int main()
{
    int total,i;
    FILE *f=fopen("file1.txt","w");
    
    printf("Enter the number of students : ");
    scanf("%d",&total);
    student s[total];
    char head[100];
    sprintf(head,"%10s %10s %10s %10s\n","Name","Maths","Physics","Chemistry");
    fwrite("------------------------------------------------------",1,30,f);
    fwrite("\n",1,1,f);
    fwrite(head,1,strlen(head),f);
    fwrite("------------------------------------------------------",1,30,f);
    fwrite("\n",1,1,f);
    for(i=0;i<total;i++){
        //s[i]=malloc(sizeof(student));
        char name[20];
        printf("Enter the name of the student : ");
        scanf(" %[^\n]",name);
        strcpy(s->name,name);
        printf("Enter P, C and M marks : ");
        scanf("%d %d %d",&s->p,&s->c,&s->m);
        
        fwrite(s->name,1,strlen(s->name),f);
        fwrite(&s->m,1,1,f);
        fwrite(&s->p,1,1,f);
        fwrite(&s->c,1,1,f);
        fwrite("\n",1,1,f);
    }
}
