#include <iostream>
#include <string>

using namespace std;

int main()
{
    string script_text = "No, maey! Yu znoy zgyq oy g ykixkz gtj o gs mrgj, zngz eua yurbk oz."
                          "Vrkgyk, hk coykx gtj jut'z zkrr gteutk ghuaz znoy zgyq. Zu iusvrkzk oz eua tkkj zu avrugj"
                          "zu euax moznah tkc zgyq cozn jkiovnkx gtj tgsk oz roqk *EuaxTgsk*_*EuaxLgbuaxozkIuruax*";
    int counter = 0;
    int key = 0;
    cout << "Enter key to descript sentence: ";
    cin >> key;
    while(script_text[counter]){
        counter++;
    }
    for(int i = 0;i < counter;i++){
        if(script_text[i]>='a' && script_text[i]<='z'){
            script_text[i]=script_text[i]-key;
        if(script_text[i]<'a'){
            script_text[i]= (script_text[i]+26);
        }
        }
        if(script_text[i]>='A' && script_text[i]<='Z'){
            script_text[i]=script_text[i]-key;
        if(script_text[i]<'A'){
            script_text[i]= (script_text[i]+26);
        }
        }
    }
    cout << script_text;
}
