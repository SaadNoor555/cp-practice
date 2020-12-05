#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

struct an
{
    int x1, y1, x2, y2, x3, y3;
};

vector<an> ans, ans1;

void twod(string* s,int i, int j);
void twon(string* s,int i, int j);
void one(string* s,int i, int j);

void one(string* s,int i, int j)
{
    if(s[i][j]=='1')
    {
        ans.push_back({i, j, i+1, j, i, j+1});
        s[i][j]= '0', s[i+1][j]='1', s[i][j+1]='1';
    }
    else if(s[i+1][j]=='1')
    {
        ans.push_back({i, j, i+1, j, i+1, j+1});
        s[i][j]= '1', s[i+1][j]='0', s[i+1][j+1]='1';
    }
    else if(s[i][j+1]=='1')
    {
        ans.push_back({i, j, i+1, j+1, i, j+1});
        s[i][j]= '1', s[i+1][j+1]='1', s[i][j+1]='0';
    }
    else
    {
        ans.push_back({i+1, j+1, i+1, j, i, j+1});
        s[i+1][j+1]= '0', s[i+1][j]='1', s[i][j+1]='1';
    }
    twod(s, i, j);
}

void twod(string* s,int i, int j)
{
    if(s[i][j]=='1')
    {
        ans.push_back({i, j, i, j+1, i+1, j});
        s[i][j]='0', s[i+1][j]='1', s[i][j+1]='1';
    }
    else
    {
        ans.push_back({i+1, j, i, j, i+1, j+1});
        s[i+1][j]='0', s[i][j]='1', s[i+1][j+1]='1';
    }
    vector<pair<int, int>> buf;
    for(int x=i; x<i+2; x++)
    {
        for(int y=j; y<j+2; y++)
        {
            if(s[x][y]=='1')
                buf.push_back({x, y}), s[x][y]='0';
        }
    }

    ans.push_back({buf[0].first, buf[0].second, buf[1].first, buf[1].second, buf[2].first, buf[2].second});
}

void twon(string* s,int i, int j)
{
    if(s[i][j]=='1')
    {
        if(s[i+1][j]=='1') 
        {
            ans.push_back({i, j, i+1, j+1, i, j+1});
            s[i][j]='0', s[i][j+1]='1', s[i+1][j+1]= '1';
        }
        else
        {
            ans.push_back({i, j, i+1, j, i+1, j+1});
            s[i][j]='0', s[i+1][j]='1', s[i+1][j+1]= '1';
        }
        
    }
    else if(s[i+1][j]=='1')
    {
        ans.push_back({i+1, j, i, j+1, i, j});
        s[i][j]='1', s[i+1][j]='0', s[i][j+1]= '1';
    }
    else
    {
        ans.push_back({i, j, i+1, j, i+1, j+1});
        s[i][j]='1', s[i+1][j]='1', s[i+1][j+1]= '0';
    }

    vector<pair<int, int>> buf;
    for(int x=i; x<i+2; x++)
    {
        for(int y=j; y<j+2; y++)
        {
            if(s[x][y]=='1')
                buf.push_back({x, y}), s[x][y]='0';
        }
    }

    ans.push_back({buf[0].first,buf[0].second, buf[1].first, buf[1].second, buf[2].first, buf[2].second});
}

int main()
{
    int tc=1;
    cin>> tc;

    while(tc--)
    {
        int n, m;
        cin>> n>> m;
        string s[n], sc[n];

        for(int i=0; i<n; i++)
        {
            cin>> s[i];
            sc[i]= s[i];
        }
        

        for(int i=0; i<n-1; )
        {
            for(int j=0; j<m-1; )
            {
                vector<pair<int, int>> c0, c1;
                for(int x=i; x<i+2; x++)
                {
                    for(int y=j; y<j+2; y++)
                    {
                        if(s[x][y]=='1') c1.push_back({x, y});
                        else c0.push_back({x, y});
                    }
                }

                if(c1.empty());
                else if(c1.size()==3)
                {
                    ans.push_back({c1[0].first, c1[0].second, c1[1].first, c1[1].second, c1[2].first, c1[2].second});
                    s[i][j]='0', s[i+1][j]='0', s[i][j+1]='0', s[i+1][j+1]='0';
                }

                else if(c1.size()==1)
                {
                    one(s, i, j);
                }
                else if(c1.size()==2)
                {
                    if(c1[0].first!=c1[1].first && c1[0].second!=c1[1].second)
                    {
                        twod(s, i, j);
                    }
                    else
                    {
                        twon(s, i, j);
                    }
                }
                else if(c1.size()==4)
                {
                    ans.push_back({i,j, i+1, j, i+1, j+1});
                    s[i][j]='0', s[i+1][j]='0', s[i+1][j+1]='0';
                    one(s, i, j);
                }
                if(j+2<m-1) j+=2;
                else j++;
            }
            if(i+2<n-1) i+=2;
            else i++;
        }
        ans1=ans;
        ans.clear();

        for(int i=n-2; i>=0; )
        {
            for(int j=m-2; j>=0; )
            {
                vector<pair<int, int>> c0, c1;
                for(int x=i; x<i+2; x++)
                {
                    for(int y=j; y<j+2; y++)
                    {
                        if(sc[x][y]=='1') c1.push_back({x, y});
                        else c0.push_back({x, y});
                    }
                }

                if(c1.empty());
                else if(c1.size()==3)
                {
                    ans.push_back({c1[0].first, c1[0].second, c1[1].first, c1[1].second, c1[2].first, c1[2].second});
                    sc[i][j]='0', sc[i+1][j]='0', sc[i][j+1]='0', sc[i+1][j+1]='0';
                }

                else if(c1.size()==1)
                {
                    one(sc, i, j);
                }
                else if(c1.size()==2)
                {
                    if(c1[0].first!=c1[1].first && c1[0].second!=c1[1].second)
                    {
                        twod(sc, i, j);
                    }
                    else
                    {
                        twon(sc, i, j);
                    }
                }
                else if(c1.size()==4)
                {
                    ans.push_back({i,j, i+1, j, i+1, j+1});
                    sc[i][j]='0', sc[i+1][j]='0', sc[i+1][j+1]='0';
                    one(sc, i, j);
                }
                if(j-2>=0) j-=2;
                else j--;
            }
            if(i-2>=0) i-=2;
            else i--;
        }
    // for(int i=0; i<n; i++)
            // {
            //     for(int j=0; j<m; j++) cout<< s[i][j];
            //     cout<< "\n";
            // }
        if(ans.size()<ans1.size())
        {
            cout<< ans.size()<< "\n";
            
            for(int i=0; i<ans.size(); i++)
            {
                cout<< ans[i].x1+1<< " "<< ans[i].y1+1<< " "<< ans[i].x2+1<< " "<< ans[i].y2+1<< " "<< ans[i].x3+1<< " "<< ans[i].y3+1<< "\n";
            }
        }
        else
        {
            cout<< ans1.size()<< "\n";
            
            for(int i=0; i<ans1.size(); i++)
            {
                cout<< ans1[i].x1+1<< " "<< ans1[i].y1+1<< " "<< ans1[i].x2+1<< " "<< ans1[i].y2+1<< " "<< ans1[i].x3+1<< " "<< ans1[i].y3+1<< "\n";
            }
        }

        ans.clear();
        ans1.clear();
        
    }
}
