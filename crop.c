#include <stdio.h>
#include <stdlib.h>
struct states
{
    int maize[10],bajra[10],jowar[10],wheat[10],rice[10],millets[10],barley[10],ragi[10];
    int ma,ba,j,w,r,m,b,ra;
    int total[10],totcp,indpro;
    char state[30];
    int year[30];
    float average;
    float rain[10],totra,totpro,x2,xy,tpr[10],ip[10];
};
void main()
{
    FILE *cpr;
    cpr=fopen("yearly_crop_prod.txt","w+");
    int i,j,n,c=0,m,x,t;
    //int total[40];
    float average;
    int tcp,year[10],choice1;
    float trf=0,x2;
    float d,Y[i];
    float d1=0,d2=0,d3=0,d4=0;
    int c1=0,c2=0,c3=0,c4=0;
    float a,b,xy,b1[40],a1[40];
    struct states s[40];
    printf("Enter the number of states:");
    fscanf(stdin,"%d",&n);
    printf("Enter the number of years:");
    fscanf(stdin,"%d",&t);
    //fclose(cpr);
    //printf("Enter the names of States:");
    for(i=1;i<=t;i++)
    {
        printf("Enter year of production %d:",i);
        fprintf(cpr,"Year of production is: ");
        fscanf(stdin,"%d",&year[i]);
        printf(cpr,"%d\n",year[i]);
    }
    for(i=1;i<=n;i++)
    {
        printf("\nEnter State Name:");
        fscanf(stdin,"%s",&s[i].state);
        fprintf(cpr,"%s\n",s[i].state);
        for(j=1;j<=t;j++)
        {
            printf("YEAR %d:\n",year[j]);
            printf("Rice production(in tonnes):");
            fprintf(cpr,"Rice production(in tonnes):");
            fscanf(stdin,"%d",&s[i].rice[j]);
            fprintf(cpr,"%d\n",s[i].rice[j]);
            printf("Wheat production(in tonnes):");
            fprintf(cpr,"Wheat production(in tonnes):");
            fscanf(stdin,"%d",&s[i].wheat[j]);
            fprintf(cpr,"%d\n",s[i].wheat[j]);
            printf("Jowar production(in tonnes):");
            fprintf(cpr,"Jowar production(in tonnes):");
            fscanf(stdin,"%d",&s[i].jowar[j]);
            fprintf(cpr,"%d\n",s[i].jowar[j]);
            printf("Bajra production(in tonnes):");
            fprintf(cpr,"Bajra production(in tonnes):");
            fscanf(stdin,"%d",&s[i].bajra[j]);
            fprintf(cpr,"%d\n",s[i].bajra[j]);
            printf("Maize production(in tonnes):");
            fprintf(cpr,"Maize production(in tonnes):");
            fscanf(stdin,"%d",&s[i].maize[j]);
            fprintf(cpr,"%d\n",s[i].maize[j]);
            printf("Ragi production(in tonnes):");
            fprintf(cpr,"Ragi production(in tonnes):");
            fscanf(stdin,"%d",&s[i].ragi[j]);
            fprintf(cpr,"%d\n",s[i].ragi[j]);
            printf("Millets production(in tonnes):");
            fprintf(cpr,"Millets production(in tonnes):");
            fscanf(stdin,"%d",&s[i].millets[j]);
            fprintf(cpr,"%d\n",s[i].millets[j]);
            printf("Barley production(in tonnes):");
            fprintf(cpr,"Barley production(in tonnes):");
            fscanf(stdin,"%d",&s[i].barley[j]);
            fprintf(cpr,"%d\n",s[i].barley[j]);
            printf("\n");
        }
      printf("\n");
      fprintf(cpr,"\n\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=t;j++)
        {
            s[i].total[j]=s[i].rice[j]+s[i].wheat[j]+s[i].jowar[j]+s[i].bajra[j]+s[i].millets[j]+s[i].barley[j]+s[i].ragi[j]+s[i].maize[j];
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=t;j++)
        {
            printf("%d\t",s[i].total[j]);
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=t;j++)
        {
            c=c+s[i].total[j];
            s[i].totcp=c;
        }
        c=0;
    }
    for(i=1;i<=n;i++)
    {
        printf("%d\t",s[i].totcp);
    }
    for(i=1;i<=n;i++)
    {
            c=c+s[i].totcp;
            tcp=c;
    }
    printf("%d",tcp);
    c=0;
    //int t1=0,t2=0,t3=0,t4=0,t5=0,t6=0,t7=0,t8=0;
    for (i=1;i<=n;i++)
    {
        int t1=0,t2=0,t3=0,t4=0,t5=0,t6=0,t7=0,t8=0;
        for(j=1;j<=t;j++)
        {
            t1=t1+s[i].rice[j];
            s[i].r=t1;
            t2=t2+s[i].wheat[j];
            s[i].w=t2;
            t3=t3+s[i].jowar[j];
            s[i].j=t3;
            t4=t4+s[i].bajra[j];
            s[i].ba=t4;
            t5=t5+s[i].maize[j];
            s[i].ma=t5;
            t6=t6+s[i].ragi[j];
            s[i].ra=t6;
            t7=t7+s[i].millets[j];
            s[i].m=t7;
            t8=t8+s[i].barley[j];
            s[i].b=t8;
        }
    }
   // for(i=1;i<=n;i++)
   // {
   //     tr=tr+s[i].r;
    //}*/
    for(i=1;i<=n;i++)
    {
        printf("%s :\n",s[i].state);
        for(j=1;j<=t;j++)
        {
            printf("Year %d\n",year[j]);
            fprintf(cpr,"Year: ");
            fprintf(cpr,"%d\n",year[j]);
            printf("Enter Rainfall (in mm):");
            fprintf(cpr,"Rainfall(in mm):");
            fscanf(stdin,"%f",&s[i].rain[j]);
            fprintf(cpr,"%f\n",s[i].rain[j]);
            printf("\n");
        }
    }
    //float temp=0;
    for(i=1;i<=n;i++)
    {
        d3=0;
        for(j=1;j<=t;j++)
        {
            d3=d3+s[i].rain[j];
            s[i].totra=d3;
        }
    }
    for(i=1;i<=n;i++)
    {
       printf("%f\t",s[i].totra);
    }
    for(i=1;i<=n;i++)
    {
        trf=trf+s[i].totra;
    }
    printf("%f",trf);
    for(i=1;i<=n;i++)
    {
            for(j=1;j<=t;j++)
            {
                s[i].ip[j]=s[i].rain[j]*s[i].rain[j];
            }
    }
    for(i=1;i<=n;i++)
    {
            for(j=1;j<=t;j++)
            {
                d3=d3+s[i].ip[j];
                s[i].x2=d3;
            }
            d3=0;
    }
    /*int choice;
    menu:
    printf("\n1.All India Crop Production Prediction\n2. Crop state wise Production\n");
    printf("Enter a choice:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        {*/
            for(i=1;i<=n;i++)
            {
                s[i].indpro=s[i].totra*s[i].totra;
            }
            for(i=1;i<=n;i++)
            {
                d3=d3+s[i].indpro;
                x2=d3;
            }
            //temp=0;
            for(i=1;i<=n;i++)
            {
                s[i].totpro=s[i].totcp*s[i].totra;
            }
            for(i=1;i<=n;i++)
            {
                d2=d2+s[i].totpro;
                xy=d2;
            }
            b=(xy-((trf*tcp)/n))/(x2-((trf*trf)/n));
            printf("%f\n",b);
            a=(tcp/n)-(b*(trf/n));
            printf("%f\n",a);
            printf("Y= %f + (%f) X\n",a,b);
            fclose(cpr);
        }
        //goto menu1;
    /*case 2:
        {
            printf("1.Rice\t2.Wheat\t3.Jowar\n4.Maize\t5.Bajra\t6.Millets\n7.Ragi\t8.Barley\t9.Exit\n");
            printf("Enter the crop to predict the growth:");
            scanf("%d",&choice1);
            switch(choice1)
            {
                case 1://rice
                    {kml
                        for(i=1;i<=n;i++)
                        {
                            for(j=1;j<=t;j++)
                            {
                                s[i].tpr[j]=s[i].rice[j]*s[i].rain[j];
                            }
                        }
                        for(i=1;i<=n;i++)
                        {
                            for(j=1;j<=t;j++)
                            {
                                d2=d2+s[i].tpr[j];
                                s[i].xy=d2;
                            }
                            d2=0;
                        }
                        for(i=1;i<=n;i++)
                        {
                            b1[i]=(s[i].xy-((s[i].totra*s[i].r)/t))/(s[i].x2-((s[i].totra*s[i].totra)/t));
                            a1[i]=(s[i].r/t)-(b1[i]*(s[i].totra/t));
                            printf("\nY=%f+(%f)X",a1[i],b1[i]);
                        }
                        printf("Enter the Rainfall distribution(in mm)for the preceeding year:");
                        scanf("%f",&d);
                        for(i=1;i<=n;i++)
                        {
                            Y[i]=a1[i]+(b1[i]*d);
                            printf("The predicted production in %s is %f th. tonnes.",s[i].state,Y[i]);
                        }
                    }
                    break;
                case 2://wheat
                    {
                        for(i=1;i<=n;i++)
                        {
                            for(j=1;j<=t;j++)
                            {
                                s[i].tpr[j]=s[i].wheat[j]*s[i].rain[j];
                            }
                        }
                        for(i=1;i<=n;i++)
                        {
                            for(j=1;j<=t;j++)
                            {
                                d2=d2+s[i].tpr[j];
                                s[i].xy=d2;
                            }
                            d2=0;
                        }
                        for(i=1;i<=n;i++)
                        {
                            b1[i]=(s[i].xy-((s[i].totra*s[i].w)/t))/(s[i].x2-((s[i].totra*s[i].totra)/t));
                            a1[i]=(s[i].w/t)-(b1[i]*(s[i].totra/t));
                            printf("\nY=%f+(%f)X",a1[i],b1[i]);
                        }
                        printf("Enter the Rainfall distribution(in mm)for the preceeding year:");
                        scanf("%f",&d);
                        for(i=1;i<=n;i++)
                        {
                            Y[i]=a1[i]+(b1[i]*d);
                            printf("The predicted production in %s is %f th. tonnes.",s[i].state,Y[i]);
                        }
                    }
                    break;
                case 3://jowar
                    {
                        for(i=1;i<=n;i++)
                        {
                            for(j=1;j<=t;j++)
                            {
                                s[i].tpr[j]=s[i].jowar[j]*s[i].rain[j];
                            }
                        }
                        for(i=1;i<=n;i++)
                        {
                            for(j=1;j<=t;j++)
                            {
                                d2=d2+s[i].tpr[j];
                                s[i].xy=d2;
                            }
                            d2=0;
                        }
                        for(i=1;i<=n;i++)
                        {
                            b1[i]=(s[i].xy-((s[i].totra*s[i].j)/t))/(s[i].x2-((s[i].totra*s[i].totra)/t));
                            a1[i]=(s[i].j/t)-(b1[i]*(s[i].totra/t));
                            printf("\nY=%f+(%f)X",a1[i],b1[i]);
                        }
                        printf("Enter the Rainfall distribution(in mm)for the preceeding year:");
                        scanf("%f",&d);
                        for(i=1;i<=n;i++)
                        {
                            Y[i]=a1[i]+(b1[i]*d);
                            printf("The predicted production in %s is %f th. tonnes.",s[i].state,Y[i]);
                        }
                    }
                    break;
                case 4://maize
                    {
                        for(i=1;i<=n;i++)
                        {
                            for(j=1;j<=t;j++)
                            {
                                s[i].tpr[j]=s[i].maize[j]*s[i].rain[j];
                            }
                        }
                        for(i=1;i<=n;i++)
                        {
                            for(j=1;j<=t;j++)
                            {
                                d2=d2+s[i].tpr[j];
                                s[i].xy=d2;
                            }
                            d2=0;
                        }
                        for(i=1;i<=n;i++)
                        {
                            b1[i]=(s[i].xy-((s[i].totra*s[i].ma)/t))/(s[i].x2-((s[i].totra*s[i].totra)/t));
                            a1[i]=(s[i].ma/t)-(b1[i]*(s[i].totra/t));
                            printf("\nY=%f+(%f)X",a1[i],b1[i]);
                        }
                        printf("Enter the Rainfall distribution(in mm)for the preceeding year:");
                        scanf("%f",&d);
                        for(i=1;i<=n;i++)
                        {
                            Y[i]=a1[i]+(b1[i]*d);
                            printf("The predicted production in %s is %f th. tonnes.",s[i].state,Y[i]);
                        }
                    }
                    break;
                case 5://bajra
                    {
                        for(i=1;i<=n;i++)
                        {
                            for(j=1;j<=t;j++)
                            {
                                s[i].tpr[j]=s[i].bajra[j]*s[i].rain[j];
                            }
                        }
                        for(i=1;i<=n;i++)
                        {
                            for(j=1;j<=t;j++)
                            {
                                d2=d2+s[i].tpr[j];
                                s[i].xy=d2;
                            }
                            d2=0;
                        }
                        for(i=1;i<=n;i++)
                        {
                            b1[i]=(s[i].xy-((s[i].totra*s[i].ba)/t))/(s[i].x2-((s[i].totra*s[i].totra)/t));
                            a1[i]=(s[i].ba/t)-(b1[i]*(s[i].totra/t));
                            printf("\nY=%f+(%f)X",a1[i],b1[i]);
                        }
                        printf("Enter the Rainfall distribution(in mm)for the preceeding year:");
                        scanf("%f",&d);
                        for(i=1;i<=n;i++)
                        {
                            Y[i]=a1[i]+(b1[i]*d);
                            printf("The predicted production in %s is %f th. tonnes.",s[i].state,Y[i]);
                        }
                    }
                    break;
                case 6://millets
                    {
                        for(i=1;i<=n;i++)
                        {
                            for(j=1;j<=t;j++)
                            {
                                s[i].tpr[j]=s[i].millets[j]*s[i].rain[j];
                            }
                        }
                        for(i=1;i<=n;i++)
                        {
                            for(j=1;j<=t;j++)
                            {
                                d2=d2+s[i].tpr[j];
                                s[i].xy=d2;
                            }
                            d2=0;
                        }
                        for(i=1;i<=n;i++)
                        {
                            b1[i]=(s[i].xy-((s[i].totra*s[i].m)/t))/(s[i].x2-((s[i].totra*s[i].totra)/t));
                            a1[i]=(s[i].m/t)-(b1[i]*(s[i].totra/t));
                            printf("\nY=%f+(%f)X",a1[i],b1[i]);
                        }
                        printf("Enter the Rainfall distribution(in mm)for the preceeding year:");
                        scanf("%f",&d);
                        for(i=1;i<=n;i++)
                        {
                            Y[i]=a1[i]+(b1[i]*d);
                            printf("The predicted production in %s is %f th. tonnes.",s[i].state,Y[i]);
                        }
                    }
                    break;
                case 7://ragi
                    {
                        for(i=1;i<=n;i++)
                        {
                            for(j=1;j<=t;j++)
                            {
                                s[i].tpr[j]=s[i].ragi[j]*s[i].rain[j];
                            }
                        }
                        for(i=1;i<=n;i++)
                        {
                            for(j=1;j<=t;j++)
                            {
                                d2=d2+s[i].tpr[j];
                                s[i].xy=d2;
                            }
                            d2=0;
                        }
                        for(i=1;i<=n;i++)
                        {
                            b1[i]=(s[i].xy-((s[i].totra*s[i].ra)/t))/(s[i].x2-((s[i].totra*s[i].totra)/t));
                            a1[i]=(s[i].ra/t)-(b1[i]*(s[i].totra/t));
                            printf("\nY=%f+(%f)X",a1[i],b1[i]);
                        }
                        printf("Enter the Rainfall distribution(in mm)for the preceeding year:");
                        scanf("%f",&d);
                        for(i=1;i<=n;i++)
                        {
                            Y[i]=a1[i]+(b1[i]*d);
                            printf("The predicted production in %s is %f th. tonnes.",s[i].state,Y[i]);
                        }
                    }
                    break;
                case 8://barley
                    {
                        for(i=1;i<=n;i++)
                        {
                            for(j=1;j<=t;j++)
                            {
                                s[i].tpr[j]=s[i].barley[j]*s[i].rain[j];
                            }
                        }
                        for(i=1;i<=n;i++)
                        {
                            for(j=1;j<=t;j++)
                            {
                                d2=d2+s[i].tpr[j];
                                s[i].xy=d2;
                            }
                            d2=0;
                        }
                        for(i=1;i<=n;i++)
                        {
                            b1[i]=(s[i].xy-((s[i].totra*s[i].b)/t))/(s[i].x2-((s[i].totra*s[i].totra)/t));
                            a1[i]=(s[i].b/t)-(b1[i]*(s[i].totra/t));
                            printf("\nY=%f+(%f)X",a1[i],b1[i]);
                        }
                        printf("Enter the Rainfall distribution(in mm)for the preceeding year:");
                        scanf("%f",&d);
                        for(i=1;i<=n;i++)
                        {
                            Y[i]=a1[i]+(b1[i]*d);
                            printf("The predicted production in %s is %f th. tonnes.",s[i].state,Y[i]);
                        }
                    }
                    break;
                default:
                    break;

            }

        }
    case 3:
        {

        }
menu1:
    default:
        printf("1.RETRY\n2.EXIT\n");
        printf("Enter choice:");
        scanf("%d",&m);
        if(m==1)
            goto menu;
        else
            break;
    }*/
  //fclose(cpr);
//}
//}
