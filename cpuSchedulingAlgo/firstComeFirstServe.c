# include <stdio.h>

struct process{
	int id, wait, ser, tottime;
}p[20];

int main(){
	int i, n, j, totalwait=0, totalser=0, avturn, avwait;
	printf("enter number of process: ");
	scanf("%d", &n);
	for(i=0; i<n; ++i){
		printf("enter process_id: ");
		scanf("%d", &p[i].id);
		printf("enter process service time: ");
		scanf("%d", &p[i].ser);
	}
	p[0].wait = 0;
	p[0].tottime = p[0].ser;

	for (i=1; i<n; ++i){
		for(j=0; j<i; ++j)
			p[i].wait = p[i].wait + p[j].ser;
		totalwait = totalwait + p[i].wait;
		p[i].tottime = p[i].wait + p[i].ser;
		totalser = totalser + p[i].tottime;
	}
	avturn = totalser/n;
	avwait = totalwait/n;
	printf("Id\tservice\twait\ttotal");
	for(i=0; i<n; ++i)
		printf("\n%d\t%d\t%d\t%d\n", p[i].id, p[i].ser, p[i].wait, p[i].tottime);
	printf("average waiting time %d\n", avwait);
	printf("average turnaround time %d\n", avturn);
}
