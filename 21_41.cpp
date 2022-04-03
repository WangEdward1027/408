#include <iostream> 

using namespace std;
using std::cout;
using std::endl;

int MAXV = 5;

typedef struct{                 //图的定义
    int numVertices,numEdges;   //图中实际的顶点数和边数
    char VerticesList[MAXV];    //顶点表。MAXV为已定义的常量
    int Edge[MAXV][MAXV];       //邻接矩阵
}MGraph;

int IsExistEL(MGraph G){  //采用邻接矩阵存储，判断图是否存在EL路径
    int degree =0;//该顶点的度
    int count = 0;//度为奇数的顶点个数
    for(int i = 0;i < G.numVertices;i++){
        degree = 0;//对每一个新顶点，清空度重新从0计算
        for(int j = 0;j < G.numVertices;j++){ //对每一行对应的列进行遍历
            degree = degree + G.Edge[i][j];  //无权图，若有边则邻接矩阵Edge[i][j]为1，使得度+1。没边则为0
        if(degree % 2 == 1) 
            count++;  //度为奇数，count+1
        }
    }
    if(count == 0||count == 2)
        return 1;
    else
        return 0;
}

int main()
{
    IsExistEL(MGraph G);
    return 0;
}

