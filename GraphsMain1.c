#include<stdio.h>
#include<stdlib.h>
#include "GraphsAdjacencyMatrixDirectedGraph.c"
void main() {
int x, op;
int N,E,s,d,i,j;
printf("Enter the number of vertices : ");
scanf("%d",&N);
printf("Enter the number of edges : ");
scanf("%d",&E);
for(i=1;i<=E;i++) {
printf("Enter source : ");
scanf("%d",&s);
printf("Enter destination : ");
scanf("%d",&d);
if(s > N || d > N || s<=0 || d<=0) {
printf("Invalid index. Try again.\n");
i--;
continue;
} else {
graph[s][d] = 1;
}
}
while(1)
{
printf("1.Insert vertex 2.Insert edge 3.Delete vertex 4.Delete edge
5.Print adjacency matrix 6.Exit\n");
printf("Enter your option : ");
scanf("%d", &op);
switch(op) {
case 1:
insertVertex(&N);
break;
case 2:
insertEdge(&N);
break;
case 3:
deleteVertex(&N);
break;
case 4:
deleteEdge(&N);
break;
case 5:
print(&N);
break;
case 6:
exit(0);
}
}
}
