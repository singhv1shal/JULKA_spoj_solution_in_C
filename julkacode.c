#include<stdio.h> 
#include<string.h>
int main(){
	char a[101],b[101];
	int p[110],r[101],la,lb,l1,l2,m,k,u,d;
	int i=10;
	while(i--)
	{
		scanf("%s%s",a,b);
		
		
		la=strlen(a); lb=strlen(b);
		
	 l1=la-1; l2=lb-1; m=la-1;
	 int x=0,c=0;
	 
	 //ADDING a+b
	 while(la--)
	 {
 		if(l2<0)
 		{
 			p[x]=a[l1]-'0';
 			
 			p[x]=p[x]+c;
 			c=0;
 			if(l1!=0){
 			if(p[x]>=10)
 			{
 				c=p[x]/10;
 				p[x]=p[x]%10;
 			}
 			}
 			x++; l1--; l2--;
 		}
 		else{
 			p[x]=a[l1]+b[l2]-2*'0';
 			
 			p[x]=p[x]+c;
 			
 			c=0;
 			if(l1!=0){
 				
 			if(p[x]>=10)
 			{
 				c=p[x]/10;
 				
 				p[x]=p[x]%10;
 			}}
 			x++;
 			l1--;
 			l2--;
 		}
 	}
 	
 		 //DIVIDING 2
	 int l,cy=0,z=0,q[101];
	 for(k=m;k>=0;k--)
	 {
 		l=p[k]+cy*10;
 		if(l%2==0)
 		cy=0;
 		else
 		cy=1;
 		q[z]=l/2;
 		z++;
 	}
 	if(q[0]==0)
 
 		u=1;
 		else
 	   u=0;
 		  
 		for(z=u;z<=m;z++)
 		printf("%d",q[z]);
 		printf("\n");
 		
 	//SUBTRACTING
	z=m;
	k=lb-1;
	int t =0;
	 c=0;
	 while(z>=u){
 		if(k<0){
 			
 		r[t]=q[z]-c;
 		c=0;
 		if(r[t]<0)
 			{
 				c=1;
 				r[t]+=10;
 			}
 		}
 		else{
 			r[t]=q[z]-(b[k]-'0');
 			
 			r[t]=r[t]-c;
 			c=0;
 			if(r[t]<0)
 			{
 				c=1;
 				r[t]+=10;
 			}
 		}
 		z--;
 		k--;
 		t++;
 	}
 	d=t-1;
 	while(r[d]==0)
 	d--;
	for(z=d;z>=0;z--)
	printf("%d",r[z]);
	printf("\n");
	}
	
	return 0;
}