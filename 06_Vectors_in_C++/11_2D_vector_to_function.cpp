#include<iostream>
#include<vector>
using namespace std;

void change(vector<vector<int>> &v)
{
    v[0][1] = 100;
}
int main()
{
    system("clear"); 

    vector<vector<int>> matrix(3 /*rows*/ , vector<int> (2 /*column*/, 0 /*Giving values to matrix*/));
    int row = matrix.size();
    int column = matrix[0].size();

    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(5);
    
    vector<int>v2;
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(7);
    
    vector<int>v3;
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);
    v3.push_back(11);

    vector<vector<int>> v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    cout<<v[0][1];

    cout<<v[0].size()<<endl;
    cout<<v[1].size()<<endl;
    cout<<v[2].size()<<endl;
    
    return 0;
}