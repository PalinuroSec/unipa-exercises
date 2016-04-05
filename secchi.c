/*
 * 
 * TheZ3ro ®
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

void R(int*,int);
void V(int*);
void T(int*,int*,int);
void C(int*,int*,int);

int main(int argc, char **argv)
{
	int a,b,x,xmax,y,ymax,z;
	int OK=0;

	printf("Inserire un numero: ");
	scanf("%d",&a);
	printf("Inserire un numero: ");
	scanf("%d",&b);
	printf("Inserire il valore obiettivo: ");
	scanf("%d",&z);

	if((a<=0) || (b<=0) || (a==b) || (z<=0)){
		printf("Valore non vaido");
	} else {
		// in x sempre il maggiore
		if(a>b){
			y=b;
   			x=a;
		} else {
   			y=a;
  			x=b;
  		}

		if((z>=x)||((x%2==0)&&(y%2==0)&&(z%2!=0))){
			printf("Valore non vaido");
		} else {
			printf("Caso: %d %d => %d \n",x,y,z);
			ymax=y;xmax=x;x=0;y=0;
			int p1=0,p2=0,i=0;
			printf("Agisco sul secchio maggiore\n");
			while(OK==0){
				R(&x,xmax);
				printf("R - %d %d\n",x,y);i++;
				C(&x,&y,ymax);
				printf("C - %d %d\n",x,y);i++;
				V(&y);
				printf("V - %d %d\n",x,y);i++;
				if(x>ymax){
					if(x==z) {
						OK=1;
					} else {
						while((x>ymax) && (OK==0)){
							C(&x,&y,ymax);
							printf("2C - %d %d\n",x,y);i++;
							V(&y);
							printf("2V - %d %d\n",x,y);i++;
							if(x==z) {
								i-=2;//dopo ne tolgo 2 cosi aggiungo 1 adesso
								OK=1;
							}
						}
						T(&x,&y,ymax);
					}
				} else { 
					T(&x,&y,ymax);
				}
				printf("T - %d %d\n",x,y);i++;
				if(y==z) {
					i-=2; // ho già trovato il valore al passo C
					OK=1;
				}
				if((y>100) || (x>100))
					OK=2;
				if(i>100){
					printf("Troppi step, Impossibile?\n");
					OK=2;
				}
			}	
			printf("Passi Maggiore: %d (valore trovato al passo C)\n",i);
			p1=i;
			printf("Agisco sul secchio minore\n");
			y=0;x=0;i=0;OK=0;
			while(OK==0){
				R(&y,ymax);
				printf("R - %d %d\n",x,y);i++;
				T(&y,&x,xmax);
				printf("T - %d %d\n",x,y);i++;
				if((x==z) || (y==z)) {
					OK=1;
				} else {
					if(x==xmax){
						V(&x);
						printf("2V - %d %d\n",x,y);i++;
						T(&y,&x,xmax);
						printf("2T - %d %d\n",x,y);i++;
					}
				}
				if(i>100){
					printf("Troppi step, Impossibile?\n");
					OK=2;
				}
			}
			printf("Passi Minore: %d\n",i);
			p2=i;
			if(p1<=p2){
				if(p1==p2){
					printf("\nGli algoritmi sono equivalenti con %d passi\n",p1);
				}else{
					printf("\nE' piu' efficente A1 (Agisco sul maggiore), %d passi\n",p1);
				}
			}else{
				printf("\nE' piu' efficente A2 (Agisco sul minore), %d passi\n",p2);
			}
		}
	}
	return 0;
}

void R(int *s,int max){ //Riempi X
	*s=max;
}

void V(int *s){ //Vuota
	*s=0;
}

void T(int *s1,int *s2,int ymax){ //Travasa 1 in 2
	if((*s2==0) && (*s1<ymax)){
		*s2=*s1;
		*s1=0;
	} else {
		C(s1,s2,ymax);
	}
}

void C(int *s1,int *s2,int ymax){ //Colma
	if(*s1+*s2<=ymax){
		*s2=*s1+*s2;
		*s1=0;
	} else {
		*s1=*s1-(ymax-*s2);
		*s2=ymax;
	}
}
