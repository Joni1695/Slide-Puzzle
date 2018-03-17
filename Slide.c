// Slide Puzzle in C - Joni Seraj
// Sizes of 3x3, 4x4, 5x5 generated randomly. Works by checking the inverses of the matrix values. If that number is odd, the puzzle is solveable.
#include<stdio.h>
#include<conio.h>
#include <windows.h>
#include<stdlib.h>
#include<time.h>
void Music(){
	//Beep function - 2 params, frequency and time, found this online
	Beep(329,300); 
	Beep(493,300); 
	Beep(698,300); 
	Beep(659,600); 

	Beep(783,300); 
	Beep(698,300); 
	Beep(659,600); 

	Beep(329,100); 
	Beep(493,300); 
	Beep(698,300); 
	Beep(659,600);

	Beep(392,250); 
	Beep(440,200); 
	Beep(587,300); 

	Beep(349,250);
	Beep(587,500); 

	Beep(329,300); 
	Beep(493,300); 
	Beep(698,300); 
	Beep(659,600); 

	Beep(783,300); 
	Beep(698,300); 
	Beep(659,600); 

	Beep(329,100); 
	Beep(493,300); 
	Beep(698,300); 
	Beep(659,600);

	Beep(392,250); 
	Beep(440,200); 
	Beep(587,300); 

	Beep(349,250);
	Beep(587,400);

}
// Write the puzzle in a line and return number of inverses, three functions for three matrix sizes
int invers(int t[][3]){
	int i,j,g[9],l=0,p=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			g[l]=t[i][j];
			l++;
		}
	}
	for(i=0;i<9;i++){
		for(j=i+1;j<9;j++){
			if(g[i]==9) break;
			if(g[i]>g[j]) p++;
		}
	}
	return p;
	
}
int invers1(int t[][5]){
	int i,j,g[25],l=0,p=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			g[l]=t[i][j];
			l++;
		}
	}
	for(i=0;i<25;i++){
		for(j=i+1;j<25;j++){
			if(g[i]==25) break;
			if(g[i]>g[j]) p++;
		}
	}
	return p;
	
}
int invers2(int t[][4]){
	int i,j,g[16],l=0,p=0;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			g[l]=t[i][j];
			l++;
		}
	}
	for(i=0;i<16;i++){
		for(j=i+1;j<16;j++){
			if(g[i]==16) break;
			if(g[i]>g[j]) p++;
		}
	}
	return p;
	
}
// Checks for two equal values in the matrix, three functions for three sizes
int Kerko1(int t[][3]){
	int i,j,g[9],l=0,ugjend=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			g[l]=t[i][j];
			l++;
		}
	}
	for(i=0;i<9;i++){
		for(j=i+1;j<9;j++){
			if (g[i]==g[j] && g[i]!=0){
				ugjend=1;
				break;
				
			}
		}if (g[i]==g[j] && g[i]!=0) break;
	}
	return ugjend;
}
int Kerko2(int t[][4]){
	int i,j,g[16],l=0,ugjend=0;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			g[l]=t[i][j];
			l++;
		}
	}
	for(i=0;i<16;i++){
		for(j=i+1;j<16;j++){
			if (g[i]==g[j] && g[i]!=0){
				ugjend=1;
				break;
				
			}
		}if (g[i]==g[j] && g[i]!=0) break;
	}
	return ugjend;
}
int Kerko3(int t[][5]){
	int i,j,g[25],l=0,ugjend=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			g[l]=t[i][j];
			l++;
		}
	}
	for(i=0;i<25;i++){
		for(j=i+1;j<25;j++){
			if (g[i]==g[j] && g[i]!=0){
				ugjend=1;
				break;
				
			}
		}if (g[i]==g[j] && g[i]!=0) break;
	}
	return ugjend;
}
// Checks if puzzle is solved, three functions for three sizes
int Uzgjidh1(int t[][3],int g[][3]){
	int i,j,uzgjidh=0,p[9],l[9],y=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			p[y]=t[i][j];
			l[y]=g[i][j];
			y++;
	    }
    }
	for(i=0;i<9;i++){
		if(p[i]!=l[i]){
			uzgjidh=1;
			break;
		}
	}
	return uzgjidh;
}
int Uzgjidh2(int t[][4],int g[][4]){
	int i,j,uzgjidh=0,p[16],l[16],y=0;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			p[y]=t[i][j];
			l[y]=g[i][j];
			y++;
	    }
    }
	for(i=0;i<16;i++){
		if(p[i]!=l[i]){
			uzgjidh=1;
			break;
		}
	}
	return uzgjidh;
}
int Uzgjidh3(int t[][5],int g[][5]){
	int i,j,uzgjidh=0,p[25],l[25],y=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			p[y]=t[i][j];
			l[y]=g[i][j];
			y++;
	    }
    }
	for(i=0;i<25;i++){
		if(p[i]!=l[i]){
			uzgjidh=1;
			break;
		}
	}
	return uzgjidh;
}
// Calculate the position of 9, 16 and 25
void Llogaritje1(int t[3][3],int &y, int &l){
	int i,j,p=0,g[9];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		   g[p]=t[i][j];
		   p++;
		}
	}
	for(i=0;i<9;i++){
		if(g[i]==9){
			if(i==0 || i==3 || i==6)l=0;
			if(i==1 || i==4 || i==7)l=1;
			if(i==2 || i==5 || i==8)l=2;
			if(i<=2) y=0;
			if(i>2 && i<=5) y=1;
			if(i>5) y=2;
		}
	}
}
void Llogaritje2(int t[4][4],int &y, int &l){
	int i,j,p=0,g[16];
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
		   g[p]=t[i][j];
		   p++;
		}
	}
	for(i=0;i<16;i++){
		if(g[i]==16){
			if(i==0 || i==4 || i==8 || i==12)l=0;
			if(i==1 || i==5 || i==9 || i==13)l=1;
			if(i==2 || i==6 || i==10 || i==14)l=2;
			if(i==3 || i==7 || i==11 || i==15)l=3;
			if(i<=3) y=0;
			if(i>3 && i<=7) y=1;
			if(i>7 && i<=11) y=2;
			if(i>11)y=3;
		}
	}
}
void Llogaritje3(int t[5][5],int &y, int &l){
	int i,j,p=0,g[25];
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
		   g[p]=t[i][j];
		   p++;
		}
	}
	for(i=0;i<25;i++){
		if(g[i]==25){
			if(i==0 || i==5 || i==10 || i==15 || i==20)l=0;
			if(i==1 || i==6 || i==11 || i==16 || i==21)l=1;
			if(i==2 || i==7 || i==12 || i==17 || i==22)l=2;
			if(i==3 || i==8 || i==13 || i==18 || i==23)l=3;
			if(i==4 || i==9 || i==14 || i==19 || i==24)l=4;
			if(i<=4) y=0;
			if(i>4 && i<=9) y=1;
			if(i>9 && i<=14) y=2;
			if(i>14 && i<=19) y=3;
			if(i>19 && i<=24) y=4;
		}
	}
}
// Generation function
void Gjenerim1(int t[][3]){
	int i,j,a,p=0;
	prove:
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			t[i][j]=0;
		}
	}
	srand(time(NULL));
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==0 && j==0) t[i][j]=(rand()%9)+1;
		    else{
		    	a=1;
		    	while(a!=0){
				     t[i][j]=(rand()%9)+1;
		    	     a=Kerko1(t);     
	            }
		
	        }
	    }
    }
    p=invers(t);
    if(p%2==1) goto prove;
    
}
void Gjenerim2(int t[][4]){
	int i,j,a,p,y,l;
	prove2:
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			t[i][j]=0;
		}
	}
	srand(time(NULL));
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i==0 && j==0) t[i][j]=(rand()%16)+1;
		    else{
		    	a=1;
		    	while(a!=0){
				     t[i][j]=(rand()%16)+1;
		    	     a=Kerko2(t);     
	            }
		
	        }
	    }
    }
    Llogaritje2(t,y,l);
    p=invers2(t);
    if(y==0 && p%2==0) goto prove2;
    if(y==2 && p%2==0) goto prove2;
    if(y==1 && p%2==1) goto prove2;
    if(y==3 && p%2==1) goto prove2;
}
void Gjenerim3(int t[][5]){
	int i,j,a,p=0;
	prove1:
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			t[i][j]=0;
		}
	}
	srand(time(NULL));
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==0 && j==0) t[i][j]=(rand()%25)+1;
		    else{
		    	a=1;
		    	while(a!=0){
				     t[i][j]=(rand()%25)+1;
		    	     a=Kerko3(t);     
	            }
		
	        }
	    }
    }
    p=invers1(t);
    if(p%2==1) goto prove1;
}
// Print the puzzle
void ShkruajTabelen1(int t[][3]){
	int i,j;
	printf("\n\n\t");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",t[i][j]);
			if(j==2) printf("\n\n\t");
		}
    }
}
void ShkruajTabelen2(int t[][4]){
	int i,j;
	printf("\n\n\t");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
		   printf("%d\t",t[i][j]);
		   if(j==3) printf("\n\n\t");
	    }
	}
}
void ShkruajTabelen3(int t[][5]){
	int i,j;
	printf("\n\n\t");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
		   printf("%d\t",t[i][j]);
		   if(j==4) printf("\n\n\t");
	    }
	}
}
// Print TopScore
void Topscore(){
	char emri[20];
	float s;
	FILE *f;
	system("cls");
	f=fopen("Piket.txt","r");
	fscanf(f,"%s%f",&emri,&s);
	printf("\n\n\t ");
    printf("\n\n\t %s achieved on a 3x3 the score of %.0f",emri,s);
    fclose(f);
    FILE *l;
    l=fopen("Piket2.txt","r");
    fscanf(l,"%s%f",&emri,&s);
    printf("\n\n\t %s achieved on a 4x4 the score of %.0f",emri,s);
    fclose(l);
    FILE *p;
    p=fopen("Piket3.txt","r");
    fscanf(p,"%s%f",&emri,&s);
    printf("\n\n\t %s achieved on a 5x5 the score of %.0f",emri,s);
    printf("\n\n\t ");
    fclose(p);
      
}
// Write new TopScore
void ShkruajTP(char el[20],float q,float v){
	float s,s1,s2;
	char emri[20],emri1[20],emri2[20];
	FILE *f;
	FILE *l;
	FILE *p;
	system("cls");
	Beep(650,450);
	f=fopen("Piket.txt","r");
	l=fopen("Piket2.txt","r");
	p=fopen("Piket3.txt","r");
	fscanf(f,"%s%f",&emri,&s);
	fscanf(l,"%s%f",&emri1,&s1);
	fscanf(p,"%s%f",&emri2,&s2);
	if(v==0){
		if(q<s){
		 fclose(f);
		 s=q;
		 f=fopen("Piket.txt","w");
		 fprintf(f,"%s\n%f",el,s);
		 }
	}
	if(v==1){
		if(q<s1){
		 fclose(l);
		 s1=q;
		 l=fopen("Piket2.txt","w");
		 fprintf(l,"%s\n%f",el,s1);
		 }
	}
	if(v==2){
		if(q<s2){
		 fclose(p);
		 s2=q;
		 p=fopen("Piket3.txt","w");
		 fprintf(p,"%s\n%f",el,s2);
		 
		 }
	}
	fclose(f);
	fclose(l);
	fclose(p);
	
	
}
int main(){
	int zgjedhje,zgjedhje1,t[3][3]={1,2,3,4,5,6,7,8,9},g[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16},h[5][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    int pozi,pozj,b,tmp,t1[3][3]={0,0,0,0,0,0,0,0,0},g1[4][4]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},h1[5][5]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	char e1[20],levizja;
	float v,piket;
	printf("\n--------------------------------------------------------------------------------");
	printf("\n                                Slide Puzzle                                    ");
	printf("\n--------------------------------------------------------------------------------");
	Music();
	system("cls");
	home:
	piket=0;
	b=1;
	printf("\n--------------------------------------------------------------------------------");
	printf("\n                                Slide Puzzle                                    ");
	printf("\n--------------------------------------------------------------------------------");
	printf("\n1.New Game.");
	printf("\n2.Top Score.");
	printf("\n3.How To Play.");
	printf("\n4.Music.");
	printf("\n5.Exit.");
	printf("\n");
	scanf("%d",&zgjedhje);
	switch(zgjedhje){
		case 1:
		system("cls");
		Beep(650,450);
		Veshtiresi:
		printf("\nChoose the difficulty!");
		printf("\n1.3x3.");
		printf("\n2.4x4.");
		printf("\n3.5x5.");
		scanf("%d",&zgjedhje1);
		switch(zgjedhje1){
			case 1:
				system("cls");
		        Beep(650,450);
				v=0;
				ShkruajTabelen1(t);
				printf("Correct Solution");
				Sleep(2800);
				system("cls");
		        Beep(650,450);
		        Gjenerim1(t1);
		        Llogaritje1(t1,pozi,pozj);
		        printf("\n");
		        while(b!=0){
		        	if(pozi==2 && pozj==2) b=Uzgjidh1(t1,t);
		        	if(b==0)break;
		        	else{
		        		if(pozi==0 && pozj==0){
		        			opsioni1:
		        			ShkruajTabelen1(t1);
							levizja=getch();
		        			switch(levizja){
		        				case 's':
								    tmp=t1[1][0];
		        				    t1[1][0]=9;
		        				    t1[0][0]=tmp;
		        				    break;
		        				case 'd':
		        					tmp=t1[0][1];
		        					t1[0][1]=9;
		        					t1[0][0]=tmp;
		        					break;
		        				default:
		        					system("cls");
		                            Beep(650,450);
								    printf("Ilegal Move.");
								    goto opsioni1;
								    break;
							}
		        			system("cls");
		                    Beep(650,450);
		                    Llogaritje1(t1,pozi,pozj); 
							piket++;
		        			
		        		}
		        		if(pozi==0 && pozj==2){
		        			opsioni2:
		        			ShkruajTabelen1(t1);
							levizja=getch();
		        			switch(levizja){
		        				case 's':
								    tmp=t1[1][2];
		        				    t1[1][2]=9;
		        				    t1[0][2]=tmp;
		        				    break;
		        				case 'a':
		        					tmp=t1[0][1];
		        					t1[0][1]=9;
		        					t1[0][2]=tmp;
		        					break;
		        				default:
		        					system("cls");
		                            Beep(650,450);
								    printf("Ilegal Move.");
								    goto opsioni2;
								    break;
							}
		        			system("cls");
		                    Beep(650,450);
		                    Llogaritje1(t1,pozi,pozj);
							piket++;
						}
						if(pozi==2 && pozj==0){
							opsioni3:
							ShkruajTabelen1(t1);
							levizja=getch();
		        			switch(levizja){
		        				case 'w':
								    tmp=t1[1][0];
		        				    t1[1][0]=9;
		        				    t1[2][0]=tmp;
		        				    break;
		        				case 'd':
		        					tmp=t1[2][1];
		        					t1[2][1]=9;
		        					t1[2][0]=tmp;
		        					break;
		        				default:
		        					system("cls");
		                            Beep(650,450);
								    printf("Ilegal Move.");
								    goto opsioni3;
								    break;
							}
							system("cls");
		                    Beep(650,450);
		                    Llogaritje1(t1,pozi,pozj);
							piket++;
							
						    
		        	    }
		        	    if(pozi==2 && pozj==2){
		        	    	opsioni4:
		        	    	ShkruajTabelen1(t1);
							levizja=getch();
		        			switch(levizja){
		        				case 'w':
								    tmp=t1[1][2];
		        				    t1[1][2]=9;
		        				    t1[2][2]=tmp;
		        				    break;
		        				case 'a':
		        					tmp=t1[2][1];
		        					t1[2][1]=9;
		        					t1[2][2]=tmp;
		        					break;
		        				default:
		        					system("cls");
		                            Beep(650,450);
								    printf("Ilegal Move.");
								    goto opsioni4;
								    break;
							}
							system("cls");
		                    Beep(650,450);
		                    Llogaritje1(t1,pozi,pozj);
							piket++;
							
		        	    	
		        	    }
		        	    if(pozi==0 && pozj==1){
		        	    	opsioni5:
		        	    	ShkruajTabelen1(t1);
							levizja=getch();
		        			switch(levizja){
		        				case 's':
								    tmp=t1[1][1];
		        				    t1[1][1]=9;
		        				    t1[0][1]=tmp;
		        				    break;
		        				case 'a':
		        					tmp=t1[0][0];
		        					t1[0][0]=9;
		        					t1[0][1]=tmp;
		        					break;
		        				case 'd':
		        					tmp=t1[0][2];
		        					t1[0][2]=9;
		        					t1[0][1]=tmp;
		        					break;
		        				default:
		        					system("cls");
		                            Beep(650,450);
								    printf("Ilegal Move.");
								    goto opsioni5;
								    break;
							}
							system("cls");
		                    Beep(650,450);
		                    Llogaritje1(t1,pozi,pozj);
							piket++;
		        	    	
		        	    }
		        	    if(pozi==2 && pozj==1){
		        	    	opsioni6:
		        	    	ShkruajTabelen1(t1);
							levizja=getch();
		        			switch(levizja){
		        				case 'w':
								    tmp=t1[1][1];
		        				    t1[1][1]=9;
		        				    t1[2][1]=tmp;
		        				    break;
		        				case 'a':
		        					tmp=t1[2][0];
		        					t1[2][0]=9;
		        					t1[2][1]=tmp;
		        					break;
		        				case 'd':
		        					tmp=t1[2][2];
		        					t1[2][2]=9;
		        					t1[2][1]=tmp;
		        					break;
		        				default:
		        					system("cls");
		                            Beep(650,450);
								    printf("Ilegal Move.");
								    goto opsioni6;
								    break;
							}
							system("cls");
		                    Beep(650,450);
		                    Llogaritje1(t1,pozi,pozj);
							piket++;
		        	    	
		        	    }
		        	    if(pozi==1 && pozj==0){
		        	    	opsioni7:
		        	    	ShkruajTabelen1(t1);
							levizja=getch();
		        			switch(levizja){
		        				case 'w':
								    tmp=t1[0][0];
		        				    t1[0][0]=9;
		        				    t1[1][0]=tmp;
		        				    break;
		        				case 's':
		        					tmp=t1[2][0];
		        					t1[2][0]=9;
		        					t1[1][0]=tmp;
		        					break;
		        				case 'd':
		        					tmp=t1[1][1];
		        					t1[1][1]=9;
		        					t1[1][0]=tmp;
		        					break;
		        				default:
		        					system("cls");
		                            Beep(650,450);
								    printf("Ilegal Move.");
								    goto opsioni7;
								    break;
		        	    	
		        	        }
		        	        system("cls");
		                    Beep(650,450);
		                    Llogaritje1(t1,pozi,pozj);
							piket++;
						}
		        	    if(pozi==1 && pozj==2){
		        	    	opsioni8:
		        	    	ShkruajTabelen1(t1);
							levizja=getch();
		        			switch(levizja){
		        				case 'w':
								    tmp=t1[0][2];
		        				    t1[0][2]=9;
		        				    t1[1][2]=tmp;
		        				    break;
		        				case 's':
		        					tmp=t1[2][2];
		        					t1[2][2]=9;
		        					t1[1][2]=tmp;
		        					break;
		        				case 'a':
		        					tmp=t1[1][1];
		        					t1[1][1]=9;
		        					t1[1][2]=tmp;
		        					break;
		        				default:
		        					system("cls");
		                            Beep(650,450);
								    printf("Ilegal Move.");
								    goto opsioni8;
								    break;
		        	        }
		        	        system("cls");
		                    Beep(650,450);
		                    Llogaritje1(t1,pozi,pozj);
							piket++;
						}
		        	    if(pozi==1 && pozj==1){
		        	    	opsioni9:
		        	    	ShkruajTabelen1(t1);
							levizja=getch();
		        			switch(levizja){
		        				case 'w':
								    tmp=t1[0][1];
		        				    t1[0][1]=9;
		        				    t1[1][1]=tmp;
		        				    break;
		        				case 's':
		        					tmp=t1[2][1];
		        					t1[2][1]=9;
		        					t1[1][1]=tmp;
		        					break;
		        				case 'a':
		        					tmp=t1[1][0];
		        					t1[1][0]=9;
		        					t1[1][1]=tmp;
		        					break;
		        				case 'd':
		        					tmp=t1[1][2];
		        					t1[1][2]=9;
		        					t1[1][1]=tmp;
		        					break;
		        				default:
		        					system("cls");
		                            Beep(650,450);
								    printf("Ilegal Move.");
								    goto opsioni9;
								    break;
		        	    	
		        	        }
		        	        system("cls");
		                    Beep(650,450);
		                    Llogaritje1(t1,pozi,pozj);
							piket++;
						}
		        }		        	
		}
		printf("You won with %.0f points! Enter your name!",piket);
		scanf("%s",&e1);
		ShkruajTP(e1,piket,v);
		system("cls");
		Beep(650,450);
		Topscore();
		getch();
		system("cls");
		Beep(650,450);
		goto home;
		
		        break;
			case 2:
				system("cls");
		        Beep(650,450);
				v=1;
				ShkruajTabelen2(g);
				printf("Correct Solution");
				Sleep(2800);
				system("cls");
		        Beep(650,450);
		        Gjenerim2(g1);
		        Llogaritje2(g1,pozi,pozj);
		        printf("\n");
		        while(b!=0){
		        	if(pozi==3 && pozj==3) b=Uzgjidh2(g1,g);
		        	if(b==0)break;
		        	else{
		        		if(pozi==0 && pozj==0){
		        			opsioni10:
		        			ShkruajTabelen2(g1);
							levizja=getch();
		        			switch(levizja){
		        				case 's':
								    tmp=g1[1][0];
		        				    g1[1][0]=16;
		        				    g1[0][0]=tmp;
		        				    break;
		        				case 'd':
		        					tmp=g1[0][1];
		        					g1[0][1]=16;
		        					g1[0][0]=tmp;
		        					break;
		        				default:
		        					system("cls");
		                            Beep(650,450);
								    printf("Ilegal Move.");
								    goto opsioni10;
								    break;
							}
		        			system("cls");
		                    Beep(650,450);
		                    Llogaritje2(g1,pozi,pozj);
							piket++;
		        			
		        		}
		        		if(pozi==0 && pozj==3){
		        			opsioni11:
		        			ShkruajTabelen2(g1);
							levizja=getch();
		        			switch(levizja){
		        				case 's':
								    tmp=g1[1][3];
		        				    g1[1][3]=16;
		        				    g1[0][3]=tmp;
		        				    break;
		        				case 'a':
		        					tmp=g1[0][2];
		        					g1[0][2]=16;
		        					g1[0][3]=tmp;
		        					break;
		        				default:
		        					system("cls");
		                            Beep(650,450);
								    printf("Ilegal Move.");
								    goto opsioni11;
								    break;
							}
		        			system("cls");
		                    Beep(650,450);
		                    Llogaritje2(g1,pozi,pozj);
							piket++;
						}
						if(pozi==3 && pozj==0){
							opsioni12:
							ShkruajTabelen2(g1);
							levizja=getch();
		        			switch(levizja){
		        				case 'w':
								    tmp=g1[2][0];
		        				    g1[2][0]=16;
		        				    g1[3][0]=tmp;
		        				    break;
		        				case 'd':
		        					tmp=g1[3][1];
		        					g1[3][1]=16;
		        					g1[3][0]=tmp;
		        					break;
		        				default:
		        					system("cls");
		                            Beep(650,450);
								    printf("Ilegal Move.");
								    goto opsioni12;
								    break;
							}
							system("cls");
		                    Beep(650,450);
		                    Llogaritje2(g1,pozi,pozj);
							piket++;
							
						    
		        	    }
		        	    if(pozi==3 && pozj==3){
		        	    	opsioni13:
		        	    	ShkruajTabelen2(g1);
							levizja=getch();
		        			switch(levizja){
		        				case 'w':
								    tmp=g1[2][3];
		        				    g1[2][3]=16;
		        				    g1[3][3]=tmp;
		        				    break;
		        				case 'a':
		        					tmp=g1[3][2];
		        					g1[3][2]=16;
		        					g1[3][3]=tmp;
		        					break;
		        				default:
		        					system("cls");
		                            Beep(650,450);
								    printf("Ilegal Move.");
								    goto opsioni13;
								    break;
							}
							system("cls");
		                    Beep(650,450);
		                    Llogaritje2(g1,pozi,pozj);
							piket++;
							
		        	    	
		        	    }
		        	    if(pozi==0 && pozj>=1 && pozj<=2){
		        	    	opsioni14:
		        	    	ShkruajTabelen2(g1);
							levizja=getch();
		        			switch(levizja){
		        				case 's':
								    tmp=g1[1][pozj];
		        				    g1[1][pozj]=16;
		        				    g1[0][pozj]=tmp;
		        				    break;
		        				case 'a':
		        					tmp=g1[0][pozj-1];
		        					g1[0][pozj-1]=16;
		        					g1[0][pozj]=tmp;
		        					break;
		        				case 'd':
		        					tmp=g1[0][pozj+1];
		        					g1[0][pozj+1]=16;
		        					g1[0][pozj]=tmp;
		        					break;
		        				default:
		        					system("cls");
		                            Beep(650,450);
								    printf("Ilegal Move.");
								    goto opsioni14;
								    break;
							}
							system("cls");
		                    Beep(650,450);
		                    Llogaritje2(g1,pozi,pozj);
							piket++;
		        	    	
		        	    }
		        	    if(pozi==3 && pozj>=1 && pozj<=2){
		        	    	opsioni15:
		        	    	ShkruajTabelen2(g1);
							levizja=getch();
		        			switch(levizja){
		        				case 'w':
								    tmp=g1[2][pozj];
		        				    g1[2][pozj]=16;
		        				    g1[3][pozj]=tmp;
		        				    break;
		        				case 'a':
		        					tmp=g1[3][pozj-1];
		        					g1[3][pozj-1]=16;
		        					g1[3][pozj]=tmp;
		        					break;
		        				case 'd':
		        					tmp=g1[3][pozj+1];
		        					g1[3][pozj+1]=16;
		        					g1[3][pozj]=tmp;
		        					break;
		        				default:
		        					system("cls");
		                            Beep(650,450);
								    printf("Ilegal Move.");
								    goto opsioni15;
								    break;
							}
							system("cls");
		                    Beep(650,450);
		                    Llogaritje2(g1,pozi,pozj);
							piket++;
		        	    	
		        	    }
		        	    if(pozi>=1 && pozi<=2 && pozj==0){
		        	    	opsioni16:
		        	    	ShkruajTabelen2(g1);
							levizja=getch();
		        			switch(levizja){
		        				case 'w':
								    tmp=g1[pozi-1][0];
		        				    g1[pozi-1][0]=16;
		        				    g1[pozi][0]=tmp;
		        				    break;
		        				case 's':
		        					tmp=g1[pozi+1][0];
		        					g1[pozi+1][0]=16;
		        					g1[pozi][0]=tmp;
		        					break;
		        				case 'd':
		        					tmp=g1[pozi][1];
		        					g1[pozi][1]=16;
		        					g1[pozi][0]=tmp;
		        					break;
		        				default:
		        					system("cls");
		                            Beep(650,450);
								    printf("Ilegal Move.");
								    goto opsioni16;
								    break;
		        	    	
		        	        }
		        	        system("cls");
		                    Beep(650,450);
		                    Llogaritje2(g1,pozi,pozj);
							piket++;
						}
		        	    if(pozi>=1 && pozi<=2 && pozj==3){
		        	    	opsioni17:
		        	    	ShkruajTabelen2(g1);
							levizja=getch();
		        			switch(levizja){
		        				case 'w':
								    tmp=g1[pozi-1][3];
		        				    g1[pozi-1][3]=16;
		        				    g1[pozi][3]=tmp;
		        				    break;
		        				case 's':
		        					tmp=g1[pozi+1][3];
		        					g1[pozi+1][3]=16;
		        					g1[pozi][3]=tmp;
		        					break;
		        				case 'a':
		        					tmp=g1[pozi][2];
		        					g1[pozi][2]=16;
		        					g1[pozi][3]=tmp;
		        					break;
		        				default:
		        					system("cls");
		                            Beep(650,450);
								    printf("Ilegal Move.");
								    goto opsioni17;
								    break;
		        	        }
		        	        system("cls");
		                    Beep(650,450);
		                    Llogaritje2(g1,pozi,pozj);
							piket++;
						}
		        	    if(pozi>=1 && pozi<=2 && pozj<=2 && pozj>=1){
		        	    	opsioni18:
		        	    	ShkruajTabelen2(g1);
							levizja=getch();
		        			switch(levizja){
		        				case 'w':
								    tmp=g1[pozi-1][pozj];
		        				    g1[pozi-1][pozj]=16;
		        				    g1[pozi][pozj]=tmp;
		        				    break;
		        				case 's':
		        					tmp=g1[pozi+1][pozj];
		        					g1[pozi+1][pozj]=16;
		        					g1[pozi][pozj]=tmp;
		        					break;
		        				case 'a':
		        					tmp=g1[pozi][pozj-1];
		        					g1[pozi][pozj-1]=16;
		        					g1[pozi][pozj]=tmp;
		        					break;
		        				case 'd':
		        					tmp=g1[pozi][pozj+1];
		        					g1[pozi][pozj+1]=16;
		        					g1[pozi][pozj]=tmp;
		        					break;
		        				default:
		        					system("cls");
		                            Beep(650,450);
								    printf("Ilegal Move.");
								    goto opsioni18;
								    break;
		        	    	
		        	        }
		        	        system("cls");
		                    Beep(650,450);
		                    Llogaritje2(g1,pozi,pozj);
							piket++;
						}
						
						
		        }
						        	
		}
		printf("You won with %.0f points! Enter your name!",piket);
        scanf("%s",&e1);
	    ShkruajTP(e1,piket,v);
	    system("cls");
	    Beep(650,450);
	    Topscore();
	    getch();
	    system("cls");
	    Beep(650,450);
		goto home;
		        break;
			case 3://kjo eshte e njejta gje si e mesipermja po me veshtiresine mesatare, pra matricen 5X5
				system("cls");
		        Beep(650,450);
				v=2;
				ShkruajTabelen3(h);
				printf("Correct Solution");
				Sleep(2800);
				system("cls");
		        Beep(650,450);
		        Gjenerim3(h1);
		        Llogaritje3(h1,pozi,pozj);
		        printf("\n");
		        while(b!=0){
		        	if(pozi==4 && pozj==4) b=Uzgjidh3(h1,h);
		        	if(b==0)break;
		        	else{
		        		if(pozi==0 && pozj==0){
		        			opsioni19:
		        			ShkruajTabelen3(h1);
							levizja=getch();
		        			switch(levizja){
		        				case 's':
								    tmp=h1[1][0];
		        				    h1[1][0]=25;
		        				    h1[0][0]=tmp;
		        				    break;
		        				case 'd':
		        					tmp=h1[0][1];
		        					h1[0][1]=25;
		        					h1[0][0]=tmp;
		        					break;
		        				default:
		        					system("cls");
		                            Beep(650,450);
								    printf("Ilegal Move.");
								    goto opsioni19;
								    break;
							}
		        			system("cls");
		                    Beep(650,450);
		                    Llogaritje3(h1,pozi,pozj);
							piket++;
		        			
		        		}
		        		if(pozi==0 && pozj==4){
		        			opsioni20:
		        			ShkruajTabelen3(h1);
							levizja=getch();
		        			switch(levizja){
		        				case 's':
								    tmp=h1[1][4];
		        				    h1[1][4]=25;
		        				    h1[0][4]=tmp;
		        				    break;
		        				case 'a':
		        					tmp=h1[0][3];
		        					h1[0][3]=25;
		        					h1[0][4]=tmp;
		        					break;
		        				default:
		        					system("cls");
		                            Beep(650,450);
								    printf("Ilegal Move.");
								    goto opsioni20;
								    break;
							}
		        			system("cls");
		                    Beep(650,450);
		                    Llogaritje3(h1,pozi,pozj);
							piket++;
						}
						if(pozi==4 && pozj==0){
							opsioni21:
							ShkruajTabelen3(h1);
							levizja=getch();
		        			switch(levizja){
		        				case 'w':
								    tmp=h1[3][0];
		        				    h1[3][0]=25;
		        				    h1[4][0]=tmp;
		        				    break;
		        				case 'd':
		        					tmp=h1[4][1];
		        					h1[4][1]=25;
		        					h1[4][0]=tmp;
		        					break;
		        				default:
		        					system("cls");
		                            Beep(650,450);
								    printf("Ilegal Move.");
								    goto opsioni21;
								    break;
							}
							system("cls");
		                    Beep(650,450);
		                    Llogaritje3(h1,pozi,pozj);
							piket++;
							
						    
		        	    }
		        	    if(pozi==4 && pozj==4){
		        	    	opsioni22:
		        	    	ShkruajTabelen3(h1);
							levizja=getch();
		        			switch(levizja){
		        				case 'w':
								    tmp=h1[3][4];
		        				    h1[3][4]=25;
		        				    h1[4][4]=tmp;
		        				    break;
		        				case 'a':
		        					tmp=h1[4][3];
		        					h1[4][3]=25;
		        					h1[4][4]=tmp;
		        					break;
		        				default:
		        					system("cls");
		                            Beep(650,450);
								    printf("Ilegal Move.");
								    goto opsioni22;
								    break;
							}
							system("cls");
		                    Beep(650,450);
		                    Llogaritje3(h1,pozi,pozj);
							piket++;
							
		        	    	
		        	    }
		        	    if(pozi==0 && pozj>=1 && pozj<=3){
		        	    	opsioni23:
		        	    	ShkruajTabelen3(h1);
							levizja=getch();
		        			switch(levizja){
		        				case 's':
								    tmp=h1[1][pozj];
		        				    h1[1][pozj]=25;
		        				    h1[0][pozj]=tmp;
		        				    break;
		        				case 'a':
		        					tmp=h1[0][pozj-1];
		        					h1[0][pozj-1]=25;
		        					h1[0][pozj]=tmp;
		        					break;
		        				case 'd':
		        					tmp=h1[0][pozj+1];
		        					h1[0][pozj+1]=25;
		        					h1[0][pozj]=tmp;
		        					break;
		        				default:
		        					system("cls");
		                            Beep(650,450);
								    printf("Ilegal Move.");
								    goto opsioni23;
								    break;
							}
							system("cls");
		                    Beep(650,450);
		                    Llogaritje3(h1,pozi,pozj);
							piket++;
		        	    	
		        	    }
		        	    if(pozi==4 && pozj>=1 && pozj<=3){
		        	    	opsioni24:
		        	    	ShkruajTabelen3(h1);
							levizja=getch();
		        			switch(levizja){
		        				case 'w':
								    tmp=h1[3][pozj];
		        				    h1[3][pozj]=25;
		        				    h1[4][pozj]=tmp;
		        				    break;
		        				case 'a':
		        					tmp=h1[4][pozj-1];
		        					h1[4][pozj-1]=25;
		        					h1[4][pozj]=tmp;
		        					break;
		        				case 'd':
		        					tmp=h1[4][pozj+1];
		        					h1[4][pozj+1]=25;
		        					h1[4][pozj]=tmp;
		        					break;
		        				default:
		        					system("cls");
		                            Beep(650,450);
								    printf("Ilegal Move.");
								    goto opsioni24;
								    break;
							}
							system("cls");
		                    Beep(650,450);
		                    Llogaritje3(h1,pozi,pozj);
							piket++;
		        	    	
		        	    }
		        	    if(pozi>=1 && pozi<=3 && pozj==0){
		        	    	opsioni25:
		        	    	ShkruajTabelen3(h1);
							levizja=getch();
		        			switch(levizja){
		        				case 'w':
								    tmp=h1[pozi-1][0];
		        				    h1[pozi-1][0]=25;
		        				    h1[pozi][0]=tmp;
		        				    break;
		        				case 's':
		        					tmp=h1[pozi+1][0];
		        					h1[pozi+1][0]=25;
		        					h1[pozi][0]=tmp;
		        					break;
		        				case 'd':
		        					tmp=h1[pozi][1];
		        					h1[pozi][1]=25;
		        					h1[pozi][0]=tmp;
		        					break;
		        				default:
		        					system("cls");
		                            Beep(650,450);
								    printf("Ilegal Move.");
								    goto opsioni25;
								    break;
		        	    	
		        	        }
		        	        system("cls");
		                    Beep(650,450);
		                    Llogaritje3(h1,pozi,pozj);
							piket++;
						}
		        	    if(pozi>=1 && pozi<=3 && pozj==4){
		        	    	opsioni26:
		        	    	ShkruajTabelen3(h1);
							levizja=getch();
		        			switch(levizja){
		        				case 'w':
								    tmp=h1[pozi-1][4];
		        				    h1[pozi-1][4]=25;
		        				    h1[pozi][4]=tmp;
		        				    break;
		        				case 's':
		        					tmp=h1[pozi+1][4];
		        					h1[pozi+1][4]=25;
		        					h1[pozi][4]=tmp;
		        					break;
		        				case 'a':
		        					tmp=h1[pozi][3];
		        					h1[pozi][3]=25;
		        					h1[pozi][4]=tmp;
		        					break;
		        				default:
		        					system("cls");
		                            Beep(650,450);
								    printf("Ilegal Move.");
								    goto opsioni26;
								    break;
		        	        }
		        	        system("cls");
		                    Beep(650,450);
		                    Llogaritje3(h1,pozi,pozj);
							piket++;
						}
		        	    if(pozi>=1 && pozi<=3 && pozj<=3 && pozj>=1){
		        	    	opsioni27:
		        	    	ShkruajTabelen3(h1);
							levizja=getch();
		        			switch(levizja){
		        				case 'w':
								    tmp=h1[pozi-1][pozj];
		        				    h1[pozi-1][pozj]=25;
		        				    h1[pozi][pozj]=tmp;
		        				    break;
		        				case 's':
		        					tmp=h1[pozi+1][pozj];
		        					h1[pozi+1][pozj]=25;
		        					h1[pozi][pozj]=tmp;
		        					break;
		        				case 'a':
		        					tmp=h1[pozi][pozj-1];
		        					h1[pozi][pozj-1]=25;
		        					h1[pozi][pozj]=tmp;
		        					break;
		        				case 'd':
		        					tmp=h1[pozi][pozj+1];
		        					h1[pozi][pozj+1]=25;
		        					h1[pozi][pozj]=tmp;
		        					break;
		        				default:
		        					system("cls");
		                            Beep(650,450);
								    printf("Ilegal Move.");
								    goto opsioni27;
								    break;
		        	    	
		        	        }
		        	        system("cls");
		                    Beep(650,450);
		                    Llogaritje3(h1,pozi,pozj);
							piket++;
						}
						
						
		        }
						        	
		}
		printf("You won with %.0f points! Enter your name!",piket);
        scanf("%s",&e1);
	    ShkruajTP(e1,piket,v);
	    system("cls");
	    Beep(650,450);
	    Topscore();
	    getch();
	    system("cls");
	    Beep(650,450);
		goto home;
		        break;
			default:
				system("cls");
				Beep(650,450);
				printf("Not an option. Please insert a valid option.");
				goto Veshtiresi;
				break;
				
	}
		
	break;
		case 2:
			system("cls");
			Beep(650,450);
			Topscore();
			getch();
			system("cls");
			goto home;
			break;
		case 3:
			system("cls");
	    	Beep(650,450);
	    	printf("\n\nTo play you must choose the option of new game. \n You must solve the slide puzzle of sizes 3X3, 4X4 ose 5X5. \nControl the biggest number with the WASD keys and move it to solve the puzzle as the below solutions.");
	    	ShkruajTabelen1(t);
	    	printf("\n");
	    	ShkruajTabelen2(g);
	    	printf("\n");
	    	ShkruajTabelen3(h);
	    	printf("\n");
	    	getch();
	    	system("cls");
		    Beep(650,450);
	    	goto home;
			break;
			
		case 4:
			Music();
			system("cls");
			goto home;
			break;
		case 5:
			system("cls");
			Beep(650,450);
			exit(0);
			break;
	    default:
			system("cls");
			Beep(650,450);
			printf("Ilegal option. Please select a valid option.");
			goto home;
			break;
			
			
		
	}
	return 0;
}
