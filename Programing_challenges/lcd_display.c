#include <stdio.h>
#include <unistd.h> 
#include <string.h>

char display[1000][1000];
int n_lines, n_cols;

void setSizeLCD(int size) {
	n_lines = 2*size+3;
	n_cols = size + 2;
	display[n_lines][n_cols];
}

void drawZero(int size, int position) {
	int space,i,j,p,q;
    space=(n_lines+1)/2; 
    p=(n_cols*(position-1))+position;
    q=p+n_cols-1;
	for(i=2;i<n_lines;i++)
        if(i!=space){
            display[i][p]='|';
            display[i][q]='|';
        }
    for(j=p+1;j<q;j++) {
        display[1][j]='-';
        display[n_lines][j]='-';
    }

}

void drawOne(int size, int position) {
	int space,i,j,p,q;
    space=(n_lines+1)/2;
    p=(n_cols*(position-1))+position;
    q=p+n_cols-1;
    for(i=2;i<n_lines;i++)
        if(i!=space) display[i][q]='|';
}

void drawTwo(int size, int position) {
	int space,i,j,p,q;
	space=(n_lines+1)/2; 
    p=(n_cols*(position-1))+position;
    q=p+n_cols-1;
    for(i=2;i<space;i++)
        display[i][q]='|';
    for(i=space+1;i<n_lines;i++)
        display[i][p]='|';
    for(j=p+1;j<q;j++) {
        display[1][j]='-';
        display[space][j]='-';
        display[n_lines][j]='-';
    }
}

void drawThree(int size, int position) {
	int space,i,j,p,q;
	space=(n_lines+1)/2; 
    p=(n_cols*(position-1))+position;
    q=p+n_cols-1;
    for(i=2;i<n_lines;i++)
        if(i!=space) display[i][q]='|';
     for(j=p+1;j<q;j++) {
        display[1][j]='-';
        display[space][j]='-';
        display[n_lines][j]='-';
    }

}

void drawFour(int size, int position) {
	int space,i,j,p,q;
	space=(n_lines+1)/2; 
    p=(n_cols*(position-1))+position;
    q=p+n_cols-1;
	for(i=2;i<space;i++)
        display[i][p]='|';
    for(i=2;i<n_lines;i++)
        if(i!=space) display[i][q]='|';
            for(j=p+1;j<q;j++)
                display[space][j]='-';
}

void drawFive(int size, int position) {
	int space,i,j,p,q;
	space=(n_lines+1)/2; 
    p=(n_cols*(position-1))+position;
    q=p+n_cols-1;
	for(i=2;i<space;i++)
        display[i][p]='|';
    for(i=space+1;i<n_lines;i++)
        if(i!=space) display[i][q]='|';
            for(j=p+1;j<q;j++) {
                display[1][j]='-';
                display[space][j]='-';
                display[n_lines][j]='-';
            }
}

void drawSix(int size, int position){
	int space,i,j,p,q;
	space=(n_lines+1)/2; 
    p=(n_cols*(position-1))+position;
    q=p+n_cols-1;
    for(i=2;i<n_lines;i++)
        if(i!=space) display[i][p]='|';
    for(i=space+1;i<n_lines;i++)
        display[i][q]='|';
    for(j=p+1;j<q;j++) {
        display[1][j]='-';
        display[space][j]='-';
        display[n_lines][j]='-';
    }

}

void drawSeven(int size, int position) {
	int space,i,j,p,q;
	space=(n_lines+1)/2; 
    p=(n_cols*(position-1))+position;
    q=p+n_cols-1;
    for(i=2;i<n_lines;i++)
        if(i!=space) display[i][q]='|';
    for(j=p+1;j<q;j++) display[1][j]='-';
}


void drawEight(int size, int position) {
	int space,i,j,p,q;
	space=(n_lines+1)/2; 
    p=(n_cols*(position-1))+position;
    q=p+n_cols-1;
    for(i=2;i<n_lines;i++)
        if(i!=space){
            display[i][p]='|';
            display[i][q]='|';
        }
    for(j=p+1;j<q;j++){
        display[1][j]='-';
        display[space][j]='-';
        display[n_lines][j]='-';
    }
}

void drawNine(int size, int position) {
	int space,i,j,p,q;
	space=(n_lines+1)/2; 
    p=(n_cols*(position-1))+position;
    q=p+n_cols-1;
    for(i=2;i<n_lines;i++)
        if(i!=space) display[i][q]='|';
    for(i=2;i<space;i++)
        display[i][p]='|';
    for(j=p+1;j<q;j++) {
        display[1][j]='-';
        display[space][j]='-';
        display[n_lines][j]='-';
    }
}

void clearDisplay() {
	memset(&display, ' ', sizeof(display));
}

int main(int argc, char const *argv[]) {
	
	int size, i, j, f;
	char num[50]; 
	while(scanf("%d %s", &size, num) != EOF) {
		
		printf("\n");
		if(size == 0 && atoi(num) == 0) break;
		setSizeLCD(size);
		int length = sizeof(num)/sizeof(num[0]);
		f=(length*n_cols)+length-1;
		clearDisplay(); 

		for (i = 0; i < length; i++) {
			if(num[i]-'0'==0) drawZero(size,i+1);
			if(num[i]-'0'==1) drawOne(size,i+1);
			if(num[i]-'0'==2) drawTwo(size,i+1);
			if(num[i]-'0'==3) drawThree(size,i+1);
			if(num[i]-'0'==4) drawFour(size,i+1);
			if(num[i]-'0'==5) drawFive(size,i+1);
			if(num[i]-'0'==6) drawSix(size,i+1);
			if(num[i]-'0'==7) drawSeven(size,i+1);
			if(num[i]-'0'==8) drawEight(size,i+1);
			if(num[i]-'0'==9) drawNine(size,i+1);
		}

		 for(i=1;i<=n_lines;i++) {
        	for(j=1;j<=f;j++)
            	printf("%c",display[i][j]);
            printf("\n");
        	}
        memset(&num, ' ', sizeof(num));
		}
		printf("\n");

	return 0;
}