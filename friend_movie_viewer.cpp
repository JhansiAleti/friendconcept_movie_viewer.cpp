#include <iostream>
using namespace std;
class Movie;
class viewer
{
    int viewerid;
    static int cnt;
    string name;
    int nooftickets;
    int totalcost=0;
    public:viewer()
    {
        cout<<"---------enter the details of the viewer-------------"<<endl;
        viewerid=cnt++;
        cout<<"viewerid:"<<viewerid<<endl;
        cout<<"viewername:"<<endl;
        cin>>name;
        cout<<"nooftickets:"<<endl;
        cin>>nooftickets;
    }
    void displayviewer()
    {
        cout<<"viewerid:"<<viewerid<<endl;
        cout<<"viewername:"<<name<<endl;
        cout<<"no of tickets:"<<nooftickets<<endl;
    }
    void print()
    {
        cout<<"total cost is:"<<totalcost;
    }
    friend class Movie;
};
int viewer::cnt=12000;
class Movie
{
    int movieid;
    static int cnt;
    string moviename;
    int ticketprice;
    public:Movie()
    {
        cout<<"--------enter the details of the movie--------"<<endl;
        movieid=cnt++;
        cout<<"moviename:"<<endl;
        cin>>moviename;
        cout<<"ticketprice:"<<endl;
        cin>>ticketprice;
    }
    void display()
    {
        cout<<"movieid:"<<movieid<<endl;
        cout<<"moviename:"<<moviename<<endl;
        cout<<"ticketprice:"<<ticketprice<<endl;
    }
    void calculatetotalcost(viewer &v)
    {
        v.totalcost=ticketprice*v.nooftickets;
    }
    
};
int Movie::cnt=1005;
int main()
{
    Movie m;
    viewer v;
    v.displayviewer();
    m.display();
    m.calculatetotalcost(v);
    v.print();
}