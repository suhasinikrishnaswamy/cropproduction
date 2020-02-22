#include <stdio.h>
#include <stdlib.h>
struct states
{
    int maize[10],bajra[10],gram[10],wheat[10],rice[10];
    int total[10];
    char state[30];
    float rain[10];
};
main()
{
    FILE *cpr;
    cpr=fopen("crop_and_rainfall.txt","w+");
    int i,j,n,t,year[10];
    struct states s[40];
    printf("Enter the number of states:");
    fscanf(stdin,"%d",&n);
    printf("Enter the number of years:");
    fscanf(stdin,"%d",&t);
    for(i=1;i<=t;i++)
    {
        printf("Enter year of production %d:",i);
        fprintf(cpr,"Year of production is ");
        fscanf(stdin,"%d",&year[i]);
        fprintf(cpr,"%d\n",year[i]);
    }
    for(i=1;i<=n;i++)
    {
        printf("\nEnter State Name:");
        fscanf(stdin,"%s",&s[i].state);
        fprintf(cpr,"\n%s\n",s[i].state);
        for(j=1;j<=t;j++)
        {
            printf("YEAR %d:\n",year[j]);
            fprintf(cpr,"Year %d\n",year[j]);
            printf("Rice yield(in kgs):");
            fprintf(cpr,"Rice yield(in kgs):");
            fscanf(stdin,"%d",&s[i].rice[j]);
            fprintf(cpr,"%d\n",s[i].rice[j]);
            printf("Wheat yield(in kgs):");
            fprintf(cpr,"Wheat yield(in kgs):");
            fscanf(stdin,"%d",&s[i].wheat[j]);
            fprintf(cpr,"%d\n",s[i].wheat[j]);
            printf("Gram yield(in kgs):");
            fprintf(cpr,"Gram yield(in kgs):");
            fscanf(stdin,"%d",&s[i].gram[j]);
            fprintf(cpr,"%d\n",s[i].gram[j]);
            printf("Bajra yield(in kgs):");
            fprintf(cpr,"Bajra yield(in kgs):");
            fscanf(stdin,"%d",&s[i].bajra[j]);
            fprintf(cpr,"%d\n",s[i].bajra[j]);
            printf("Maize yield(in kgs):");
            fprintf(cpr,"Maize yield(in kgs):");
            fscanf(stdin,"%d",&s[i].maize[j]);
            fprintf(cpr,"%d\n",s[i].maize[j]);
            printf("\n");
        }
      printf("\n");
      fprintf(cpr,"\n\n");
    }
    for(i=1;i<=n;i++)
    {
        printf("%s :\n",s[i].state);
        fprintf(cpr,"%s\n",s[i].state);
        for(j=1;j<=t;j++)
        {
            printf("Year %d\n",year[j]);
            fprintf(cpr,"Year ");
            fprintf(cpr,"%d\n",year[j]);
            printf("Enter Rainfall (in mm):");
            fprintf(cpr,"Rainfall(in mm):");
            fscanf(stdin,"%f",&s[i].rain[j]);
            fprintf(cpr,"%f\n",s[i].rain[j]);
            printf("\n");
        }
    }
    fclose(cpr);
}
