int graph [20][20];
void print(int * N) {
int i,j;
for(i=1;i<=*N;i++)
{
for(j=1;j<=*N;j++)
{
printf("%d\t",graph[i][j]);
}
printf("\n");
}
}
void insertVertex(int * N) {
int e,g,a[10],b[10],i,j=1,x,y=1,m;
printf("Enter the number edges from the existing vertices to new vertex :
");
scanf("%d",&e);
for(i=0;i<e;i++)
{
printf("Enter the source of each edge : ");
scanf("%d",&a[j++]);
}
printf("Enter the number edges from the new vertex to existing vertices :
");
scanf("%d",&g);
for(x=0;x<g;x++)
{
printf("Enter the destination of each edge : ");
scanf("%d",&b[y++]);
}
*N=*N+1;
for(m=1;m<j;m++)
{
graph[a[m]][*N]=1;
}
for(m=1;m<y;m++)
{
graph[*N][(b[m])]=1;
}
printf("After inserting vertex the adjacency matrix is : \n");
print(N);
}
void insertEdge(int *N) {
int e,f;
printf("Enter the source vertex of the edge : ");
scanf("%d",&e);
printf("Enter the destination vertex of the edge : ");
scanf("%d",&f);
if(graph[e][f]==0)
{
graph[e][f]=1;
printf("After inserting edge the adjacency matrix is : \n");
}
void deleteVertex(int *N) {
if(*N==0)
{
printf("Graph is empty.\n");
return;
}
int v,i;
printf("Enter the vertex to be deleted : ");
scanf("%d",&v);
for(i=1;i<=v;i++)
{
graph[i][v]=0;
graph[v][i]=0;
}
*N=*N-1;
printf("After deleting vertex the adjacency matrix is : \n");
if(*N==0)
{
printf("Graph is empty.\n");
return;
}
print(N);
}
void deleteEdge(int *N) {
int e,f;
printf("Enter the source vertex of the edge : ");
scanf("%d",&e);
printf("Enter the destination vertex of the edge : ");
scanf("%d",&f);
if(graph[e][f]==0)
{
printf("Edge does not exist.\n");
return;
}
int j;
    {
    for(j=1;j<=*N;j++)
    {
    graph[e][j]=0;
    }
    }
printf("After deleting edge the adjacency matrix is : \n");
print(N);
}