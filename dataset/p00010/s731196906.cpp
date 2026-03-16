    #include<iostream>
    #include<iomanip>
    #include<cmath>
    using namespace std;

    int main ()
    {
        int num;
        double x1,y1,x2,y2,x3,y3;

        cin >> num;

        for( int i = 0; i < num; i++ )
        {
            double px = 0, py = 0, r = 0;
            cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

            px = ((x1*x1-x3*x3+y1*y1-y3*y3)*(y2-y1)-(x1*x1-x2*x2+y1*y1-y2*y2)*(y3-y1)) / (2*(x2-x1)*(y3-y1)-2*(x3-x1)*(y2-y1));
            py = ((x1-x3)*(x1*x1 -x2*x2 +y1*y1 -y2*y2)-(x1-x2)*(x1*x1-x3*x3+y1*y1-y3*y3)) / (2*(x1-x3)*(y1-y2)-2*(x1-x2)*(y1-y3));
            //py = ((2*(x1-x2)*px+x2*x2-x1*x1+y2*y2-y1*y1)) / (2*(y2-y1));
            r = sqrt((px-x1)*(px-x1) + (py-y1)*(py-y1));

            cout << fixed;
            cout << setprecision(3) << px << " " << py << " " << r << endl;
        }

        return 0;
    }
