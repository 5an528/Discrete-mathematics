#include<iostream>
using namespace std;
int main ()
{
    int node, edge, i, j, m, n,choice;
    cout<<"Press 1 For Directed Adjucency Matrix \nPress 2 For Undirected Adjucency Matrix \n(1 / 2) ";
    cin>>choice;
    if(choice==1)
        {
            cout<<"\nInput Node-";
            cin>>node;
            cout<<"Input Edge-";
            cin>>edge;
            int G[node][node];
            for (i=0;i<node;i++)
            {
                for (j=0;j<node;j++)
                {
                    G[i][j]=0;
                }
            }
            cout<<"\nInput edge from to where?\n\n";
            for (i=0;i<edge;i++)
            {
                cout<<"From node --> "; cin>>m; cout<<"To   node --> "; cin>>n;
                G[m-1][n-1]=1;
                cout<<"\n\n";
            }
            for (i=0;i<5;i++)
            {
                for (j=0;j<5;j++)
                {
                    cout<<G[i][j]<<"\t";
                }
                cout<<"\n";
            }
    }
    else if (choice==2)
    {
    cout<<"\nInput Node --> ";
    cin>>node;
    cout<<"Input Edge --> ";
    cin>>edge;
    int G[node][node];
    for (i=0;i<node;i++)
    {
        for (j=0;j<node;j++)
        {
            G[i][j]=0;
        }
    }
    cout<<"\nInput edge from to where?\n\n";
    for (i=0;i<edge;i++)
    {
        cout<<"From node-"; cin>>m; cout<<"To   node-"; cin>>n;
        G[m-1][n-1]=1;
        G[n-1][m-1]=1;
        cout<<"\n\n";
    }
    for (i=0;i<node;i++)
    {
        for (j=0;j<node;j++)
        {
            cout<<G[i][j]<<"\t";
        }
        cout<<"\n";
    }
    }
    else
        cout<<"\n\nWrong input!Try again later.\n\n";

}
