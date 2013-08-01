using namespace std;
//#include <string>
#include <iostream>



const int LINESIZE = 40;
enum {PERIOD='.', COMMA =',', SEMI =';', COLON=':'};


int main()
{
    char inBuf[40];
    int linesize = 0;

    while ( cin >> inBuf)
    {
        char ch;
        int i = 0;

        while (ch=inBuf[i])
        {
            switch (ch){
            case PERIOD:
            case COMMA:
            case SEMI:
            case COLON:
                inBuf[i] = '\0';
                break;
            }
            ++i; ++linesize;
        }
        if(linesize >= LINESIZE)
        {
            cout << "\n";
            linesize =0;
        }
        cout << inBuf << " ";
    }

    return (0);
}

