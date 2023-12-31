# include <stdio.h>

void main(){
	int i, j, n, t, turn[20], burst[20], p[20], wt[20], c[20];
	float await, aturn, twait=0, tturn=0;
	printf("enter the value of n: ");
	scanf("%d", &n);
	printf("enter the process no burst and arrivaltime:\n");
	for(i=0; i<n; ++i)
		scanf("%d%d%d", &c[i], &burst[i], &p[i]);
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(p[i]>p[j]){
				t = p[i];
				p[i] = p[j];
				p[j] = t;
				t = burst[i];
				burst[i] = burst[j];
				burst[j] = t;
				t = c[i];
				c[i] = c[j];
				c[j] = t;
			}
		}
	}
	for(i=0; i<n; i++){
		if(i==0){
			wt[i] = 0;
			turn[i] = burst[i];
		}
		else{
			turn[i] = turn[i-1] + burst[i];
			wt[i] = turn[i] - burst[i];
		}
	}
	for(i=0; i<n; ++i){
		twait += wt[i];
		tturn += turn[i];
	}
	await = twait/n;
	aturn = tturn/n;
	printf("pno\tbtime\tatime\twtime\tttime");
	for(i=0; i<n; i++)
		printf("\n%d\t%d\t%d\t%d\t%d\n" , c[i], burst[i], p[i], wt[i], turn[i]);
	printf("The average waiting time is: %f\n", await);
	printf("The average turn around time is: %f\n", aturn);
}
