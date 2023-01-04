//bsef19m010 NIMRA HAQ

#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;
void setCursor(int x, int y);

class fireball    //fireball class
{
public:
    void display()
    {
        cout << "fireball class " << endl;
    }

};
class spaceship
{
private:
    int xloc;   //data members
    int yloc;
    static int score;
public:
    spaceship()
    {
        xloc = 0;    //default constructor
        yloc = 0;
    }
    virtual void draw() = 0;  //pure virtual function draw
    static void incScore(int x) //set score
    {
        score = score + x;
        if (x == 0)
        {
            score = 0;
        }
    }
    static int giveScore()   //get score
    {
        return score;
    }
    virtual void set(int x, int y) //set function
    {
        this->xloc = x;
        this->yloc = y;
    }
    virtual int fire()
    {
        /////
        return 0;
    }
    virtual void move()
    {
        ///////
    }
   
};
int spaceship::score = 0;
class martianShip : public spaceship
{private:
    int x;
    int y;
    int size;
    fireball* arr;  //object array
public:
    martianShip()
    {
        x = 0;
        y = 0;
        size = 50;    //size of array
        arr = new fireball[size]; //declaring object array
        
    }
    void set(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void draw() //draw bigger spaceship
    {
        int xx = x;
        int yy = y;
        //spaceship pattern
        
        setCursor(x, y);
        cout << "       ******** " << endl;
        y++;
        setCursor(x, y);
        cout << "      **********" << endl;
        y++;
        setCursor(x, y);
        cout << "    //**********\\\\" << endl;
        y++;
        setCursor(x, y);
        cout << "   //  ********  \\\\" << endl;
        y++;
        setCursor(x, y);
        cout << "   ||            ||" << endl;

        y++;
        setCursor(x, y);
        cout << "     ||||||||||||" << endl;
        
        y = yy;
        x = xx;
    }
    int fire()    //fire function for martian spaceship
    {
        size--; //decrementing the size of array
        

        int xx = x;
        int yy = y;
        y = 13;
        do 
        {
            setCursor(x, y);
            cout << "     ^           " << endl;  //fire pattern
            y++;

        } while (y != 18);
        y = 13;
        Sleep(500);
        do
        {
            setCursor(x, y);
            cout << "                 " << endl;  //clear fire pattern
            y++;

        } while (y != 18);
        y = yy;

        return x;    //x coordinate of fire

    }
    void move()                     //moving the martian spaceship vertically
    {
        int xx = x;   //temporary variables to store x and y values 
        int yy = y;
        Sleep(1000);
        //clearing the previously written pattern by printing spaces
        setCursor(x, y);
        cout << "                " << endl;
        y++;
        setCursor(x, y);
        cout << "                " << endl;
        y++;
        setCursor(x, y);
        cout << "                  " << endl;
        y++;
        setCursor(x, y);
        cout << "                   " << endl;
        y++;
        setCursor(x, y);
        cout << "                   " << endl;

        y++;
        setCursor(x, y);
        cout << "                 " << endl;
        
        x = xx;
        y = yy;
        y = y + 1;
        yy = y;
        //printing pattern
        setCursor(x, y);
        cout << "       ******** " << endl;
        y++;
        setCursor(x, y);
        cout << "      **********" << endl;
        y++;
        setCursor(x, y);
        cout << "    //**********\\\\" << endl;
        y++;
        setCursor(x, y);
        cout << "   //  ********  \\\\" << endl;
        y++;
        setCursor(x, y);
        cout << "   ||            ||" << endl;

        y++;
        setCursor(x, y);
        cout << "     ||||||||||||" << endl;
        cout << endl;
        y = yy;
    }

};
class starShip : public spaceship     //star spaceship
{
private:
    int x;
    int y;
    fireball* arr;
    int size; 
public:
    starShip()
    {
        x = 0;
        y = 0;
        size = 50;    //size of object array
        arr = new fireball[size];   //declaring object array
    }
    void set(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void draw() //draw pattern for star Spaceship
    {
        int xx = x;
        int yy = y;
        setCursor(x, y);
        cout << "     _____ " << endl;
        y++;
        setCursor(x, y);
        cout << "    /&&&&&\\ " << endl;
        y++;
        setCursor(x, y);
        cout << "   |&&&&&&&|" << endl;
        y++;
        setCursor(x, y);
        cout << "    \\&&&&&/" << endl;
        y++;
        setCursor(x, y);
        cout << "     :::::" << endl;
        
        y = yy;
        x = xx;
    }
    int fire()  //fire function for star spaceship
    {
        size--;   //decrement the size of object array
        arr[size];

        int xx = x;
        int yy = y;
        y = 10;
        do
        {
            setCursor(x, y);
            cout << "     ^           " << endl;  //fire pattern
            y++;

        } while (y != 18);
        y = 10;
        Sleep(500);
        do
        {
            setCursor(x, y);
            cout << "                 " << endl;  //clear fire pattern
            y++;

        } while (y != 18);
        y = yy;
        return x;    //x coordinate of star spaceship 

    }
    void move()      //moving the starspaceship vertically
    {
        int xx = x;   //temporary variables to store x and y values 
        int yy = y;
                   //clearing the previously written pattern by printing spaces
        Sleep(1000);
        setCursor(x, y);
        cout << "           " << endl;
        y++;
        setCursor(x, y);
        cout << "            " << endl;
        y++;
        setCursor(x, y);
        cout << "            " << endl;
        y++;
        setCursor(x, y);
        cout << "           " << endl;
        y++;
        setCursor(x, y);
        cout << "          " << endl;
         
        x = xx;
        y = yy;
        y = y + 1;
        yy = y;
        setCursor(x, y);
        cout << "     _____ " << endl;
        y++;
        setCursor(x, y);
        cout << "    /&&&&&\\ " << endl;
        y++;
        setCursor(x, y);
        cout << "   |&&&&&&&|" << endl;
        y++;
        setCursor(x, y);
        cout << "    \\&&&&&/" << endl;
        y++;
        setCursor(x, y);
        cout << "     :::::" << endl;
        y = yy;

    }

};
class rocket    //rocket class
{
private:
    int xloc;
    int yloc;
    int no_of_lives;
    int size;
    fireball* arry;
public:
    rocket()  //default constructor
    {
        no_of_lives = 3;
        xloc = 35;
        yloc = 25;
        size = 50; //size of object array
        arry = new fireball[50];   //declaring the object array
    }
    void draw() //draw the rocket
    {
        int xx = xloc; //temporary variables to preserve values 
        int yy = yloc;
        //rocket pattern
        setCursor(xloc, yloc);
        cout << "\t\t\t    A " << endl;
        yloc++;
        setCursor(xloc, yloc);
        cout << "\t\t\t   |*|" << endl;
        yloc++;
        setCursor(xloc, yloc);
        cout << "\t\t\t   |*|" << endl;
        yloc++;
        setCursor(xloc, yloc);
        cout << "\t\t\t  /|*|\\ " << endl;
        yloc++;
        setCursor(xloc, yloc);
        cout << "\t\t\t /_|*|_\\ " << endl;
        
        xloc = xx;
        yloc = yy;
       
    }
    void move(int n)        //moving the rocket
    {          
        for (int i = 0; i < 1; i++)
        {
            if (n == 1)//n=1--->move up
            {
                int xx = xloc;
                int yy = yloc;
                if (yloc <= 18 || yloc >=35 )
                {
                    break;
                }
                //printing spaces to clear precious pattern
                setCursor(xloc, yloc);
                cout << "\t\t\t      " << endl;
                yloc++;
                setCursor(xloc, yloc);
                cout << "\t\t\t      " << endl;
                yloc++;
                setCursor(xloc, yloc);
                cout << "\t\t\t      " << endl;
                yloc++;
                setCursor(xloc, yloc);
                cout << "\t\t\t        " << endl;
                yloc++;
                setCursor(xloc, yloc);
                cout << "\t\t\t         " << endl;
                xloc = xx;
                yloc = yy;
                yloc = yloc - 2; //moving up-->decrement
                yy = yloc;

                setCursor(xloc, yloc);
                cout << "\t\t\t    A " << endl;
                yloc++;
                setCursor(xloc, yloc);
                cout << "\t\t\t   |*|" << endl;
                yloc++;
                setCursor(xloc, yloc);
                cout << "\t\t\t   |*|" << endl;
                yloc++;
                setCursor(xloc, yloc);
                cout << "\t\t\t  /|*|\\ " << endl;
                yloc++;
                setCursor(xloc, yloc);
                cout << "\t\t\t /_|*|_\\ " << endl;
                yloc = yy;
            }
            /////////////////////------------------///////////////
            else if (n == 2)        //n=2--->move down
            {
                int xx = xloc;
                int yy = yloc;
                if (yloc <= 18)
                {
                    yloc++;
                    yloc++;
                    break;
                }
                if ( yloc >= 35)
                {
                    yloc--;
                    yloc--;
                    break;
                }
                //printing spaces to clear precious pattern
                setCursor(xloc, yloc);
                cout << "\t\t\t      " << endl;
                yloc++;
                setCursor(xloc, yloc);
                cout << "\t\t\t      " << endl;
                yloc++;
                setCursor(xloc, yloc);
                cout << "\t\t\t      " << endl;
                yloc++;
                setCursor(xloc, yloc);
                cout << "\t\t\t        " << endl;
                yloc++;
                setCursor(xloc, yloc);
                cout << "\t\t\t         " << endl;
                
                xloc = xx;
                yloc = yy;
                yloc = yloc + 2; //moving down---->increment
                yy = yloc;

                setCursor(xloc, yloc);
                cout << "\t\t\t    A " << endl;
                yloc++;
                setCursor(xloc, yloc);
                cout << "\t\t\t   |*|" << endl;
                yloc++;
                setCursor(xloc, yloc);
                cout << "\t\t\t   |*|" << endl;
                yloc++;
                setCursor(xloc, yloc);
                cout << "\t\t\t  /|*|\\ " << endl;
                yloc++;
                setCursor(xloc, yloc);
                cout << "\t\t\t /_|*|_\\ " << endl;
                yloc = yy;
            }
            /////////////////-------------//////////////
            else if (n == 3)//n=3--->move left
            {
                
                int xx = xloc;
                int yy = yloc;
                if (xloc >= 80)
                {
                    xloc--;
                    xloc--;
                    break;
                }
                if (xloc <= 1)
                {
                    xloc++;
                    xloc++;
                    break;
                }
                setCursor(xloc, yloc);
                cout << "\t\t\t      " << endl;
                yloc++;
                setCursor(xloc, yloc);
                cout << "\t\t\t      " << endl;
                yloc++;
                setCursor(xloc, yloc);
                cout << "\t\t\t      " << endl;
                yloc++;
                setCursor(xloc, yloc);
                cout << "\t\t\t        " << endl;
                yloc++;
                setCursor(xloc, yloc);
                cout << "\t\t\t         " << endl;

                xloc = xx;
                yloc = yy;
                xloc = xloc - 2; //moving left---->decrement
                xx = xloc;

                setCursor(xloc , yloc);
                cout << "\t\t\t    A " << endl;
                yloc++;
                setCursor(xloc, yloc);
                cout << "\t\t\t   |*|" << endl;
                yloc++;
                setCursor(xloc , yloc);
                cout << "\t\t\t   |*|" << endl;
                yloc++;
                setCursor(xloc, yloc);
                cout << "\t\t\t  /|*|\\ " << endl;
                yloc++;
                setCursor(xloc , yloc);
                cout << "\t\t\t /_|*|_\\ " << endl;
               
                yloc = yy;
            }
            else if (n == 4)//n=4--->move right
            {
            int xx = xloc;
            int yy = yloc;
            if (xloc >= 80)
            {
                xloc--;
                xloc--;
                break;
            }
            if (xloc <= 1 )
            {
                xloc++;
                xloc++;
                break;
            }
            //printing spaces to clear previous pattern
            setCursor(xloc, yloc);
            cout << "\t\t\t      " << endl;
            yloc++;
            setCursor(xloc, yloc);
            cout << "\t\t\t      " << endl;
            yloc++;
            setCursor(xloc, yloc);
            cout << "\t\t\t      " << endl;
            yloc++;
            setCursor(xloc, yloc);
            cout << "\t\t\t        " << endl;
            yloc++;
            setCursor(xloc, yloc);
            cout << "\t\t\t         " << endl;

            yloc = yy;
            xloc = xloc + 2;
            xx = xloc;
            //printing pattern 
            setCursor(xloc, yloc);
            cout << "\t\t\t    A " << endl;
            yloc++;
            setCursor(xloc, yloc);
            cout << "\t\t\t   |*|" << endl;
            yloc++;
            setCursor(xloc, yloc);
            cout << "\t\t\t   |*|" << endl;
            yloc++;
            setCursor(xloc, yloc);
            cout << "\t\t\t  /|*|\\ " << endl;
            yloc++;
            setCursor(xloc, yloc);
            cout << "\t\t\t /_|*|_\\ " << endl;
            yloc = yy;
            }
            
        }

    }
    int fire()  //fire function of rocket
    {
        size--;   //decrement the size of object array
        arry[size];
        int xx = xloc;
        int yy = yloc;
       
        yloc--;
        yloc--;
        do {
            
            yloc--;
            setCursor(xloc, yloc);
            cout << "\t\t\t    ::" << endl;
        } while (yloc != 11);
        Sleep(500);
        yloc=yy;
        yloc--;
        yloc--;
        do {
            yloc--;
            setCursor(xloc, yloc);
            cout << "\t\t\t      " << endl;
           
           
            
        } while (yloc != 11);
        yloc = yy;
        return xloc;
    }
    int location()     //location of rocket
    {
        return xloc;
    }
    void lives()   //function to decrement no of lives of player
    {
        no_of_lives--;
    }
    int giveNo()   //function returning no of lives
    {
        return no_of_lives;
    }

};


void setCursor(int x, int y)    //function to set cursor position
{
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = { x, y };
    SetConsoleCursorPosition(output, position);
}
int main()
{
    cout << "NOTE : please press the button three or four times to move the rocket left/right " << endl;
    Sleep(4000);
    system("cls");

    //welcome screen
    cout << endl;
    cout << endl;
    cout << "\t\t\t\t     A" << endl;
    cout << "\t\t\t\t    / \\ "<<endl;
    cout << "\t\t\t\t   | T |" << endl;
    cout << "\t\t\t\t   | E |" << endl;
    cout << "\t\t\t\t   | A |" << endl;
    cout << "\t\t\t\t   | M |" << endl;
    cout << "\t\t\t\t   | - |" << endl;
    cout << "\t\t\t\t   | R |" << endl;
    cout << "\t\t\t\t   | O |" << endl;
    cout << "\t\t\t\t  /| C |\\ " << endl;
    cout << "\t\t\t\t / | K | \\ " << endl;
    cout << "\t\t\t\t|  | E |  | " << endl;
    cout << "\t\t\t\t|  | T |  | " << endl;
    cout << "\t\t\t\t|  |   |  | " << endl;
    cout << "\t\t\t\t '_\"\"\"\"\"_'    " << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\t\t START " << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "\t\tPress \'s\' to start the game " << endl;
    char input;
    do{
        input = _getch();
       
    }while (input!='s');
    system("cls"); //clear screen
    /// <-----------------------------------------
    //game beginning
    int count = 3;
    int score = 0;
    int life = 3;
    do {
        system("cls");
 
        setCursor(1, 1);
        cout << "score:0 " << endl;  //printing score
        
        int x = 10;
        int y = 1;
        spaceship* ptr[4];
        martianShip bship[2];
        starShip sship[2];


        //drawing and moving the spaceships on the screen
        ptr[0] = &bship[0];
        ptr[1] = &sship[0];
        ptr[0]->set(x, y);  //martian ship
        ptr[0]->draw();

        ptr[0]->move();
        ptr[0]->move();

        x = x + 25;
        ptr[1]->set(x, y); //star ship
        ptr[1]->draw();

        ptr[1]->move();
        ptr[1]->move();

        x = x + 25;

        ptr[2] = &bship[1];
        ptr[3] = &sship[1];
        ptr[2]->set(x, y);   //martian ship
        ptr[2]->draw();

        ptr[2]->move();
        ptr[2]->move();

        x = x + 25;
        ptr[3]->set(x, y); //star ship
        ptr[3]->draw();

        ptr[3]->move();
        ptr[3]->move();
        //-------------//////--------------///////
              //drawing rocket 
        rocket roc;
        roc.draw();

       
        int xroc = 0; //x coordinate of rocket
        score = 0;   //score variable in main()
        spaceship::incScore(0);
       
        int m1 = 0; //variables to keep record of consecutive hits of rocket on ships
        int m2 = 0;
        int s1 = 0;
        int s2 = 0;
        
        do
        {
            setCursor(99, 1);
            cout << "         " << endl;
            setCursor(99, 1);
            cout << "lives:" << count << endl;
            //keyinput from the user
            char bb = _getch();

            if (bb == 'f')   //rocket fires if user enter 'f'
            {

                xroc = roc.fire();
                xroc = xroc + 23;   //cursor position of rocket
                if ( xroc >= 12 && xroc <= 30 ) //hits martian ship
                {
                    m2 = 0;
                    s1 = 0;
                    s2 = 0;
                    m1++;
                    if (m1 == 5)
                    {
                        spaceship::incScore(10);
                        score = spaceship::giveScore();
                        setCursor(1, 1);       //update the score
                        cout << "         " << endl;
                        setCursor(1, 1);
                        cout << "score:" << score << endl;
                        setCursor(17, 15);
                        cout << "destroyed!!" << endl;  //displays "destroyed" if a ship is destroyed
                        Sleep(500);
                        setCursor(17, 15);
                        cout << "           " << endl;
                        
                        //first ship
                        m1 = 0;
                    }
                }
                else if (xroc >= 63 && xroc <= 78) //martian spaceship
                {
                    m1 = 0;
                    s1 = 0;
                    s2 = 0;
                    m2++;
                    if (m2 == 5)
                    {
                        spaceship::incScore(10);
                        score = spaceship::giveScore();
                        setCursor(1, 1);       //update the score
                        cout << "         " << endl;
                        setCursor(1, 1);
                        cout << "score:" << score << endl;
                        setCursor(67, 15);
                        cout << "destroyed!!" << endl;
                        Sleep(500);
                        setCursor(67, 15);
                        cout << "           " << endl;

                           
                        //third ship
                        m2 = 0;
                    }
                }
                else if (xroc >= 37 && xroc <= 47 ) //hits star ship
                {
                    m1 = 0;
                    m2 = 0;
                    s2 = 0;
                    s1++;
                    if (s1 == 3)
                    {
                        spaceship::incScore(5);
                        score = spaceship::giveScore();
                        setCursor(1, 1); //update the score
                        cout << "         " << endl;
                        setCursor(1, 1);
                        cout << "score:" << score << endl;
                        setCursor(41, 15);
                        cout << "destroyed!!" << endl;
                        Sleep(500);
                        setCursor(41, 15);
                        cout << "           " << endl;
                        
                        s1 = 0;
                    }
                }
                else if (xroc >= 87 && xroc <= 95)
                {
                    m1 = 0;
                    m2 = 0;
                    s1 = 0;
                    s2++;
                    if (s2 == 3)
                    {
                        spaceship::incScore(5);
                        score = spaceship::giveScore();
                        setCursor(1, 1); //update the score
                        cout << "         " << endl;
                        setCursor(1, 1);
                        cout << "score:" << score << endl;
                        setCursor(91, 15);
                        cout << "destroyed!!" << endl;
                        Sleep(500);
                        setCursor(91, 15);  //--------
                        cout << "           " << endl;
                        
                        s2 = 0;
                    }
                }
            }
            
            else
            {
                m1 = 0;
                m2 = 0;
                s1 = 0;
                s2 = 0;
                char bbb = _getch();   //keyinput if user wants to move the rocket
                
                switch (bbb)
                {
                case 72:
                {
                    roc.move(1);   //up
                    break;
                }

                case 75:
                {
                   
                        roc.move(3);      //left
                      
                    break;
                }
                case 80:
                {

                    roc.move(2);       //down
                    break;
                }
                case 77:
                {

                    roc.move(4);   //right
                    break;
                }

                }
            }
            int shipfire = 0;
            int rocket_loc = roc.location();
            rocket_loc = rocket_loc + 23;
            //if player gets hit by spaceship
            if ((score == 10) || (score == 50) || (score == 70)) 
            {
                
                shipfire = ptr[0]->fire();
                
                if ((shipfire <= (rocket_loc + 5)) && (shipfire >= rocket_loc - 5) )
                {
                    roc.lives();  //decrement in players lives
                    life = roc.giveNo();  //get method for no of lives
                   
                }

            }
            if ((score == 30) || (score == 60) || (score == 80) || (score==5))
            {
                shipfire = ptr[1]->fire();
                if ((shipfire <= (rocket_loc + 5)) && (shipfire >= rocket_loc - 5))
                {
                    roc.lives();  //decrement in players lives
                    life = roc.giveNo();  //get method for no of lives
                   
                }

            }
            if ((score == 15) || (score == 55) || (score == 85))
            {
                shipfire = ptr[2]->fire();
                if ((shipfire <= (rocket_loc + 5)) && (shipfire >= rocket_loc - 5))
                {
                    roc.lives();  //decrement in players lives
                    life = roc.giveNo();  //get method for no of lives
                   
                }

            }
            if ((score == 25) || (score == 90) || (score== 35))
            {
                shipfire = ptr[3]->fire();
                if ((shipfire <= (rocket_loc + 5)) && (shipfire >= rocket_loc - 5))
                {
                    roc.lives();  //decrement in players lives
                    life = roc.giveNo();  //get method for no of lives
                   
                }

            }
            life = roc.giveNo();
        } while ((score < 100) && (life != 0));
        
        if (life == 0)
        {
            count--;
            setCursor(99, 1);
            cout << "         " << endl;
            setCursor(99, 1);
            cout << "lives:" << count << endl;
            Sleep(1000);
            system("cls");
            cout << endl;
            cout << "you have lost this chance!" << endl;
            cout << "remaining chances are " << count << endl;
            cout << endl;
            Sleep(1000);
        }
        if (score >= 100)   //if score is 100, player wins the game
        {
            system("cls");
            setCursor(35, 10);
            cout << "Congratulations! you won the game " << endl;

            cout << endl;
            cout << endl;
            cout << endl;
            count = 0;
        }
       
        
        
    }while (count > 0);   //when the count equals 0, the game ends.
    
    
        return 0;
 }
  