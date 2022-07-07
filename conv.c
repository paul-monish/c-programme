#include<stdio.h>
#include<math.h>

int m=2;
int n=2;
int x[10][10];

void conv(int a[m][n],int b[m][n],int k,int l){
	int i,j,f=0;
	float sum=0.0;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			sum+=a[i][j]*b[i][j];
	
	f=ceil(sum/4);
	x[k][l]=f;
}
int main(){
	int r,c,i,j,k,l;
	int a[2][2],b[10][10],re[2][2];
	printf("========Matrix A========\n");
	printf("Enter element for A matrix:\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	
	printf("========Matrix B========\n");
	printf("Enter row number= ");
	scanf("%d",&r);
	printf("Enter column number= ");
	scanf("%d",&c);
	printf("Enter element for B matrix:\n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&b[i][j]);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			x[i][j]=b[i][j];
	
	printf("Matrix A are:\n");	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);	
		}
		printf("\n");	
	}
			
			
	printf("Matrix B are:\n");	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	for(k=0;k<r;k++){
		for(l=0;l<c;l++){
			for(i=k;i<(k+2) && i<r;i++){
				for(j=l;j<(l+2) && j<c;j++){
					if(k==(r-1) || l==(c-1)){
						continue;
					}
					re[i][j]=b[i][j];
					//printf("%d",re[i][j]);
				}
				//printf("\n");
			}
			
		if((k==(r-1) && (k+l)>=(r-1)) || (l==(c-1)&& (k+l)>=(c-1)) ){
			break;
		}
		else{
			//new_value=conv(a,re);
			//printf("\npos=%d,%d",k,l);
		   	//printf("\nconv=%d\n",conv(a,re));
			conv(a,re,k,l);
		   
		}		
	}
}
	
	printf("Matrix B after convolation:\n");	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
	return 0;
}
