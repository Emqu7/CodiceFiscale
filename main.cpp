#include <iostream>
#include <sstream>
using namespace std;

bool finished;
stringstream ss;
string name, surname, city, sex, scanning, fiscalCode = "0000000000000000";
int i, day, month, year, counter, consonantCounter, disp = 0, par = 0, check;

void surnameCoder()
{
    counter = 0;
    for (i = 0; i < surname.length(); i++)
    {
        if (surname[i] == 'b' || surname[i] == 'B')
        {
            fiscalCode[counter] = 'B';
            counter++;
        }
        else if (surname[i] == 'c' || surname[i] == 'C')
        {
            fiscalCode[counter] = 'C';
            counter++;
        }
        else if (surname[i] == 'd' || surname[i] == 'D')
        {
            fiscalCode[counter] = 'D';
            counter++;
        }
        else if (surname[i] == 'f' || surname[i] == 'F')
        {
            fiscalCode[counter] = 'F';
            counter++;
        }
        else if (surname[i] == 'g' || surname[i] == 'G')
        {
            fiscalCode[counter] = 'G';
            counter++;
        }
        else if (surname[i] == 'h' || surname[i] == 'H')
        {
            fiscalCode[counter] = 'H';
            counter++;
        }
        else if (surname[i] == 'j' || surname[i] == 'J')
        {
            fiscalCode[counter] = 'J';
            counter++;
        }
        else if (surname[i] == 'k' || surname[i] == 'K')
        {
            fiscalCode[counter] = 'K';
            counter++;
        }
        else if (surname[i] == 'l' || surname[i] == 'L')
        {
            fiscalCode[counter] = 'L';
            counter++;
        }
        else if (surname[i] == 'm' || surname[i] == 'M')
        {
            fiscalCode[counter] = 'M';
            counter++;
        }
        else if (surname[i] == 'n' || surname[i] == 'N')
        {
            fiscalCode[counter] = 'B';
            counter++;
        }
        else if (surname[i] == 'p' || surname[i] == 'P')
        {
            fiscalCode[counter] = 'P';
            counter++;
        }
        else if (surname[i] == 'q' || surname[i] == 'Q')
        {
            fiscalCode[counter] = 'Q';
            counter++;
        }
        else if (surname[i] == 'r' || surname[i] == 'R')
        {
            fiscalCode[counter] = 'R';
            counter++;
        }
        else if (surname[i] == 's' || surname[i] == 'S')
        {
            fiscalCode[counter] = 'S';
            counter++;
        }
        else if (surname[i] == 't' || surname[i] == 'T')
        {
            fiscalCode[counter] = 'T';
            counter++;
        }
        else if (surname[i] == 'v' || surname[i] == 'V')
        {
            fiscalCode[counter] = 'V';
            counter++;
        }
        else if (surname[i] == 'w' || surname[i] == 'W')
        {
            fiscalCode[counter] = 'W';
            counter++;
        }
        else if (surname[i] == 'x' || surname[i] == 'X')
        {
            fiscalCode[counter] = 'X';
            counter++;
        }
        else if (surname[i] == 'y' || surname[i] == 'Y')
        {
            fiscalCode[counter] = 'Y';
            counter++;
        }
        else if (surname[i] == 'z' || surname[i] == 'Z')
        {
            fiscalCode[counter] = 'Z';
            counter++;
        }
    }

    i = 0;
    while (counter < 3 && i < surname.length())
    {
        if (surname[i] == 'a' || surname[i] == 'A')
        {
            fiscalCode[counter] = 'A';
            counter++;
        }
        else if (surname[i] == 'e' || surname[i] == 'E')
        {
            fiscalCode[counter] = 'E';
            counter++;
        }
        else if (surname[i] == 'i' || surname[i] == 'I')
        {
            fiscalCode[counter] = 'I';
            counter++;
        }
        else if (surname[i] == 'o' || surname[i] == 'O')
        {
            fiscalCode[counter] = 'O';
            counter++;
        }
        else if (surname[i] == 'u' || surname[i] == 'U')
        {
            fiscalCode[counter] = 'U';
            counter++;
        }
        i++;
    }
    while (counter < 3)
    {
        fiscalCode[counter] = 'X';
        counter++;
    }
}

void nameCoder()
{
    consonantCounter = 0;
    counter = 3;
    for (i = 0; i < name.length(); i++)
    {
        if (name[i] == 'b' || name[i] == 'B')
        {
            if (consonantCounter != 1)
            {
                fiscalCode[counter] = 'B';
                counter++;
            }
            consonantCounter++;
        }
        else if (name[i] == 'c' || name[i] == 'C')
        {
            if (consonantCounter != 1)
            {
                fiscalCode[counter] = 'C';
                counter++;
            }
            consonantCounter++;
        }
        else if (name[i] == 'd' || name[i] == 'D')
        {
            if (consonantCounter != 1)
            {
                fiscalCode[counter] = 'D';
                counter++;
            }
            consonantCounter++;
        }
        else if (name[i] == 'f' || name[i] == 'F')
        {
            if (consonantCounter != 1)
            {
                fiscalCode[counter] = 'F';
                counter++;
            }
            consonantCounter++;
        }
        else if (name[i] == 'g' || name[i] == 'G')
        {
            if (consonantCounter != 1)
            {
                fiscalCode[counter] = 'G';
                counter++;
            }
            consonantCounter++;
        }
        else if (name[i] == 'h' || name[i] == 'H')
        {
            if (consonantCounter != 1)
            {
                fiscalCode[counter] = 'H';
                counter++;
            }
            consonantCounter++;
        }
        else if (name[i] == 'j' || name[i] == 'J')
        {
            if (consonantCounter != 1)
            {
                fiscalCode[counter] = 'J';
                counter++;
            }
            consonantCounter++;
        }
        else if (name[i] == 'k' || name[i] == 'K')
        {
            if (consonantCounter != 1)
            {
                fiscalCode[counter] = 'K';
                counter++;
            }
            consonantCounter++;
        }
        else if (name[i] == 'l' || name[i] == 'L')
        {
            if (consonantCounter != 1)
            {
                fiscalCode[counter] = 'L';
                counter++;
            }
            consonantCounter++;
        }
        else if (name[i] == 'm' || name[i] == 'M')
        {
            if (consonantCounter != 1)
            {
                fiscalCode[counter] = 'M';
                counter++;
            }
            consonantCounter++;
        }
        else if (name[i] == 'n' || name[i] == 'N')
        {
            if (consonantCounter != 1)
            {
                fiscalCode[counter] = 'N';
                counter++;
            }
            consonantCounter++;
        }
        else if (name[i] == 'p' || name[i] == 'P')
        {
            if (consonantCounter != 1)
            {
                fiscalCode[counter] = 'P';
                counter++;
            }
            consonantCounter++;
        }
        else if (name[i] == 'q' || name[i] == 'Q')
        {
            if (consonantCounter != 1)
            {
                fiscalCode[counter] = 'Q';
                counter++;
            }
            consonantCounter++;
        }
        else if (name[i] == 'r' || name[i] == 'R')
        {
            if (consonantCounter != 1)
            {
                fiscalCode[counter] = 'R';
                counter++;
            }
            consonantCounter++;
        }
        else if (name[i] == 's' || name[i] == 'S')
        {
            if (consonantCounter != 1)
            {
                fiscalCode[counter] = 'S';
                counter++;
            }
            consonantCounter++;
            ;
        }
        else if (name[i] == 't' || name[i] == 'T')
        {
            if (consonantCounter != 1)
            {
                fiscalCode[counter] = 'T';
                counter++;
            }
            consonantCounter++;
        }
        else if (name[i] == 'v' || name[i] == 'V')
        {
            if (consonantCounter != 1)
            {
                fiscalCode[counter] = 'V';
                counter++;
            }
            consonantCounter++;
        }
        else if (name[i] == 'w' || name[i] == 'W')
        {
            if (consonantCounter != 1)
            {
                fiscalCode[counter] = 'W';
                counter++;
            }
            consonantCounter++;
        }
        else if (name[i] == 'x' || name[i] == 'X')
        {
            if (consonantCounter != 1)
            {
                fiscalCode[counter] = 'X';
                counter++;
            }
            consonantCounter++;
        }
        else if (name[i] == 'y' || name[i] == 'Y')
        {
            if (consonantCounter != 1)
            {
                fiscalCode[counter] = 'Y';
                counter++;
            }
            consonantCounter++;
        }
        else if (name[i] == 'z' || name[i] == 'Z')
        {
            if (consonantCounter != 1)
            {
                fiscalCode[counter] = 'Z';
                counter++;
            }
            consonantCounter++;
        }
    }
    if (consonantCounter < 4)
    {
        counter = 3;
        for (i = 0; i < name.length(); i++)
        {
            if (name[i] == 'b' || name[i] == 'B')
            {
                fiscalCode[counter] = 'B';
                counter++;
            }
            else if (name[i] == 'c' || name[i] == 'C')
            {
                fiscalCode[counter] = 'C';
                counter++;
            }
            else if (name[i] == 'd' || name[i] == 'D')
            {
                fiscalCode[counter] = 'D';
                counter++;
            }
            else if (name[i] == 'f' || name[i] == 'F')
            {
                fiscalCode[counter] = 'F';
                counter++;
            }
            else if (name[i] == 'g' || name[i] == 'G')
            {
                fiscalCode[counter] = 'G';
                counter++;
            }
            else if (name[i] == 'h' || name[i] == 'H')
            {
                fiscalCode[counter] = 'H';
                counter++;
            }
            else if (name[i] == 'j' || name[i] == 'J')
            {
                fiscalCode[counter] = 'J';
                counter++;
            }
            else if (name[i] == 'k' || name[i] == 'K')
            {
                fiscalCode[counter] = 'K';
                counter++;
            }
            else if (name[i] == 'l' || name[i] == 'L')
            {
                fiscalCode[counter] = 'L';
                counter++;
            }
            else if (name[i] == 'm' || name[i] == 'M')
            {
                fiscalCode[counter] = 'M';
                counter++;
            }
            else if (name[i] == 'n' || name[i] == 'N')
            {
                fiscalCode[counter] = 'B';
                counter++;
            }
            else if (name[i] == 'p' || name[i] == 'P')
            {
                fiscalCode[counter] = 'P';
                counter++;
            }
            else if (name[i] == 'q' || name[i] == 'Q')
            {
                fiscalCode[counter] = 'Q';
                counter++;
            }
            else if (name[i] == 'r' || name[i] == 'R')
            {
                fiscalCode[counter] = 'R';
                counter++;
            }
            else if (name[i] == 's' || name[i] == 'S')
            {
                fiscalCode[counter] = 'S';
                counter++;
            }
            else if (name[i] == 't' || name[i] == 'T')
            {
                fiscalCode[counter] = 'T';
                counter++;
            }
            else if (name[i] == 'v' || name[i] == 'V')
            {
                fiscalCode[counter] = 'V';
                counter++;
            }
            else if (name[i] == 'w' || name[i] == 'W')
            {
                fiscalCode[counter] = 'W';
                counter++;
            }
            else if (name[i] == 'x' || name[i] == 'X')
            {
                fiscalCode[counter] = 'X';
                counter++;
            }
            else if (name[i] == 'y' || name[i] == 'Y')
            {
                fiscalCode[counter] = 'Y';
                counter++;
            }
            else if (name[i] == 'z' || name[i] == 'Z')
            {
                fiscalCode[counter] = 'Z';
                counter++;
            }
        }

        i = 0;
        while (counter < 6 && i < name.length())
        {
            if (name[i] == 'a' || name[i] == 'A')
            {
                fiscalCode[counter] = 'A';
                counter++;
            }
            else if (name[i] == 'e' || name[i] == 'E')
            {
                fiscalCode[counter] = 'E';
                counter++;
            }
            else if (name[i] == 'i' || name[i] == 'I')
            {
                fiscalCode[counter] = 'I';
                counter++;
            }
            else if (name[i] == 'o' || name[i] == 'O')
            {
                fiscalCode[counter] = 'O';
                counter++;
            }
            else if (name[i] == 'u' || name[i] == 'U')
            {
                fiscalCode[counter] = 'U';
                counter++;
            }
            i++;
        }
        while (counter < 6)
        {
            fiscalCode[counter] = 'X';
            counter++;
        }
    }
}

void dayCoder()
{
    if (sex[0] == 'F' || sex[0] == 'f')
    {
        day = day + 40;
    }
    ss << day;
    if (day > 9)
    {
        ss >> fiscalCode[9];
    }
    ss >> fiscalCode[10];
}

void monthCoder()
{
    if (month == 1)
    {
        fiscalCode[8] = 'A';
    }
    else if (month == 2)
    {
        fiscalCode[8] = 'B';
    }
    else if (month == 3)
    {
        fiscalCode[8] = 'C';
    }
    else if (month == 4)
    {
        fiscalCode[8] = 'D';
    }
    else if (month == 5)
    {
        fiscalCode[8] = 'E';
    }
    else if (month == 6)
    {
        fiscalCode[8] = 'H';
    }
    else if (month == 7)
    {
        fiscalCode[8] = 'L';
    }
    else if (month == 8)
    {
        fiscalCode[8] = 'M';
    }
    else if (month == 9)
    {
        fiscalCode[8] = 'P';
    }
    else if (month == 10)
    {
        fiscalCode[8] = 'R';
    }
    else if (month == 11)
    {
        fiscalCode[8] = 'S';
    }
    else if (month == 12)
    {
        fiscalCode[8] = 'T';
    }
}

void yearCoder()
{
    if (year >= 2000 && year < 2010)
    {
        year = year - 2000;
        ss << year;
        ss >> fiscalCode[7];
    }
    else if (year >= 2010)
    {
        year = year - 2000;
        ss << year;
        ss >> fiscalCode[6];
        ss >> fiscalCode[7];
    }
    else
    {
        year = year - 1900;
        ss << year;
        ss >> fiscalCode[6];
        ss >> fiscalCode[7];
    }
}

void cityCoder()
{
    if (city == "ABANOTERME")
    {
        city = "A001";
        finished = true;
    }
    else if (city == "ABBADIACERRETO")
    {
        city = "A004";
        finished = true;
    }
    else if (city == "ABBADIALARIANA")
    {
        city = "A005";
        finished = true;
    }
    else if (city == "ABBADIASANSALVATORE")
    {
        city = "A006";
        finished = true;
    }
    else if (city == "ABBASANTA")
    {
        city = "A007";
        finished = true;
    }
    else if (city == "ABBATEGGIO")
    {
        city = "A008";
        finished = true;
    }
    else if (city == "ABBIATEGRASSO")
    {
        city = "A010";
        finished = true;
    }
    else if (city == "ABETONE")
    {
        city = "A012";
        finished = true;
    }
    else if (city == "ABETONECUTIGLIANO")
    {
        city = "M376";
        finished = true;
    }
    else if (city == "ABRIOLA")
    {
        city = "A013";
        finished = true;
    }
    else if (city == "ACATE")
    {
        city = "A014";
        finished = true;
    }
    else if (city == "ACCADIA")
    {
        city = "A015";
        finished = true;
    }
    else if (city == "ACCEGLIO")
    {
        city = "A016";
        finished = true;
    }
    else if (city == "ACCETTURA")
    {
        city = "A017";
        finished = true;
    }
    else if (city == "ACCIANO")
    {
        city = "A018";
        finished = true;
    }
    else if (city == "ACCUMOLI")
    {
        city = "A019";
        finished = true;
    }
    else if (city == "ACERENZA")
    {
        city = "A020";
        finished = true;
    }
    else if (city == "ACERNO")
    {
        city = "A023";
        finished = true;
    }
    else if (city == "ACERRA")
    {
        city = "A024";
        finished = true;
    }
    else if (city == "ACIBONACCORSI")
    {
        city = "A025";
        finished = true;
    }
    else if (city == "ACICASTELLO")
    {
        city = "A026";
        finished = true;
    }
    else if (city == "ACICATENA")
    {
        city = "A027";
        finished = true;
    }
    else if (city == "ACISANT'ANTONIO")
    {
        city = "A029";
        finished = true;
    }
    else if (city == "ACIREALE")
    {
        city = "A028";
        finished = true;
    }
    else if (city == "ACQUACANINA")
    {
        city = "A031";
        finished = true;
    }
    else if (city == "ACQUAFONDATA")
    {
        city = "A032";
        finished = true;
    }
    else if (city == "ACQUAFORMOSA")
    {
        city = "A033";
        finished = true;
    }
    else if (city == "ACQUAFREDDA")
    {
        city = "A034";
        finished = true;
    }
    else if (city == "ACQUALAGNA")
    {
        city = "A035";
        finished = true;
    }
    else if (city == "ACQUANEGRACREMONESE")
    {
        city = "A039";
        finished = true;
    }
    else if (city == "ACQUANEGRASULCHIESE")
    {
        city = "A038";
        finished = true;
    }
    else if (city == "ACQUAPENDENTE")
    {
        city = "A040";
        finished = true;
    }
    else if (city == "ACQUAPPESA")
    {
        city = "A041";
        finished = true;
    }
    else if (city == "ACQUARICADELCAPO")
    {
        city = "A042";
        finished = true;
    }
    else if (city == "ACQUARO")
    {
        city = "A043";
        finished = true;
    }
    else if (city == "ACQUASANTATERME")
    {
        city = "A044";
        finished = true;
    }
    else if (city == "ACQUASPARTA")
    {
        city = "A045";
        finished = true;
    }
    else if (city == "ACQUAVIVACOLLECROCE")
    {
        city = "A050";
        finished = true;
    }
    else if (city == "ACQUAVIVADELLEFONTI")
    {
        city = "A048";
        finished = true;
    }
    else if (city == "ACQUAVIVAD'ISERNIA")
    {
        city = "A051";
        finished = true;
    }
    else if (city == "ACQUAVIVAPICENA")
    {
        city = "A047";
        finished = true;
    }
    else if (city == "ACQUAVIVAPLATANI")
    {
        city = "A049";
        finished = true;
    }
    else if (city == "ACQUEDOLCI")
    {
        city = "M211";
        finished = true;
    }
    else if (city == "ACQUITERME")
    {
        city = "A052";
        finished = true;
    }
    else if (city == "ACRI")
    {
        city = "A053";
        finished = true;
    }
    else if (city == "ACUTO")
    {
        city = "A054";
        finished = true;
    }
    else if (city == "ADELFIA")
    {
        city = "A055";
        finished = true;
    }
    else if (city == "ADRANO")
    {
        city = "A056";
        finished = true;
    }
    else if (city == "ADRARASANMARTINO")
    {
        city = "A057";
        finished = true;
    }
    else if (city == "ADRARASANROCCO")
    {
        city = "A058";
        finished = true;
    }
    else if (city == "ADRIA")
    {
        city = "A059";
        finished = true;
    }
    else if (city == "ADRO")
    {
        city = "A060";
        finished = true;
    }
    else if (city == "AFFI")
    {
        city = "A061";
        finished = true;
    }
    else if (city == "AFFILE")
    {
        city = "A062";
        finished = true;
    }
    else if (city == "AFRAGOLA")
    {
        city = "A064";
        finished = true;
    }
    else if (city == "AFRICO")
    {
        city = "A065";
        finished = true;
    }
    else if (city == "AGAZZANO")
    {
        city = "A067";
        finished = true;
    }
    else if (city == "AGEROLA")
    {
        city = "A068";
        finished = true;
    }
    else if (city == "AGGIUS")
    {
        city = "A069";
        finished = true;
    }
    else if (city == "AGIRA")
    {
        city = "A070";
        finished = true;
    }
    else if (city == "AGLIANA")
    {
        city = "A071";
        finished = true;
    }
    else if (city == "AGLIANOTERME")
    {
        city = "A072";
        finished = true;
    }
    else if (city == "AGLIE'")
    {
        city = "A074";
        finished = true;
    }
    else if (city == "AGLIENTU")
    {
        city = "H848";
        finished = true;
    }
    else if (city == "AGNA")
    {
        city = "A075";
        finished = true;
    }
    else if (city == "AGNADELLO")
    {
        city = "A076";
        finished = true;
    }
    else if (city == "AGNANACALABRA")
    {
        city = "A077";
        finished = true;
    }
    else if (city == "AGNONE")
    {
        city = "A080";
        finished = true;
    }
    else if (city == "AGNOSINE")
    {
        city = "A082";
        finished = true;
    }
    else if (city == "AGORDO")
    {
        city = "A083";
        finished = true;
    }
    else if (city == "AGOSTA")
    {
        city = "A084";
        finished = true;
    }
    else if (city == "AGRA")
    {
        city = "A085";
        finished = true;
    }
    else if (city == "AGRATEBRIANZA")
    {
        city = "A087";
        finished = true;
    }
    else if (city == "AGRATECONTURBIA")
    {
        city = "A088";
        finished = true;
    }
    else if (city == "AGRIGENTO")
    {
        city = "A089";
        finished = true;
    }
    else if (city == "AGROPOLI")
    {
        city = "A091";
        finished = true;
    }
    else if (city == "AGUGLIANO")
    {
        city = "A092";
        finished = true;
    }
    else if (city == "AGUGLIARO")
    {
        city = "A093";
        finished = true;
    }
    else if (city == "AICURZIO")
    {
        city = "A096";
        finished = true;
    }
    else if (city == "AIDOMAGGIORE")
    {
        city = "A097";
        finished = true;
    }
    else if (city == "AIDONE")
    {
        city = "A098";
        finished = true;
    }
    else if (city == "AIELLI")
    {
        city = "A100";
        finished = true;
    }
    else if (city == "AIELLOCALABRO")
    {
        city = "A102";
        finished = true;
    }
    else if (city == "AIELLODELFRIULI")
    {
        city = "A103";
        finished = true;
    }
    else if (city == "AIELLODELSABATO")
    {
        city = "A101";
        finished = true;
    }
    else if (city == "AIETA")
    {
        city = "A105";
        finished = true;
    }
    else if (city == "AILANO")
    {
        city = "A106";
        finished = true;
    }
    else if (city == "AILOCHE")
    {
        city = "A107";
        finished = true;
    }
    else if (city == "AIRASCA")
    {
        city = "A109";
        finished = true;
    }
    else if (city == "AIROLA")
    {
        city = "A110";
        finished = true;
    }
    else if (city == "AIROLE")
    {
        city = "A111";
        finished = true;
    }
    else if (city == "AIRUNO")
    {
        city = "A112";
        finished = true;
    }
    else if (city == "AISONE")
    {
        city = "A113";
        finished = true;
    }
    else if (city == "ALA")
    {
        city = "A116";
        finished = true;
    }
    else if (city == "ALA'DEISARDI")
    {
        city = "A115";
        finished = true;
    }
    else if (city == "ALADISTURA")
    {
        city = "A117";
        finished = true;
    }
    else if (city == "ALAGNA")
    {
        city = "A118";
        finished = true;
    }
    else if (city == "ALAGNAVALSESIA")
    {
        city = "A119";
        finished = true;
    }
    else if (city == "ALANNO")
    {
        city = "A120";
        finished = true;
    }
    else if (city == "ALANODIPIAVE")
    {
        city = "A121";
        finished = true;
    }
    else if (city == "ALASSIO")
    {
        city = "A122";
        finished = true;
    }
    else if (city == "ALATRI")
    {
        city = "A123";
        finished = true;
    }
    else if (city == "ALBA")
    {
        city = "A124";
        finished = true;
    }
    else if (city == "ALBAADRIATICA")
    {
        city = "A125";
        finished = true;
    }
    else if (city == "ALBAGIARA")
    {
        city = "A126";
        finished = true;
    }
    else if (city == "ALBAIRATE")
    {
        city = "A127";
        finished = true;
    }
    else if (city == "ALBANELLA")
    {
        city = "A128";
        finished = true;
    }
    else if (city == "ALBANODILUCANIA")
    {
        city = "A131";
        finished = true;
    }
    else if (city == "ALBANOLAZIALE")
    {
        city = "A132";
        finished = true;
    }
    else if (city == "ALBANOSANT'ALESSANDRO")
    {
        city = "A129";
        finished = true;
    }
    else if (city == "ALBANOVERCELLESE")
    {
        city = "A130";
        finished = true;
    }
    else if (city == "ALBAREDOARNABOLDI")
    {
        city = "A134";
        finished = true;
    }
    else if (city == "ALBAREDOD'ADIGE")
    {
        city = "A137";
        finished = true;
    }
    else if (city == "ALBAREDOPERSANMARCO")
    {
        city = "A135";
        finished = true;
    }
    else if (city == "ALBARETO")
    {
        city = "A138";
        finished = true;
    }
    else if (city == "ALBARETTODELLATORRE")
    {
        city = "A139";
        finished = true;
    }
    else if (city == "ALBAVILLA")
    {
        city = "A143";
        finished = true;
    }
    else if (city == "ALBENGA")
    {
        city = "A145";
        finished = true;
    }
    else if (city == "ALBERALIGURE")
    {
        city = "A146";
        finished = true;
    }
    else if (city == "ALBEROBELLO")
    {
        city = "A149";
        finished = true;
    }
    else if (city == "ALBERONA")
    {
        city = "A150";
        finished = true;
    }
    else if (city == "ALBESECONCASSANO")
    {
        city = "A153";
        finished = true;
    }
    else if (city == "ALBETTONE")
    {
        city = "A154";
        finished = true;
    }
    else if (city == "ALBI")
    {
        city = "A155";
        finished = true;
    }
    else if (city == "ALBIANO")
    {
        city = "A158";
        finished = true;
    }
    else if (city == "ALBIANOD'IVREA")
    {
        city = "A157";
        finished = true;
    }
    else if (city == "ALBIATE")
    {
        city = "A159";
        finished = true;
    }
    else if (city == "ALBIDONA")
    {
        city = "A160";
        finished = true;
    }
    else if (city == "ALBIGNASEGO")
    {
        city = "A161";
        finished = true;
    }
    else if (city == "ALBINEA")
    {
        city = "A162";
        finished = true;
    }
    else if (city == "ALBINO")
    {
        city = "A163";
        finished = true;
    }
    else if (city == "ALBIOLO")
    {
        city = "A164";
        finished = true;
    }
    else if (city == "ALBISOLASUPERIORE")
    {
        city = "A166";
        finished = true;
    }
    else if (city == "ALBISSOLAMARINA")
    {
        city = "A165";
        finished = true;
    }
    else if (city == "ALBIZZATE")
    {
        city = "A167";
        finished = true;
    }
    else if (city == "ALBONESE")
    {
        city = "A171";
        finished = true;
    }
    else if (city == "ALBOSAGGIA")
    {
        city = "A172";
        finished = true;
    }
    else if (city == "ALBUGNANO")
    {
        city = "A173";
        finished = true;
    }
    else if (city == "ALBUZZANO")
    {
        city = "A175";
        finished = true;
    }
    else if (city == "ALCAMO")
    {
        city = "A176";
        finished = true;
    }
    else if (city == "ALCARALelse ifUSI")
    {
        city = "A177";
        finished = true;
    }
    else if (city == "ALDENO")
    {
        city = "A178";
        finished = true;
    }
    else if (city == "ALDINO.ALDEIN.")
    {
        city = "A179";
        finished = true;
    }
    else if (city == "ALES")
    {
        city = "A180";
        finished = true;
    }
    else if (city == "ALESSANDRIA")
    {
        city = "A182";
        finished = true;
    }
    else if (city == "ALESSANDRIADELCARRETTO")
    {
        city = "A183";
        finished = true;
    }
    else if (city == "ALESSANDRIADELLAROCCA")
    {
        city = "A181";
        finished = true;
    }
    else if (city == "ALESSANO")
    {
        city = "A184";
        finished = true;
    }
    else if (city == "ALEZIO")
    {
        city = "A185";
        finished = true;
    }
    else if (city == "ALFANO")
    {
        city = "A186";
        finished = true;
    }
    else if (city == "ALFEDENA")
    {
        city = "A187";
        finished = true;
    }
    else if (city == "ALFIANELLO")
    {
        city = "A188";
        finished = true;
    }
    else if (city == "ALFIANONATTA")
    {
        city = "A189";
        finished = true;
    }
    else if (city == "ALFONSINE")
    {
        city = "A191";
        finished = true;
    }
    else if (city == "ALGHERO")
    {
        city = "A192";
        finished = true;
    }
    else if (city == "ALGUA")
    {
        city = "A193";
        finished = true;
    }
    else if (city == "ALI'")
    {
        city = "A194";
        finished = true;
    }
    else if (city == "ALI'TERME")
    {
        city = "A201";
        finished = true;
    }
    else if (city == "ALIA")
    {
        city = "A195";
        finished = true;
    }
    else if (city == "ALIANO")
    {
        city = "A196";
        finished = true;
    }
    else if (city == "ALICEBELCOLLE")
    {
        city = "A197";
        finished = true;
    }
    else if (city == "ALICECASTELLO")
    {
        city = "A198";
        finished = true;
    }
    else if (city == "ALICESUPERIORE")
    {
        city = "A199";
        finished = true;
    }
    else if (city == "ALelse ifE")
    {
        city = "A200";
        finished = true;
    }
    else if (city == "ALIMENA")
    {
        city = "A202";
        finished = true;
    }
    else if (city == "ALIMINUSA")
    {
        city = "A203";
        finished = true;
    }
    else if (city == "ALLAI")
    {
        city = "A204";
        finished = true;
    }
    else if (city == "ALLEGHE")
    {
        city = "A206";
        finished = true;
    }
    else if (city == "ALLEIN")
    {
        city = "A205";
        finished = true;
    }
    else if (city == "ALLERONA")
    {
        city = "A207";
        finished = true;
    }
    else if (city == "ALLISTE")
    {
        city = "A208";
        finished = true;
    }
    else if (city == "ALLUMIERE")
    {
        city = "A210";
        finished = true;
    }
    else if (city == "ALLUVIONICAMBIO'")
    {
        city = "A211";
        finished = true;
    }
    else if (city == "ALLUVIONIPIOVERA")
    {
        city = "M397";
        finished = true;
    }
    else if (city == "ALME'")
    {
        city = "A214";
        finished = true;
    }
    else if (city == "ALMENNOSANBARTOLOMEO")
    {
        city = "A216";
        finished = true;
    }
    else if (city == "ALMENNOSANSALVATORE")
    {
        city = "A217";
        finished = true;
    }
    else if (city == "ALMESE")
    {
        city = "A218";
        finished = true;
    }
    else if (city == "ALONTE")
    {
        city = "A220";
        finished = true;
    }
    else if (city == "ALPAGO")
    {
        city = "M375";
        finished = true;
    }
    else if (city == "ALPETTE")
    {
        city = "A221";
        finished = true;
    }
    else if (city == "ALPIGNANO")
    {
        city = "A222";
        finished = true;
    }
    else if (city == "ALSENO")
    {
        city = "A223";
        finished = true;
    }
    else if (city == "ALSERIO")
    {
        city = "A224";
        finished = true;
    }
    else if (city == "ALTAVALTIDONE")
    {
        city = "M386";
        finished = true;
    }
    else if (city == "ALTAVALLEINTELVI")
    {
        city = "M383";
        finished = true;
    }
    else if (city == "ALTAMURA")
    {
        city = "A225";
        finished = true;
    }
    else if (city == "ALTARE")
    {
        city = "A226";
        finished = true;
    }
    else if (city == "ALTAVALLE")
    {
        city = "M349";
        finished = true;
    }
    else if (city == "ALTAVILLAIRPINA")
    {
        city = "A228";
        finished = true;
    }
    else if (city == "ALTAVILLAMILICIA")
    {
        city = "A229";
        finished = true;
    }
    else if (city == "ALTAVILLAMONFERRATO")
    {
        city = "A227";
        finished = true;
    }
    else if (city == "ALTAVILLASILENTINA")
    {
        city = "A230";
        finished = true;
    }
    else if (city == "ALTAVILLAVICENTINA")
    {
        city = "A231";
        finished = true;
    }
    else if (city == "ALTIDONA")
    {
        city = "A233";
        finished = true;
    }
    else if (city == "ALTILIA")
    {
        city = "A234";
        finished = true;
    }
    else if (city == "ALTINO")
    {
        city = "A235";
        finished = true;
    }
    else if (city == "ALTISSIMO")
    {
        city = "A236";
        finished = true;
    }
    else if (city == "ALTIVOLE")
    {
        city = "A237";
        finished = true;
    }
    else if (city == "ALTO")
    {
        city = "A238";
        finished = true;
    }
    else if (city == "ALTORENOTERME")
    {
        city = "M369";
        finished = true;
    }
    else if (city == "ALTOSERMENZA")
    {
        city = "M389";
        finished = true;
    }
    else if (city == "ALTOFONTE")
    {
        city = "A239";
        finished = true;
    }
    else if (city == "ALTOMONTE")
    {
        city = "A240";
        finished = true;
    }
    else if (city == "ALTOPASCIO")
    {
        city = "A241";
        finished = true;
    }
    else if (city == "ALTOPIANODELLAVIGOLANA")
    {
        city = "M350";
        finished = true;
    }
    else if (city == "ALVIANO")
    {
        city = "A242";
        finished = true;
    }
    else if (city == "ALVIGNANO")
    {
        city = "A243";
        finished = true;
    }
    else if (city == "ALVITO")
    {
        city = "A244";
        finished = true;
    }
    else if (city == "ALZANOLOMBARDO")
    {
        city = "A246";
        finished = true;
    }
    else if (city == "ALZANOSCRIVIA")
    {
        city = "A245";
        finished = true;
    }
    else if (city == "ALZATEBRIANZA")
    {
        city = "A249";
        finished = true;
    }
    else if (city == "AMALFI")
    {
        city = "A251";
        finished = true;
    }
    else if (city == "AMANDOLA")
    {
        city = "A252";
        finished = true;
    }
    else if (city == "AMANTEA")
    {
        city = "A253";
        finished = true;
    }
    else if (city == "AMARO")
    {
        city = "A254";
        finished = true;
    }
    else if (city == "AMARONI")
    {
        city = "A255";
        finished = true;
    }
    else if (city == "AMASENO")
    {
        city = "A256";
        finished = true;
    }
    else if (city == "AMATO")
    {
        city = "A257";
        finished = true;
    }
    else if (city == "AMATRICE")
    {
        city = "A258";
        finished = true;
    }
    else if (city == "AMBIVERE")
    {
        city = "A259";
        finished = true;
    }
    else if (city == "AMBLAR")
    {
        city = "A260";
        finished = true;
    }
    else if (city == "AMBLAR-DON")
    {
        city = "M351";
        finished = true;
    }
    else if (city == "AMEGLIA")
    {
        city = "A261";
        finished = true;
    }
    else if (city == "AMELIA")
    {
        city = "A262";
        finished = true;
    }
    else if (city == "AMENDOLARA")
    {
        city = "A263";
        finished = true;
    }
    else if (city == "AMENO")
    {
        city = "A264";
        finished = true;
    }
    else if (city == "AMOROSI")
    {
        city = "A265";
        finished = true;
    }
    else if (city == "AMPEZZO")
    {
        city = "A267";
        finished = true;
    }
    else if (city == "ANACAPRI")
    {
        city = "A268";
        finished = true;
    }
    else if (city == "ANAGNI")
    {
        city = "A269";
        finished = true;
    }
    else if (city == "ANCARANO")
    {
        city = "A270";
        finished = true;
    }
    else if (city == "ANCONA")
    {
        city = "A271";
        finished = true;
    }
    else if (city == "ANDALI")
    {
        city = "A272";
        finished = true;
    }
    else if (city == "ANDALO")
    {
        city = "A274";
        finished = true;
    }
    else if (city == "ANDALOVALTELLINO")
    {
        city = "A273";
        finished = true;
    }
    else if (city == "ANDEZENO")
    {
        city = "A275";
        finished = true;
    }
    else if (city == "ANDORA")
    {
        city = "A278";
        finished = true;
    }
    else if (city == "ANDORNOMICCA")
    {
        city = "A280";
        finished = true;
    }
    else if (city == "ANDRANO")
    {
        city = "A281";
        finished = true;
    }
    else if (city == "ANDRATE")
    {
        city = "A282";
        finished = true;
    }
    else if (city == "ANDREIS")
    {
        city = "A283";
        finished = true;
    }
    else if (city == "ANDRETTA")
    {
        city = "A284";
        finished = true;
    }
    else if (city == "ANDRIA")
    {
        city = "A285";
        finished = true;
    }
    else if (city == "ANDRIANO.ANDRIAN.")
    {
        city = "A286";
        finished = true;
    }
    else if (city == "ANELA")
    {
        city = "A287";
        finished = true;
    }
    else if (city == "ANFO")
    {
        city = "A288";
        finished = true;
    }
    else if (city == "ANGERA")
    {
        city = "A290";
        finished = true;
    }
    else if (city == "ANGHIARI")
    {
        city = "A291";
        finished = true;
    }
    else if (city == "ANGIARI")
    {
        city = "A292";
        finished = true;
    }
    else if (city == "ANGOLOTERME")
    {
        city = "A293";
        finished = true;
    }
    else if (city == "ANGRI")
    {
        city = "A294";
        finished = true;
    }
    else if (city == "ANGROGNA")
    {
        city = "A295";
        finished = true;
    }
    else if (city == "ANGUILLARASABAZIA")
    {
        city = "A297";
        finished = true;
    }
    else if (city == "ANGUILLARAVENETA")
    {
        city = "A296";
        finished = true;
    }
    else if (city == "ANNICCO")
    {
        city = "A299";
        finished = true;
    }
    else if (city == "ANNONEDIBRIANZA")
    {
        city = "A301";
        finished = true;
    }
    else if (city == "ANNONEVENETO")
    {
        city = "A302";
        finished = true;
    }
    else if (city == "ANOIA")
    {
        city = "A303";
        finished = true;
    }
    else if (city == "ANTEGNATE")
    {
        city = "A304";
        finished = true;
    }
    else if (city == "ANTERIVO.ALTREI.")
    {
        city = "A306";
        finished = true;
    }
    else if (city == "ANTEY-SAINT-ANDRE'")
    {
        city = "A305";
        finished = true;
    }
    else if (city == "ANTICOLICORRADO")
    {
        city = "A309";
        finished = true;
    }
    else if (city == "ANTIGNANO")
    {
        city = "A312";
        finished = true;
    }
    else if (city == "ANTILLO")
    {
        city = "A313";
        finished = true;
    }
    else if (city == "ANTONIMINA")
    {
        city = "A314";
        finished = true;
    }
    else if (city == "ANTRODOCO")
    {
        city = "A315";
        finished = true;
    }
    else if (city == "ANTRONASCHIERANCO")
    {
        city = "A317";
        finished = true;
    }
    else if (city == "ANVERSADEGLIABRUZZI")
    {
        city = "A318";
        finished = true;
    }
    else if (city == "ANZANODELPARCO")
    {
        city = "A319";
        finished = true;
    }
    else if (city == "ANZANODIPUGLIA")
    {
        city = "A320";
        finished = true;
    }
    else if (city == "ANZI")
    {
        city = "A321";
        finished = true;
    }
    else if (city == "ANZIO")
    {
        city = "A323";
        finished = true;
    }
    else if (city == "ANZOLADELL'EMILIA")
    {
        city = "A324";
        finished = true;
    }
    else if (city == "ANZOLAD'OSSOLA")
    {
        city = "A325";
        finished = true;
    }
    else if (city == "AOSTA")
    {
        city = "A326";
        finished = true;
    }
    else if (city == "APECCHIO")
    {
        city = "A327";
        finished = true;
    }
    else if (city == "APICE")
    {
        city = "A328";
        finished = true;
    }
    else if (city == "APIRO")
    {
        city = "A329";
        finished = true;
    }
    else if (city == "APOLLOSA")
    {
        city = "A330";
        finished = true;
    }
    else if (city == "APPIANOGENTILE")
    {
        city = "A333";
        finished = true;
    }
    else if (city == "APPIANOSULLASTRADADELVINO.EPPANANDER.")
    {
        city = "A332";
        finished = true;
    }
    else if (city == "APPIGNANO")
    {
        city = "A334";
        finished = true;
    }
    else if (city == "APPIGNANODELTRONTO")
    {
        city = "A335";
        finished = true;
    }
    else if (city == "APRICA")
    {
        city = "A337";
        finished = true;
    }
    else if (city == "APRICALE")
    {
        city = "A338";
        finished = true;
    }
    else if (city == "APRICENA")
    {
        city = "A339";
        finished = true;
    }
    else if (city == "APRIGLIANO")
    {
        city = "A340";
        finished = true;
    }
    else if (city == "APRILIA")
    {
        city = "A341";
        finished = true;
    }
    else if (city == "AQUARA")
    {
        city = "A343";
        finished = true;
    }
    else if (city == "AQUILAD'ARROSCIA")
    {
        city = "A344";
        finished = true;
    }
    else if (city == "AQUILEIA")
    {
        city = "A346";
        finished = true;
    }
    else if (city == "AQUILONIA")
    {
        city = "A347";
        finished = true;
    }
    else if (city == "AQUINO")
    {
        city = "A348";
        finished = true;
    }
    else if (city == "ARADEO")
    {
        city = "A350";
        finished = true;
    }
    else if (city == "ARAGONA")
    {
        city = "A351";
        finished = true;
    }
    else if (city == "ARAMENGO")
    {
        city = "A352";
        finished = true;
    }
    else if (city == "ARBA")
    {
        city = "A354";
        finished = true;
    }
    else if (city == "ARBOREA")
    {
        city = "A357";
        finished = true;
    }
    else if (city == "ARBORIO")
    {
        city = "A358";
        finished = true;
    }
    else if (city == "ARBUS")
    {
        city = "A359";
        finished = true;
    }
    else if (city == "ARCADE")
    {
        city = "A360";
        finished = true;
    }
    else if (city == "ARCE")
    {
        city = "A363";
        finished = true;
    }
    else if (city == "ARCENE")
    {
        city = "A365";
        finished = true;
    }
    else if (city == "ARCEVIA")
    {
        city = "A366";
        finished = true;
    }
    else if (city == "ARCHI")
    {
        city = "A367";
        finished = true;
    }
    else if (city == "ARCIDOSSO")
    {
        city = "A369";
        finished = true;
    }
    else if (city == "ARCINAZZOROMANO")
    {
        city = "A370";
        finished = true;
    }
    else if (city == "ARCISATE")
    {
        city = "A371";
        finished = true;
    }
    else if (city == "ARCO")
    {
        city = "A372";
        finished = true;
    }
    else if (city == "ARCOLA")
    {
        city = "A373";
        finished = true;
    }
    else if (city == "ARCOLE")
    {
        city = "A374";
        finished = true;
    }
    else if (city == "ARCONATE")
    {
        city = "A375";
        finished = true;
    }
    else if (city == "ARCORE")
    {
        city = "A376";
        finished = true;
    }
    else if (city == "ARCUGNANO")
    {
        city = "A377";
        finished = true;
    }
    else if (city == "ARDARA")
    {
        city = "A379";
        finished = true;
    }
    else if (city == "ARDAULI")
    {
        city = "A380";
        finished = true;
    }
    else if (city == "ARDEA")
    {
        city = "M213";
        finished = true;
    }
    else if (city == "ARDENNO")
    {
        city = "A382";
        finished = true;
    }
    else if (city == "ARDESIO")
    {
        city = "A383";
        finished = true;
    }
    else if (city == "ARDORE")
    {
        city = "A385";
        finished = true;
    }
    else if (city == "ARENA")
    {
        city = "A386";
        finished = true;
    }
    else if (city == "ARENAPO")
    {
        city = "A387";
        finished = true;
    }
    else if (city == "ARENZANO")
    {
        city = "A388";
        finished = true;
    }
    else if (city == "ARESE")
    {
        city = "A389";
        finished = true;
    }
    else if (city == "AREZZO")
    {
        city = "A390";
        finished = true;
    }
    else if (city == "ARGEGNO")
    {
        city = "A391";
        finished = true;
    }
    else if (city == "ARGELATO")
    {
        city = "A392";
        finished = true;
    }
    else if (city == "ARGENTA")
    {
        city = "A393";
        finished = true;
    }
    else if (city == "ARGENTERA")
    {
        city = "A394";
        finished = true;
    }
    else if (city == "ARGUELLO")
    {
        city = "A396";
        finished = true;
    }
    else if (city == "ARGUSTO")
    {
        city = "A397";
        finished = true;
    }
    else if (city == "ARI")
    {
        city = "A398";
        finished = true;
    }
    else if (city == "ARIANOIRPINO")
    {
        city = "A399";
        finished = true;
    }
    else if (city == "ARIANONELPOLESINE")
    {
        city = "A400";
        finished = true;
    }
    else if (city == "ARICCIA")
    {
        city = "A401";
        finished = true;
    }
    else if (city == "ARIELLI")
    {
        city = "A402";
        finished = true;
    }
    else if (city == "ARIENZO")
    {
        city = "A403";
        finished = true;
    }
    else if (city == "ARIGNANO")
    {
        city = "A405";
        finished = true;
    }
    else if (city == "ARITZO")
    {
        city = "A407";
        finished = true;
    }
    else if (city == "ARIZZANO")
    {
        city = "A409";
        finished = true;
    }
    else if (city == "ARLENADICASTRO")
    {
        city = "A412";
        finished = true;
    }
    else if (city == "ARLUNO")
    {
        city = "A413";
        finished = true;
    }
    else if (city == "ARMENO")
    {
        city = "A414";
        finished = true;
    }
    else if (city == "ARMENTO")
    {
        city = "A415";
        finished = true;
    }
    else if (city == "ARMO")
    {
        city = "A418";
        finished = true;
    }
    else if (city == "ARMUNGIA")
    {
        city = "A419";
        finished = true;
    }
    else if (city == "ARNAD")
    {
        city = "A424";
        finished = true;
    }
    else if (city == "ARNARA")
    {
        city = "A421";
        finished = true;
    }
    else if (city == "ARNASCO")
    {
        city = "A422";
        finished = true;
    }
    else if (city == "ARNESANO")
    {
        city = "A425";
        finished = true;
    }
    else if (city == "AROLA")
    {
        city = "A427";
        finished = true;
    }
    else if (city == "ARONA")
    {
        city = "A429";
        finished = true;
    }
    else if (city == "AROSIO")
    {
        city = "A430";
        finished = true;
    }
    else if (city == "ARPAIA")
    {
        city = "A431";
        finished = true;
    }
    else if (city == "ARPAISE")
    {
        city = "A432";
        finished = true;
    }
    else if (city == "ARPINO")
    {
        city = "A433";
        finished = true;
    }
    else if (city == "ARQUA'PETRARCA")
    {
        city = "A434";
        finished = true;
    }
    else if (city == "ARQUA'POLESINE")
    {
        city = "A435";
        finished = true;
    }
    else if (city == "ARQUATADELTRONTO")
    {
        city = "A437";
        finished = true;
    }
    else if (city == "ARQUATASCRIVIA")
    {
        city = "A436";
        finished = true;
    }
    else if (city == "ARRE")
    {
        city = "A438";
        finished = true;
    }
    else if (city == "ARRONE")
    {
        city = "A439";
        finished = true;
    }
    else if (city == "ARSAGOSEPRIO")
    {
        city = "A441";
        finished = true;
    }
    else if (city == "ARSIE'")
    {
        city = "A443";
        finished = true;
    }
    else if (city == "ARSIERO")
    {
        city = "A444";
        finished = true;
    }
    else if (city == "ARSITA")
    {
        city = "A445";
        finished = true;
    }
    else if (city == "ARSOLI")
    {
        city = "A446";
        finished = true;
    }
    else if (city == "ARTATERME")
    {
        city = "A447";
        finished = true;
    }
    else if (city == "ARTEGNA")
    {
        city = "A448";
        finished = true;
    }
    else if (city == "ARTENA")
    {
        city = "A449";
        finished = true;
    }
    else if (city == "ARTOGNE")
    {
        city = "A451";
        finished = true;
    }
    else if (city == "ARVIER")
    {
        city = "A452";
        finished = true;
    }
    else if (city == "ARZACHENA")
    {
        city = "A453";
        finished = true;
    }
    else if (city == "ARZAGOD'ADDA")
    {
        city = "A440";
        finished = true;
    }
    else if (city == "ARZANA")
    {
        city = "A454";
        finished = true;
    }
    else if (city == "ARZANO")
    {
        city = "A455";
        finished = true;
    }
    else if (city == "ARZENE")
    {
        city = "A456";
        finished = true;
    }
    else if (city == "ARZERGRANDE")
    {
        city = "A458";
        finished = true;
    }
    else if (city == "ARZIGNANO")
    {
        city = "A459";
        finished = true;
    }
    else if (city == "ASCEA")
    {
        city = "A460";
        finished = true;
    }
    else if (city == "ASCIANO")
    {
        city = "A461";
        finished = true;
    }
    else if (city == "ASCOLIPICENO")
    {
        city = "A462";
        finished = true;
    }
    else if (city == "ASCOLISATRIANO")
    {
        city = "A463";
        finished = true;
    }
    else if (city == "ASCREA")
    {
        city = "A464";
        finished = true;
    }
    else if (city == "ASIAGO")
    {
        city = "A465";
        finished = true;
    }
    else if (city == "ASIGLIANOVENETO")
    {
        city = "A467";
        finished = true;
    }
    else if (city == "ASIGLIANOVERCELLESE")
    {
        city = "A466";
        finished = true;
    }
    else if (city == "ASOLA")
    {
        city = "A470";
        finished = true;
    }
    else if (city == "ASOLO")
    {
        city = "A471";
        finished = true;
    }
    else if (city == "ASSAGO")
    {
        city = "A473";
        finished = true;
    }
    else if (city == "ASSEMINI")
    {
        city = "A474";
        finished = true;
    }
    else if (city == "ASSISI")
    {
        city = "A475";
        finished = true;
    }
    else if (city == "ASSO")
    {
        city = "A476";
        finished = true;
    }
    else if (city == "ASSOLO")
    {
        city = "A477";
        finished = true;
    }
    else if (city == "ASSORO")
    {
        city = "A478";
        finished = true;
    }
    else if (city == "ASTI")
    {
        city = "A479";
        finished = true;
    }
    else if (city == "ASUNI")
    {
        city = "A480";
        finished = true;
    }
    else if (city == "ATELETA")
    {
        city = "A481";
        finished = true;
    }
    else if (city == "ATELLA")
    {
        city = "A482";
        finished = true;
    }
    else if (city == "ATENALUCANA")
    {
        city = "A484";
        finished = true;
    }
    else if (city == "ATESSA")
    {
        city = "A485";
        finished = true;
    }
    else if (city == "ATINA")
    {
        city = "A486";
        finished = true;
    }
    else if (city == "ATRANI")
    {
        city = "A487";
        finished = true;
    }
    else if (city == "ATRI")
    {
        city = "A488";
        finished = true;
    }
    else if (city == "ATRIPALDA")
    {
        city = "A489";
        finished = true;
    }
    else if (city == "ATTIGLIANO")
    {
        city = "A490";
        finished = true;
    }
    else if (city == "ATTIMIS")
    {
        city = "A491";
        finished = true;
    }
    else if (city == "ATZARA")
    {
        city = "A492";
        finished = true;
    }
    else if (city == "AUDITORE")
    {
        city = "A493";
        finished = true;
    }
    else if (city == "AUGUSTA")
    {
        city = "A494";
        finished = true;
    }
    else if (city == "AULETTA")
    {
        city = "A495";
        finished = true;
    }
    else if (city == "AULLA")
    {
        city = "A496";
        finished = true;
    }
    else if (city == "AURANO")
    {
        city = "A497";
        finished = true;
    }
    else if (city == "AURIGO")
    {
        city = "A499";
        finished = true;
    }
    else if (city == "AURONZODICADORE")
    {
        city = "A501";
        finished = true;
    }
    else if (city == "AUSONIA")
    {
        city = "A502";
        finished = true;
    }
    else if (city == "AUSTIS")
    {
        city = "A503";
        finished = true;
    }
    else if (city == "AVEGNO")
    {
        city = "A506";
        finished = true;
    }
    else if (city == "AVELENGO.HAFLING.")
    {
        city = "A507";
        finished = true;
    }
    else if (city == "AVELLA")
    {
        city = "A508";
        finished = true;
    }
    else if (city == "AVELLINO")
    {
        city = "A509";
        finished = true;
    }
    else if (city == "AVERARA")
    {
        city = "A511";
        finished = true;
    }
    else if (city == "AVERSA")
    {
        city = "A512";
        finished = true;
    }
    else if (city == "AVETRANA")
    {
        city = "A514";
        finished = true;
    }
    else if (city == "AVEZZANO")
    {
        city = "A515";
        finished = true;
    }
    else if (city == "AVIANO")
    {
        city = "A516";
        finished = true;
    }
    else if (city == "AVIATICO")
    {
        city = "A517";
        finished = true;
    }
    else if (city == "AVIGLIANA")
    {
        city = "A518";
        finished = true;
    }
    else if (city == "AVIGLIANO")
    {
        city = "A519";
        finished = true;
    }
    else if (city == "AVIGLIANOUMBRO")
    {
        city = "M258";
        finished = true;
    }
    else if (city == "AVIO")
    {
        city = "A520";
        finished = true;
    }
    else if (city == "AVISE")
    {
        city = "A521";
        finished = true;
    }
    else if (city == "AVOLA")
    {
        city = "A522";
        finished = true;
    }
    else if (city == "AVOLASCA")
    {
        city = "A523";
        finished = true;
    }
    else if (city == "AYAS")
    {
        city = "A094";
        finished = true;
    }
    else if (city == "AYMAVILLES")
    {
        city = "A108";
        finished = true;
    }
    else if (city == "AZEGLIO")
    {
        city = "A525";
        finished = true;
    }
    else if (city == "AZZANELLO")
    {
        city = "A526";
        finished = true;
    }
    else if (city == "AZZANOD'ASTI")
    {
        city = "A527";
        finished = true;
    }
    else if (city == "AZZANODECIMO")
    {
        city = "A530";
        finished = true;
    }
    else if (city == "AZZANOMELLA")
    {
        city = "A529";
        finished = true;
    }
    else if (city == "AZZANOSANPAOLO")
    {
        city = "A528";
        finished = true;
    }
    else if (city == "AZZATE")
    {
        city = "A531";
        finished = true;
    }
    else if (city == "AZZIO")
    {
        city = "A532";
        finished = true;
    }
    else if (city == "AZZONE")
    {
        city = "A533";
        finished = true;
    }
    else if (city == "BACENO")
    {
        city = "A534";
        finished = true;
    }
    else if (city == "BACOLI")
    {
        city = "A535";
        finished = true;
    }
    else if (city == "BADALUCCO")
    {
        city = "A536";
        finished = true;
    }
    else if (city == "BADESI")
    {
        city = "M214";
        finished = true;
    }
    else if (city == "BADIA.ABTEI.")
    {
        city = "A537";
        finished = true;
    }
    else if (city == "BADIACALAVENA")
    {
        city = "A540";
        finished = true;
    }
    else if (city == "BADIAPAVESE")
    {
        city = "A538";
        finished = true;
    }
    else if (city == "BADIAPOLESINE")
    {
        city = "A539";
        finished = true;
    }
    else if (city == "BADIATEDALDA")
    {
        city = "A541";
        finished = true;
    }
    else if (city == "BADOLATO")
    {
        city = "A542";
        finished = true;
    }
    else if (city == "BAGALADI")
    {
        city = "A544";
        finished = true;
    }
    else if (city == "BAGHERIA")
    {
        city = "A546";
        finished = true;
    }
    else if (city == "BAGNACAVALLO")
    {
        city = "A547";
        finished = true;
    }
    else if (city == "BAGNARACALABRA")
    {
        city = "A552";
        finished = true;
    }
    else if (city == "BAGNARADIROMAGNA")
    {
        city = "A551";
        finished = true;
    }
    else if (city == "BAGNARIA")
    {
        city = "A550";
        finished = true;
    }
    else if (city == "BAGNARIAARSA")
    {
        city = "A553";
        finished = true;
    }
    else if (city == "BAGNASCO")
    {
        city = "A555";
        finished = true;
    }
    else if (city == "BAGNATICA")
    {
        city = "A557";
        finished = true;
    }
    else if (city == "BAGNIDILUCCA")
    {
        city = "A560";
        finished = true;
    }
    else if (city == "BAGNOARIPOLI")
    {
        city = "A564";
        finished = true;
    }
    else if (city == "BAGNODIROMAGNA")
    {
        city = "A565";
        finished = true;
    }
    else if (city == "BAGNOLIDELTRIGNO")
    {
        city = "A567";
        finished = true;
    }
    else if (city == "BAGNOLIDISOPRA")
    {
        city = "A568";
        finished = true;
    }
    else if (city == "BAGNOLIIRPINO")
    {
        city = "A566";
        finished = true;
    }
    else if (city == "BAGNOLOCREMASCO")
    {
        city = "A570";
        finished = true;
    }
    else if (city == "BAGNOLODELSALENTO")
    {
        city = "A572";
        finished = true;
    }
    else if (city == "BAGNOLODIPO")
    {
        city = "A574";
        finished = true;
    }
    else if (city == "BAGNOLOINPIANO")
    {
        city = "A573";
        finished = true;
    }
    else if (city == "BAGNOLOMELLA")
    {
        city = "A569";
        finished = true;
    }
    else if (city == "BAGNOLOPIEMONTE")
    {
        city = "A571";
        finished = true;
    }
    else if (city == "BAGNOLOSANVITO")
    {
        city = "A575";
        finished = true;
    }
    else if (city == "BAGNONE")
    {
        city = "A576";
        finished = true;
    }
    else if (city == "BAGNOREGIO")
    {
        city = "A577";
        finished = true;
    }
    else if (city == "BAGOLINO")
    {
        city = "A578";
        finished = true;
    }
    else if (city == "BAIAELATINA")
    {
        city = "A579";
        finished = true;
    }
    else if (city == "BAIANO")
    {
        city = "A580";
        finished = true;
    }
    else if (city == "BAIARDO")
    {
        city = "A581";
        finished = true;
    }
    else if (city == "BAIRO")
    {
        city = "A584";
        finished = true;
    }
    else if (city == "BAISO")
    {
        city = "A586";
        finished = true;
    }
    else if (city == "BALANGERO")
    {
        city = "A587";
        finished = true;
    }
    else if (city == "BALDICHIERID'ASTI")
    {
        city = "A588";
        finished = true;
    }
    else if (city == "BALDISSEROCANAVESE")
    {
        city = "A590";
        finished = true;
    }
    else if (city == "BALDISSEROD'ALBA")
    {
        city = "A589";
        finished = true;
    }
    else if (city == "BALDISSEROTORINESE")
    {
        city = "A591";
        finished = true;
    }
    else if (city == "BALESTRATE")
    {
        city = "A592";
        finished = true;
    }
    else if (city == "BALESTRINO")
    {
        city = "A593";
        finished = true;
    }
    else if (city == "BALLABIO")
    {
        city = "A594";
        finished = true;
    }
    else if (city == "BALLAO")
    {
        city = "A597";
        finished = true;
    }
    else if (city == "BALME")
    {
        city = "A599";
        finished = true;
    }
    else if (city == "BALMUCCIA")
    {
        city = "A600";
        finished = true;
    }
    else if (city == "BALOCCO")
    {
        city = "A601";
        finished = true;
    }
    else if (city == "BALSORANO")
    {
        city = "A603";
        finished = true;
    }
    else if (city == "BALVANO")
    {
        city = "A604";
        finished = true;
    }
    else if (city == "BALZOLA")
    {
        city = "A605";
        finished = true;
    }
    else if (city == "BANARI")
    {
        city = "A606";
        finished = true;
    }
    else if (city == "BANCHETTE")
    {
        city = "A607";
        finished = true;
    }
    else if (city == "BANNIOANZINO")
    {
        city = "A610";
        finished = true;
    }
    else if (city == "BANZI")
    {
        city = "A612";
        finished = true;
    }
    else if (city == "BAONE")
    {
        city = "A613";
        finished = true;
    }
    else if (city == "BARADILI")
    {
        city = "A614";
        finished = true;
    }
    else if (city == "BARAGIANO")
    {
        city = "A615";
        finished = true;
    }
    else if (city == "BARANELLO")
    {
        city = "A616";
        finished = true;
    }
    else if (city == "BARANOD'ISCHIA")
    {
        city = "A617";
        finished = true;
    }
    else if (city == "BARANZATE")
    {
        city = "A618";
        finished = true;
    }
    else if (city == "BARASSO")
    {
        city = "A619";
        finished = true;
    }
    else if (city == "BARATILISANPIETRO")
    {
        city = "A621";
        finished = true;
    }
    else if (city == "BARBANIA")
    {
        city = "A625";
        finished = true;
    }
    else if (city == "BARBARA")
    {
        city = "A626";
        finished = true;
    }
    else if (city == "BARBARANOMOSSANO")
    {
        city = "M401";
        finished = true;
    }
    else if (city == "BARBARANOROMANO")
    {
        city = "A628";
        finished = true;
    }
    else if (city == "BARBARANOVICENTINO")
    {
        city = "A627";
        finished = true;
    }
    else if (city == "BARBARESCO")
    {
        city = "A629";
        finished = true;
    }
    else if (city == "BARBARIGA")
    {
        city = "A630";
        finished = true;
    }
    else if (city == "BARBATA")
    {
        city = "A631";
        finished = true;
    }
    else if (city == "BARBERINODIMUGELLO")
    {
        city = "A632";
        finished = true;
    }
    else if (city == "BARBERINOTAVARNELLE")
    {
        city = "M408";
        finished = true;
    }
    else if (city == "BARBERINOVALD'ELSA")
    {
        city = "A633";
        finished = true;
    }
    else if (city == "BARBIANELLO")
    {
        city = "A634";
        finished = true;
    }
    else if (city == "BARBIANO.BARBIAN.")
    {
        city = "A635";
        finished = true;
    }
    else if (city == "BARBONA")
    {
        city = "A637";
        finished = true;
    }
    else if (city == "BARCELLONAPOZZODIGOTTO")
    {
        city = "A638";
        finished = true;
    }
    else if (city == "BARCHI")
    {
        city = "A639";
        finished = true;
    }
    else if (city == "BARCIS")
    {
        city = "A640";
        finished = true;
    }
    else if (city == "BARD")
    {
        city = "A643";
        finished = true;
    }
    else if (city == "BARDELLO")
    {
        city = "A645";
        finished = true;
    }
    else if (city == "BARDI")
    {
        city = "A646";
        finished = true;
    }
    else if (city == "BARDINETO")
    {
        city = "A647";
        finished = true;
    }
    else if (city == "BARDOLINO")
    {
        city = "A650";
        finished = true;
    }
    else if (city == "BARDONECCHIA")
    {
        city = "A651";
        finished = true;
    }
    else if (city == "BAREGGIO")
    {
        city = "A652";
        finished = true;
    }
    else if (city == "BARENGO")
    {
        city = "A653";
        finished = true;
    }
    else if (city == "BARESSA")
    {
        city = "A655";
        finished = true;
    }
    else if (city == "BARETE")
    {
        city = "A656";
        finished = true;
    }
    else if (city == "BARGA")
    {
        city = "A657";
        finished = true;
    }
    else if (city == "BARGAGLI")
    {
        city = "A658";
        finished = true;
    }
    else if (city == "BARGE")
    {
        city = "A660";
        finished = true;
    }
    else if (city == "BARGHE")
    {
        city = "A661";
        finished = true;
    }
    else if (city == "BARI")
    {
        city = "A662";
        finished = true;
    }
    else if (city == "BARISARDO")
    {
        city = "A663";
        finished = true;
    }
    else if (city == "BARIANO")
    {
        city = "A664";
        finished = true;
    }
    else if (city == "BARICELLA")
    {
        city = "A665";
        finished = true;
    }
    else if (city == "BARILE")
    {
        city = "A666";
        finished = true;
    }
    else if (city == "BARISCIANO")
    {
        city = "A667";
        finished = true;
    }
    else if (city == "BARLASSINA")
    {
        city = "A668";
        finished = true;
    }
    else if (city == "BARLETTA")
    {
        city = "A669";
        finished = true;
    }
    else if (city == "BARNI")
    {
        city = "A670";
        finished = true;
    }
    else if (city == "BAROLO")
    {
        city = "A671";
        finished = true;
    }
    else if (city == "BARONECANAVESE")
    {
        city = "A673";
        finished = true;
    }
    else if (city == "BARONISSI")
    {
        city = "A674";
        finished = true;
    }
    else if (city == "BARRAFRANCA")
    {
        city = "A676";
        finished = true;
    }
    else if (city == "BARRALI")
    {
        city = "A677";
        finished = true;
    }
    else if (city == "BARREA")
    {
        city = "A678";
        finished = true;
    }
    else if (city == "BARUMINI")
    {
        city = "A681";
        finished = true;
    }
    else if (city == "BARZAGO")
    {
        city = "A683";
        finished = true;
    }
    else if (city == "BARZANA")
    {
        city = "A684";
        finished = true;
    }
    else if (city == "BARZANO'")
    {
        city = "A686";
        finished = true;
    }
    else if (city == "BARZIO")
    {
        city = "A687";
        finished = true;
    }
    else if (city == "BASALUZZO")
    {
        city = "A689";
        finished = true;
    }
    else if (city == "BASCAPE'")
    {
        city = "A690";
        finished = true;
    }
    else if (city == "BASCHI")
    {
        city = "A691";
        finished = true;
    }
    else if (city == "BASCIANO")
    {
        city = "A692";
        finished = true;
    }
    else if (city == "BASELGADIPINE'")
    {
        city = "A694";
        finished = true;
    }
    else if (city == "BASELICE")
    {
        city = "A696";
        finished = true;
    }
    else if (city == "BASIANO")
    {
        city = "A697";
        finished = true;
    }
    else if (city == "BASICO'")
    {
        city = "A698";
        finished = true;
    }
    else if (city == "BASIGLIO")
    {
        city = "A699";
        finished = true;
    }
    else if (city == "BASILIANO")
    {
        city = "A700";
        finished = true;
    }
    else if (city == "BASSANOBRESCIANO")
    {
        city = "A702";
        finished = true;
    }
    else if (city == "BASSANODELGRAPPA")
    {
        city = "A703";
        finished = true;
    }
    else if (city == "BASSANOINTEVERINA")
    {
        city = "A706";
        finished = true;
    }
    else if (city == "BASSANOROMANO")
    {
        city = "A704";
        finished = true;
    }
    else if (city == "BASSIANO")
    {
        city = "A707";
        finished = true;
    }
    else if (city == "BASSIGNANA")
    {
        city = "A708";
        finished = true;
    }
    else if (city == "BASTIAMONDOVI'")
    {
        city = "A709";
        finished = true;
    }
    else if (city == "BASTIAUMBRA")
    {
        city = "A710";
        finished = true;
    }
    else if (city == "BASTIDADE'DOSSI")
    {
        city = "A711";
        finished = true;
    }
    else if (city == "BASTIDAPANCARANA")
    {
        city = "A712";
        finished = true;
    }
    else if (city == "BASTIGLIA")
    {
        city = "A713";
        finished = true;
    }
    else if (city == "BATTAGLIATERME")
    {
        city = "A714";
        finished = true;
    }
    else if (city == "BATTelse ifOLLO")
    {
        city = "A716";
        finished = true;
    }
    else if (city == "BATTIPAGLIA")
    {
        city = "A717";
        finished = true;
    }
    else if (city == "BATTUDA")
    {
        city = "A718";
        finished = true;
    }
    else if (city == "BAUCINA")
    {
        city = "A719";
        finished = true;
    }
    else if (city == "BAULADU")
    {
        city = "A721";
        finished = true;
    }
    else if (city == "BAUNEI")
    {
        city = "A722";
        finished = true;
    }
    else if (city == "BAVENO")
    {
        city = "A725";
        finished = true;
    }
    else if (city == "BAZZANO")
    {
        city = "A726";
        finished = true;
    }
    else if (city == "BEDEROVALCUVIA")
    {
        city = "A728";
        finished = true;
    }
    else if (city == "BEDIZZOLE")
    {
        city = "A729";
        finished = true;
    }
    else if (city == "BEDOLLO")
    {
        city = "A730";
        finished = true;
    }
    else if (city == "BEDONIA")
    {
        city = "A731";
        finished = true;
    }
    else if (city == "BEDULITA")
    {
        city = "A732";
        finished = true;
    }
    else if (city == "BEE")
    {
        city = "A733";
        finished = true;
    }
    else if (city == "BEINASCO")
    {
        city = "A734";
        finished = true;
    }
    else if (city == "BEINETTE")
    {
        city = "A735";
        finished = true;
    }
    else if (city == "BELCASTRO")
    {
        city = "A736";
        finished = true;
    }
    else if (city == "BELFIORE")
    {
        city = "A737";
        finished = true;
    }
    else if (city == "BELFORTEALL'ISAURO")
    {
        city = "A740";
        finished = true;
    }
    else if (city == "BELFORTEDELCHIENTI")
    {
        city = "A739";
        finished = true;
    }
    else if (city == "BELFORTEMONFERRATO")
    {
        city = "A738";
        finished = true;
    }
    else if (city == "BELGIOIOSO")
    {
        city = "A741";
        finished = true;
    }
    else if (city == "BELGIRATE")
    {
        city = "A742";
        finished = true;
    }
    else if (city == "BELLA")
    {
        city = "A743";
        finished = true;
    }
    else if (city == "BELLAGIO")
    {
        city = "A744";
        finished = true;
    }
    else if (city == "BELLAGIO")
    {
        city = "M335";
        finished = true;
    }
    else if (city == "BELLANO")
    {
        city = "A745";
        finished = true;
    }
    else if (city == "BELLANTE")
    {
        city = "A746";
        finished = true;
    }
    else if (city == "BELLARIA-IGEAMARINA")
    {
        city = "A747";
        finished = true;
    }
    else if (city == "BELLEGRA")
    {
        city = "A749";
        finished = true;
    }
    else if (city == "BELLINO")
    {
        city = "A750";
        finished = true;
    }
    else if (city == "BELLINZAGOLOMBARDO")
    {
        city = "A751";
        finished = true;
    }
    else if (city == "BELLINZAGONOVARESE")
    {
        city = "A752";
        finished = true;
    }
    else if (city == "BELLIZZI")
    {
        city = "M294";
        finished = true;
    }
    else if (city == "BELLONA")
    {
        city = "A755";
        finished = true;
    }
    else if (city == "BELLOSGUARDO")
    {
        city = "A756";
        finished = true;
    }
    else if (city == "BELLUNO")
    {
        city = "A757";
        finished = true;
    }
    else if (city == "BELLUSCO")
    {
        city = "A759";
        finished = true;
    }
    else if (city == "BELMONTECALABRO")
    {
        city = "A762";
        finished = true;
    }
    else if (city == "BELMONTECASTELLO")
    {
        city = "A763";
        finished = true;
    }
    else if (city == "BELMONTEDELSANNIO")
    {
        city = "A761";
        finished = true;
    }
    else if (city == "BELMONTEINSABINA")
    {
        city = "A765";
        finished = true;
    }
    else if (city == "BELMONTEMEZZAGNO")
    {
        city = "A764";
        finished = true;
    }
    else if (city == "BELMONTEPICENO")
    {
        city = "A760";
        finished = true;
    }
    else if (city == "BELPASSO")
    {
        city = "A766";
        finished = true;
    }
    else if (city == "BELSITO")
    {
        city = "A768";
        finished = true;
    }
    else if (city == "BELVEDEREDISPINELLO")
    {
        city = "A772";
        finished = true;
    }
    else if (city == "BELVEDERELANGHE")
    {
        city = "A774";
        finished = true;
    }
    else if (city == "BELVEDEREMARITTIMO")
    {
        city = "A773";
        finished = true;
    }
    else if (city == "BELVEDEREOSTRENSE")
    {
        city = "A769";
        finished = true;
    }
    else if (city == "BELVEGLIO")
    {
        city = "A770";
        finished = true;
    }
    else if (city == "BELVI'")
    {
        city = "A776";
        finished = true;
    }
    else if (city == "BEMA")
    {
        city = "A777";
        finished = true;
    }
    else if (city == "BENELARIO")
    {
        city = "A778";
        finished = true;
    }
    else if (city == "BENEVAGIENNA")
    {
        city = "A779";
        finished = true;
    }
    else if (city == "BENESTARE")
    {
        city = "A780";
        finished = true;
    }
    else if (city == "BENETUTTI")
    {
        city = "A781";
        finished = true;
    }
    else if (city == "BENEVELLO")
    {
        city = "A782";
        finished = true;
    }
    else if (city == "BENEVENTO")
    {
        city = "A783";
        finished = true;
    }
    else if (city == "BENNA")
    {
        city = "A784";
        finished = true;
    }
    else if (city == "BENTIVOGLIO")
    {
        city = "A785";
        finished = true;
    }
    else if (city == "BERBENNO")
    {
        city = "A786";
        finished = true;
    }
    else if (city == "BERBENNODIVALTELLINA")
    {
        city = "A787";
        finished = true;
    }
    else if (city == "BERCETO")
    {
        city = "A788";
        finished = true;
    }
    else if (city == "BERCHIDDA")
    {
        city = "A789";
        finished = true;
    }
    else if (city == "BEREGAZZOCONFIGLIARO")
    {
        city = "A791";
        finished = true;
    }
    else if (city == "BEREGUARDO")
    {
        city = "A792";
        finished = true;
    }
    else if (city == "BERGAMASCO")
    {
        city = "A793";
        finished = true;
    }
    else if (city == "BERGAMO")
    {
        city = "A794";
        finished = true;
    }
    else if (city == "BERGANTINO")
    {
        city = "A795";
        finished = true;
    }
    else if (city == "BERGEGGI")
    {
        city = "A796";
        finished = true;
    }
    else if (city == "BERGOLO")
    {
        city = "A798";
        finished = true;
    }
    else if (city == "BERLINGO")
    {
        city = "A799";
        finished = true;
    }
    else if (city == "BERNALDA")
    {
        city = "A801";
        finished = true;
    }
    else if (city == "BERNAREGGIO")
    {
        city = "A802";
        finished = true;
    }
    else if (city == "BERNATETICINO")
    {
        city = "A804";
        finished = true;
    }
    else if (city == "BERNEZZO")
    {
        city = "A805";
        finished = true;
    }
    else if (city == "BERRA")
    {
        city = "A806";
        finished = true;
    }
    else if (city == "BERSONE")
    {
        city = "A808";
        finished = true;
    }
    else if (city == "BERTINORO")
    {
        city = "A809";
        finished = true;
    }
    else if (city == "BERTIOLO")
    {
        city = "A810";
        finished = true;
    }
    else if (city == "BERTONICO")
    {
        city = "A811";
        finished = true;
    }
    else if (city == "BERZANODISANPIETRO")
    {
        city = "A812";
        finished = true;
    }
    else if (city == "BERZANODITORTONA")
    {
        city = "A813";
        finished = true;
    }
    else if (city == "BERZODEMO")
    {
        city = "A816";
        finished = true;
    }
    else if (city == "BERZOINFERIORE")
    {
        city = "A817";
        finished = true;
    }
    else if (city == "BERZOSANFERMO")
    {
        city = "A815";
        finished = true;
    }
    else if (city == "BESANAINBRIANZA")
    {
        city = "A818";
        finished = true;
    }
    else if (city == "BESANO")
    {
        city = "A819";
        finished = true;
    }
    else if (city == "BESATE")
    {
        city = "A820";
        finished = true;
    }
    else if (city == "BESENELLO")
    {
        city = "A821";
        finished = true;
    }
    else if (city == "BESENZONE")
    {
        city = "A823";
        finished = true;
    }
    else if (city == "BESNATE")
    {
        city = "A825";
        finished = true;
    }
    else if (city == "BESOZZO")
    {
        city = "A826";
        finished = true;
    }
    else if (city == "BESSUDE")
    {
        city = "A827";
        finished = true;
    }
    else if (city == "BETTOLA")
    {
        city = "A831";
        finished = true;
    }
    else if (city == "BETTONA")
    {
        city = "A832";
        finished = true;
    }
    else if (city == "BEURA-CARDEZZA")
    {
        city = "A834";
        finished = true;
    }
    else if (city == "BEVAGNA")
    {
        city = "A835";
        finished = true;
    }
    else if (city == "BEVERINO")
    {
        city = "A836";
        finished = true;
    }
    else if (city == "BEVILACQUA")
    {
        city = "A837";
        finished = true;
    }
    else if (city == "BEZZECCA")
    {
        city = "A839";
        finished = true;
    }
    else if (city == "BIANCAVILLA")
    {
        city = "A841";
        finished = true;
    }
    else if (city == "BIANCHI")
    {
        city = "A842";
        finished = true;
    }
    else if (city == "BIANCO")
    {
        city = "A843";
        finished = true;
    }
    else if (city == "BIANDRATE")
    {
        city = "A844";
        finished = true;
    }
    else if (city == "BIANDRONNO")
    {
        city = "A845";
        finished = true;
    }
    else if (city == "BIANZANO")
    {
        city = "A846";
        finished = true;
    }
    else if (city == "BIANZE'")
    {
        city = "A847";
        finished = true;
    }
    else if (city == "BIANZONE")
    {
        city = "A848";
        finished = true;
    }
    else if (city == "BIASSONO")
    {
        city = "A849";
        finished = true;
    }
    else if (city == "BIBBIANO")
    {
        city = "A850";
        finished = true;
    }
    else if (city == "BIBBIENA")
    {
        city = "A851";
        finished = true;
    }
    else if (city == "BIBBONA")
    {
        city = "A852";
        finished = true;
    }
    else if (city == "BIBIANA")
    {
        city = "A853";
        finished = true;
    }
    else if (city == "BICCARI")
    {
        city = "A854";
        finished = true;
    }
    else if (city == "BICINICCO")
    {
        city = "A855";
        finished = true;
    }
    else if (city == "BIDONI'")
    {
        city = "A856";
        finished = true;
    }
    else if (city == "BIELLA")
    {
        city = "A859";
        finished = true;
    }
    else if (city == "BIENNO")
    {
        city = "A861";
        finished = true;
    }
    else if (city == "BIENO")
    {
        city = "A863";
        finished = true;
    }
    else if (city == "BIENTINA")
    {
        city = "A864";
        finished = true;
    }
    else if (city == "BIGARELLO")
    {
        city = "A866";
        finished = true;
    }
    else if (city == "BINAGO")
    {
        city = "A870";
        finished = true;
    }
    else if (city == "BINASCO")
    {
        city = "A872";
        finished = true;
    }
    else if (city == "BINETTO")
    {
        city = "A874";
        finished = true;
    }
    else if (city == "BIOGLIO")
    {
        city = "A876";
        finished = true;
    }
    else if (city == "BIONAZ")
    {
        city = "A877";
        finished = true;
    }
    else if (city == "BIONE")
    {
        city = "A878";
        finished = true;
    }
    else if (city == "BIRORI")
    {
        city = "A880";
        finished = true;
    }
    else if (city == "BISACCIA")
    {
        city = "A881";
        finished = true;
    }
    else if (city == "BISACQUINO")
    {
        city = "A882";
        finished = true;
    }
    else if (city == "BISCEGLIE")
    {
        city = "A883";
        finished = true;
    }
    else if (city == "BISEGNA")
    {
        city = "A884";
        finished = true;
    }
    else if (city == "BISENTI")
    {
        city = "A885";
        finished = true;
    }
    else if (city == "BISIGNANO")
    {
        city = "A887";
        finished = true;
    }
    else if (city == "BISTAGNO")
    {
        city = "A889";
        finished = true;
    }
    else if (city == "BISUSCHIO")
    {
        city = "A891";
        finished = true;
    }
    else if (city == "BITETTO")
    {
        city = "A892";
        finished = true;
    }
    else if (city == "BITONTO")
    {
        city = "A893";
        finished = true;
    }
    else if (city == "BITRITTO")
    {
        city = "A894";
        finished = true;
    }
    else if (city == "BITTI")
    {
        city = "A895";
        finished = true;
    }
    else if (city == "BIVONA")
    {
        city = "A896";
        finished = true;
    }
    else if (city == "BIVONGI")
    {
        city = "A897";
        finished = true;
    }
    else if (city == "BIZZARONE")
    {
        city = "A898";
        finished = true;
    }
    else if (city == "BLEGGIOINFERIORE")
    {
        city = "A901";
        finished = true;
    }
    else if (city == "BLEGGIOSUPERIORE")
    {
        city = "A902";
        finished = true;
    }
    else if (city == "BLELLO")
    {
        city = "A903";
        finished = true;
    }
    else if (city == "BLERA")
    {
        city = "A857";
        finished = true;
    }
    else if (city == "BLESSAGNO")
    {
        city = "A904";
        finished = true;
    }
    else if (city == "BLEVIO")
    {
        city = "A905";
        finished = true;
    }
    else if (city == "BLUFI")
    {
        city = "M268";
        finished = true;
    }
    else if (city == "BOARAPISANI")
    {
        city = "A906";
        finished = true;
    }
    else if (city == "BOBBIO")
    {
        city = "A909";
        finished = true;
    }
    else if (city == "BOBBIOPELLICE")
    {
        city = "A910";
        finished = true;
    }
    else if (city == "BOCA")
    {
        city = "A911";
        finished = true;
    }
    else if (city == "BOCCHIGLIERO")
    {
        city = "A912";
        finished = true;
    }
    else if (city == "BOCCIOLETO")
    {
        city = "A914";
        finished = true;
    }
    else if (city == "BOCENAGO")
    {
        city = "A916";
        finished = true;
    }
    else if (city == "BODIOLOMNAGO")
    {
        city = "A918";
        finished = true;
    }
    else if (city == "BOFFALORAD'ADDA")
    {
        city = "A919";
        finished = true;
    }
    else if (city == "BOFFALORASOPRATICINO")
    {
        city = "A920";
        finished = true;
    }
    else if (city == "BOGLIASCO")
    {
        city = "A922";
        finished = true;
    }
    else if (city == "BOGNANCO")
    {
        city = "A925";
        finished = true;
    }
    else if (city == "BOGOGNO")
    {
        city = "A929";
        finished = true;
    }
    else if (city == "BOISSANO")
    {
        city = "A931";
        finished = true;
    }
    else if (city == "BOJANO")
    {
        city = "A930";
        finished = true;
    }
    else if (city == "BOLANO")
    {
        city = "A932";
        finished = true;
    }
    else if (city == "BOLBENO")
    {
        city = "A933";
        finished = true;
    }
    else if (city == "BOLGARE")
    {
        city = "A937";
        finished = true;
    }
    else if (city == "BOLLATE")
    {
        city = "A940";
        finished = true;
    }
    else if (city == "BOLLENGO")
    {
        city = "A941";
        finished = true;
    }
    else if (city == "BOLOGNA")
    {
        city = "A944";
        finished = true;
    }
    else if (city == "BOLOGNANO")
    {
        city = "A945";
        finished = true;
    }
    else if (city == "BOLOGNETTA")
    {
        city = "A946";
        finished = true;
    }
    else if (city == "BOLOGNOLA")
    {
        city = "A947";
        finished = true;
    }
    else if (city == "BOLOTANA")
    {
        city = "A948";
        finished = true;
    }
    else if (city == "BOLSENA")
    {
        city = "A949";
        finished = true;
    }
    else if (city == "BOLTIERE")
    {
        city = "A950";
        finished = true;
    }
    else if (city == "BOLZANO.BOZEN.")
    {
        city = "A952";
        finished = true;
    }
    else if (city == "BOLZANONOVARESE")
    {
        city = "A953";
        finished = true;
    }
    else if (city == "BOLZANOVICENTINO")
    {
        city = "A954";
        finished = true;
    }
    else if (city == "BOMARZO")
    {
        city = "A955";
        finished = true;
    }
    else if (city == "BOMBA")
    {
        city = "A956";
        finished = true;
    }
    else if (city == "BOMPENSIERE")
    {
        city = "A957";
        finished = true;
    }
    else if (city == "BOMPIETRO")
    {
        city = "A958";
        finished = true;
    }
    else if (city == "BOMPORTO")
    {
        city = "A959";
        finished = true;
    }
    else if (city == "BONARCADO")
    {
        city = "A960";
        finished = true;
    }
    else if (city == "BONASSOLA")
    {
        city = "A961";
        finished = true;
    }
    else if (city == "BONATESOPRA")
    {
        city = "A963";
        finished = true;
    }
    else if (city == "BONATESOTTO")
    {
        city = "A962";
        finished = true;
    }
    else if (city == "BONAVIGO")
    {
        city = "A964";
        finished = true;
    }
    else if (city == "BONDENO")
    {
        city = "A965";
        finished = true;
    }
    else if (city == "BONDO")
    {
        city = "A967";
        finished = true;
    }
    else if (city == "BONDONE")
    {
        city = "A968";
        finished = true;
    }
    else if (city == "BONEA")
    {
        city = "A970";
        finished = true;
    }
    else if (city == "BONEFRO")
    {
        city = "A971";
        finished = true;
    }
    else if (city == "BONEMERSE")
    {
        city = "A972";
        finished = true;
    }
    else if (city == "BONelse ifATI")
    {
        city = "A973";
        finished = true;
    }
    else if (city == "BONITO")
    {
        city = "A975";
        finished = true;
    }
    else if (city == "BONNANARO")
    {
        city = "A976";
        finished = true;
    }
    else if (city == "BONO")
    {
        city = "A977";
        finished = true;
    }
    else if (city == "BONORVA")
    {
        city = "A978";
        finished = true;
    }
    else if (city == "BONVICINO")
    {
        city = "A979";
        finished = true;
    }
    else if (city == "BORBONA")
    {
        city = "A981";
        finished = true;
    }
    else if (city == "BORCADICADORE")
    {
        city = "A982";
        finished = true;
    }
    else if (city == "BORDANO")
    {
        city = "A983";
        finished = true;
    }
    else if (city == "BORDIGHERA")
    {
        city = "A984";
        finished = true;
    }
    else if (city == "BORDOLANO")
    {
        city = "A986";
        finished = true;
    }
    else if (city == "BORE")
    {
        city = "A987";
        finished = true;
    }
    else if (city == "BORETTO")
    {
        city = "A988";
        finished = true;
    }
    else if (city == "BORGARELLO")
    {
        city = "A989";
        finished = true;
    }
    else if (city == "BORGAROTORINESE")
    {
        city = "A990";
        finished = true;
    }
    else if (city == "BORGETTO")
    {
        city = "A991";
        finished = true;
    }
    else if (city == "BORGHETTOD'ARROSCIA")
    {
        city = "A993";
        finished = true;
    }
    else if (city == "BORGHETTODIBORBERA")
    {
        city = "A998";
        finished = true;
    }
    else if (city == "BORGHETTODIVARA")
    {
        city = "A992";
        finished = true;
    }
    else if (city == "BORGHETTOLODIGIANO")
    {
        city = "A995";
        finished = true;
    }
    else if (city == "BORGHETTOSANTOSPIRITO")
    {
        city = "A999";
        finished = true;
    }
    else if (city == "BORGHI")
    {
        city = "B001";
        finished = true;
    }
    else if (city == "BORGIA")
    {
        city = "B002";
        finished = true;
    }
    else if (city == "BORGIALLO")
    {
        city = "B003";
        finished = true;
    }
    else if (city == "BORGIOVEREZZI")
    {
        city = "B005";
        finished = true;
    }
    else if (city == "BORGOAMOZZANO")
    {
        city = "B007";
        finished = true;
    }
    else if (city == "BORGOCHIESE")
    {
        city = "M352";
        finished = true;
    }
    else if (city == "BORGOD'ALE")
    {
        city = "B009";
        finished = true;
    }
    else if (city == "BORGOD'ANAUNIA")
    {
        city = "M429";
        finished = true;
    }
    else if (city == "BORGODITERZO")
    {
        city = "B010";
        finished = true;
    }
    else if (city == "BORGOLARES")
    {
        city = "M353";
        finished = true;
    }
    else if (city == "BORGOMANTOVANO")
    {
        city = "M396";
        finished = true;
    }
    else if (city == "BORGOPACE")
    {
        city = "B026";
        finished = true;
    }
    else if (city == "BORGOPRIOLO")
    {
        city = "B028";
        finished = true;
    }
    else if (city == "BORGOSANDALMAZZO")
    {
        city = "B033";
        finished = true;
    }
    else if (city == "BORGOSANGIACOMO")
    {
        city = "B035";
        finished = true;
    }
    else if (city == "BORGOSANGIOVANNI")
    {
        city = "B017";
        finished = true;
    }
    else if (city == "BORGOSANLORENZO")
    {
        city = "B036";
        finished = true;
    }
    else if (city == "BORGOSANMARTINO")
    {
        city = "B037";
        finished = true;
    }
    else if (city == "BORGOSANSIRO")
    {
        city = "B038";
        finished = true;
    }
    else if (city == "BORGOTICINO")
    {
        city = "B043";
        finished = true;
    }
    else if (city == "BORGOTOSSIGNANO")
    {
        city = "B044";
        finished = true;
    }
    else if (city == "BORGOVALDITARO")
    {
        city = "B042";
        finished = true;
    }
    else if (city == "BORGOVALBELLUNA")
    {
        city = "M421";
        finished = true;
    }
    else if (city == "BORGOVALSUGANA")
    {
        city = "B006";
        finished = true;
    }
    else if (city == "BORGOVELINO")
    {
        city = "A996";
        finished = true;
    }
    else if (city == "BORGOVENETO")
    {
        city = "M402";
        finished = true;
    }
    else if (city == "BORGOVERCELLI")
    {
        city = "B046";
        finished = true;
    }
    else if (city == "BORGOVIRGILIO")
    {
        city = "M340";
        finished = true;
    }
    else if (city == "BORGOCARBONARA")
    {
        city = "M406";
        finished = true;
    }
    else if (city == "BORGOFORTE")
    {
        city = "B011";
        finished = true;
    }
    else if (city == "BORGOFRANCOD'IVREA")
    {
        city = "B015";
        finished = true;
    }
    else if (city == "BORGOFRANCOSULPO")
    {
        city = "B013";
        finished = true;
    }
    else if (city == "BORGOLAVEZZARO")
    {
        city = "B016";
        finished = true;
    }
    else if (city == "BORGOMALE")
    {
        city = "B018";
        finished = true;
    }
    else if (city == "BORGOMANERO")
    {
        city = "B019";
        finished = true;
    }
    else if (city == "BORGOMARO")
    {
        city = "B020";
        finished = true;
    }
    else if (city == "BORGOMASINO")
    {
        city = "B021";
        finished = true;
    }
    else if (city == "BORGOMEZZAVALLE")
    {
        city = "M370";
        finished = true;
    }
    else if (city == "BORGONESUSA")
    {
        city = "B024";
        finished = true;
    }
    else if (city == "BORGONOVOVALTIDONE")
    {
        city = "B025";
        finished = true;
    }
    else if (city == "BORGORATTOALESSANDRINO")
    {
        city = "B029";
        finished = true;
    }
    else if (city == "BORGORATTOMORMOROLO")
    {
        city = "B030";
        finished = true;
    }
    else if (city == "BORGORICCO")
    {
        city = "B031";
        finished = true;
    }
    else if (city == "BORGOROSE")
    {
        city = "B008";
        finished = true;
    }
    else if (city == "BORGOSATOLLO")
    {
        city = "B040";
        finished = true;
    }
    else if (city == "BORGOSESIA")
    {
        city = "B041";
        finished = true;
    }
    else if (city == "BORMIDA")
    {
        city = "B048";
        finished = true;
    }
    else if (city == "BORMIO")
    {
        city = "B049";
        finished = true;
    }
    else if (city == "BORNASCO")
    {
        city = "B051";
        finished = true;
    }
    else if (city == "BORNO")
    {
        city = "B054";
        finished = true;
    }
    else if (city == "BORONEDDU")
    {
        city = "B055";
        finished = true;
    }
    else if (city == "BORORE")
    {
        city = "B056";
        finished = true;
    }
    else if (city == "BORRELLO")
    {
        city = "B057";
        finished = true;
    }
    else if (city == "BORRIANA")
    {
        city = "B058";
        finished = true;
    }
    else if (city == "BORSODELGRAPPA")
    {
        city = "B061";
        finished = true;
    }
    else if (city == "BORTIGALI")
    {
        city = "B062";
        finished = true;
    }
    else if (city == "BORTIGIADAS")
    {
        city = "B063";
        finished = true;
    }
    else if (city == "BORUTTA")
    {
        city = "B064";
        finished = true;
    }
    else if (city == "BORZONASCA")
    {
        city = "B067";
        finished = true;
    }
    else if (city == "BOSA")
    {
        city = "B068";
        finished = true;
    }
    else if (city == "BOSARO")
    {
        city = "B069";
        finished = true;
    }
    else if (city == "BOSCHISANT'ANNA")
    {
        city = "B070";
        finished = true;
    }
    else if (city == "BOSCOCHIESANUOVA")
    {
        city = "B073";
        finished = true;
    }
    else if (city == "BOSCOMARENGO")
    {
        city = "B071";
        finished = true;
    }
    else if (city == "BOSCONERO")
    {
        city = "B075";
        finished = true;
    }
    else if (city == "BOSCOREALE")
    {
        city = "B076";
        finished = true;
    }
    else if (city == "BOSCOTRECASE")
    {
        city = "B077";
        finished = true;
    }
    else if (city == "BOSENTINO")
    {
        city = "B078";
        finished = true;
    }
    else if (city == "BOSIA")
    {
        city = "B079";
        finished = true;
    }
    else if (city == "BOSIO")
    {
        city = "B080";
        finished = true;
    }
    else if (city == "BOSISIOPARINI")
    {
        city = "B081";
        finished = true;
    }
    else if (city == "BOSNASCO")
    {
        city = "B082";
        finished = true;
    }
    else if (city == "BOSSICO")
    {
        city = "B083";
        finished = true;
    }
    else if (city == "BOSSOLASCO")
    {
        city = "B084";
        finished = true;
    }
    else if (city == "BOTRICELLO")
    {
        city = "B085";
        finished = true;
    }
    else if (city == "BOTRUGNO")
    {
        city = "B086";
        finished = true;
    }
    else if (city == "BOTTANUCO")
    {
        city = "B088";
        finished = true;
    }
    else if (city == "BOTTICINO")
    {
        city = "B091";
        finished = true;
    }
    else if (city == "BOTTIDDA")
    {
        city = "B094";
        finished = true;
    }
    else if (city == "BOVA")
    {
        city = "B097";
        finished = true;
    }
    else if (city == "BOVAMARINA")
    {
        city = "B099";
        finished = true;
    }
    else if (city == "BOVALINO")
    {
        city = "B098";
        finished = true;
    }
    else if (city == "BOVEGNO")
    {
        city = "B100";
        finished = true;
    }
    else if (city == "BOVES")
    {
        city = "B101";
        finished = true;
    }
    else if (city == "BOVEZZO")
    {
        city = "B102";
        finished = true;
    }
    else if (city == "BOVILLEERNICA")
    {
        city = "A720";
        finished = true;
    }
    else if (city == "BOVINO")
    {
        city = "B104";
        finished = true;
    }
    else if (city == "BOVISIO-MASCIAGO")
    {
        city = "B105";
        finished = true;
    }
    else if (city == "BOVOLENTA")
    {
        city = "B106";
        finished = true;
    }
    else if (city == "BOVOLONE")
    {
        city = "B107";
        finished = true;
    }
    else if (city == "BOZZOLE")
    {
        city = "B109";
        finished = true;
    }
    else if (city == "BOZZOLO")
    {
        city = "B110";
        finished = true;
    }
    else if (city == "BRA")
    {
        city = "B111";
        finished = true;
    }
    else if (city == "BRACCA")
    {
        city = "B112";
        finished = true;
    }
    else if (city == "BRACCIANO")
    {
        city = "B114";
        finished = true;
    }
    else if (city == "BRACIGLIANO")
    {
        city = "B115";
        finished = true;
    }
    else if (city == "BRAIES.PRAGS.")
    {
        city = "B116";
        finished = true;
    }
    else if (city == "BRALLODIPREGOLA")
    {
        city = "B117";
        finished = true;
    }
    else if (city == "BRANCALEONE")
    {
        city = "B118";
        finished = true;
    }
    else if (city == "BRANDICO")
    {
        city = "B120";
        finished = true;
    }
    else if (city == "BRANDIZZO")
    {
        city = "B121";
        finished = true;
    }
    else if (city == "BRANZI")
    {
        city = "B123";
        finished = true;
    }
    else if (city == "BRAONE")
    {
        city = "B124";
        finished = true;
    }
    else if (city == "BREBBIA")
    {
        city = "B126";
        finished = true;
    }
    else if (city == "BREDADIPIAVE")
    {
        city = "B128";
        finished = true;
    }
    else if (city == "BREGANO")
    {
        city = "B131";
        finished = true;
    }
    else if (city == "BREGANZE")
    {
        city = "B132";
        finished = true;
    }
    else if (city == "BREGNANO")
    {
        city = "B134";
        finished = true;
    }
    else if (city == "BREGUZZO")
    {
        city = "B135";
        finished = true;
    }
    else if (city == "BREIA")
    {
        city = "B136";
        finished = true;
    }
    else if (city == "BREMBATE")
    {
        city = "B137";
        finished = true;
    }
    else if (city == "BREMBATEDISOPRA")
    {
        city = "B138";
        finished = true;
    }
    else if (city == "BREMBILLA")
    {
        city = "B140";
        finished = true;
    }
    else if (city == "BREMBIO")
    {
        city = "B141";
        finished = true;
    }
    else if (city == "BREME")
    {
        city = "B142";
        finished = true;
    }
    else if (city == "BRENDOLA")
    {
        city = "B143";
        finished = true;
    }
    else if (city == "BRENNA")
    {
        city = "B144";
        finished = true;
    }
    else if (city == "BRENNERO.BRENNER.")
    {
        city = "B145";
        finished = true;
    }
    else if (city == "BRENO")
    {
        city = "B149";
        finished = true;
    }
    else if (city == "BRENTA")
    {
        city = "B150";
        finished = true;
    }
    else if (city == "BRENTINOBELLUNO")
    {
        city = "B152";
        finished = true;
    }
    else if (city == "BRENTONICO")
    {
        city = "B153";
        finished = true;
    }
    else if (city == "BRENZONESULGARDA")
    {
        city = "B154";
        finished = true;
    }
    else if (city == "BRESCELLO")
    {
        city = "B156";
        finished = true;
    }
    else if (city == "BRESCIA")
    {
        city = "B157";
        finished = true;
    }
    else if (city == "BRESIMO")
    {
        city = "B158";
        finished = true;
    }
    else if (city == "BRESSANABOTTARONE")
    {
        city = "B159";
        finished = true;
    }
    else if (city == "BRESSANONE.BRIXEN.")
    {
        city = "B160";
        finished = true;
    }
    else if (city == "BRESSANVIDO")
    {
        city = "B161";
        finished = true;
    }
    else if (city == "BRESSO")
    {
        city = "B162";
        finished = true;
    }
    else if (city == "BREZ")
    {
        city = "B165";
        finished = true;
    }
    else if (city == "BREZZODIBEDERO")
    {
        city = "B166";
        finished = true;
    }
    else if (city == "BRIAGLIA")
    {
        city = "B167";
        finished = true;
    }
    else if (city == "BRIATICO")
    {
        city = "B169";
        finished = true;
    }
    else if (city == "BRICHERASIO")
    {
        city = "B171";
        finished = true;
    }
    else if (city == "BRIENNO")
    {
        city = "B172";
        finished = true;
    }
    else if (city == "BRIENZA")
    {
        city = "B173";
        finished = true;
    }
    else if (city == "BRIGAALTA")
    {
        city = "B175";
        finished = true;
    }
    else if (city == "BRIGANOVARESE")
    {
        city = "B176";
        finished = true;
    }
    else if (city == "BRIGNANOGERAD'ADDA")
    {
        city = "B178";
        finished = true;
    }
    else if (city == "BRIGNANO-FRASCATA")
    {
        city = "B179";
        finished = true;
    }
    else if (city == "BRINDISI")
    {
        city = "B180";
        finished = true;
    }
    else if (city == "BRINDISIMONTAGNA")
    {
        city = "B181";
        finished = true;
    }
    else if (city == "BRINZIO")
    {
        city = "B182";
        finished = true;
    }
    else if (city == "BRIONA")
    {
        city = "B183";
        finished = true;
    }
    else if (city == "BRIONE")
    {
        city = "B184";
        finished = true;
    }
    else if (city == "BRIONE")
    {
        city = "B185";
        finished = true;
    }
    else if (city == "BRIOSCO")
    {
        city = "B187";
        finished = true;
    }
    else if (city == "BRISIGHELLA")
    {
        city = "B188";
        finished = true;
    }
    else if (city == "BRISSAGO-VALTRAVAGLIA")
    {
        city = "B191";
        finished = true;
    }
    else if (city == "BRISSOGNE")
    {
        city = "B192";
        finished = true;
    }
    else if (city == "BRITTOLI")
    {
        city = "B193";
        finished = true;
    }
    else if (city == "BRIVIO")
    {
        city = "B194";
        finished = true;
    }
    else if (city == "BROCCOSTELLA")
    {
        city = "B195";
        finished = true;
    }
    else if (city == "BROGLIANO")
    {
        city = "B196";
        finished = true;
    }
    else if (city == "BROGNATURO")
    {
        city = "B197";
        finished = true;
    }
    else if (city == "BROLO")
    {
        city = "B198";
        finished = true;
    }
    else if (city == "BRONDELLO")
    {
        city = "B200";
        finished = true;
    }
    else if (city == "BRONI")
    {
        city = "B201";
        finished = true;
    }
    else if (city == "BRONTE")
    {
        city = "B202";
        finished = true;
    }
    else if (city == "BRONZOLO.BRANZOLL.")
    {
        city = "B203";
        finished = true;
    }
    else if (city == "BROSSASCO")
    {
        city = "B204";
        finished = true;
    }
    else if (city == "BROSSO")
    {
        city = "B205";
        finished = true;
    }
    else if (city == "BROVELLO-CARPUGNINO")
    {
        city = "B207";
        finished = true;
    }
    else if (city == "BROZOLO")
    {
        city = "B209";
        finished = true;
    }
    else if (city == "BRUGHERIO")
    {
        city = "B212";
        finished = true;
    }
    else if (city == "BRUGINE")
    {
        city = "B213";
        finished = true;
    }
    else if (city == "BRUGNATO")
    {
        city = "B214";
        finished = true;
    }
    else if (city == "BRUGNERA")
    {
        city = "B215";
        finished = true;
    }
    else if (city == "BRUINO")
    {
        city = "B216";
        finished = true;
    }
    else if (city == "BRUMANO")
    {
        city = "B217";
        finished = true;
    }
    else if (city == "BRUNATE")
    {
        city = "B218";
        finished = true;
    }
    else if (city == "BRUNELLO")
    {
        city = "B219";
        finished = true;
    }
    else if (city == "BRUNICO.BRUNECK.")
    {
        city = "B220";
        finished = true;
    }
    else if (city == "BRUNO")
    {
        city = "B221";
        finished = true;
    }
    else if (city == "BRUSAPORTO")
    {
        city = "B223";
        finished = true;
    }
    else if (city == "BRUSASCO")
    {
        city = "B225";
        finished = true;
    }
    else if (city == "BRUSCIANO")
    {
        city = "B227";
        finished = true;
    }
    else if (city == "BRUSIMPIANO")
    {
        city = "B228";
        finished = true;
    }
    else if (city == "BRUSNENGO")
    {
        city = "B229";
        finished = true;
    }
    else if (city == "BRUSSON")
    {
        city = "B230";
        finished = true;
    }
    else if (city == "BRUZOLO")
    {
        city = "B232";
        finished = true;
    }
    else if (city == "BRUZZANOZEFFIRIO")
    {
        city = "B234";
        finished = true;
    }
    else if (city == "BUBBIANO")
    {
        city = "B235";
        finished = true;
    }
    else if (city == "BUBBIO")
    {
        city = "B236";
        finished = true;
    }
    else if (city == "BUCCHERI")
    {
        city = "B237";
        finished = true;
    }
    else if (city == "BUCCHIANICO")
    {
        city = "B238";
        finished = true;
    }
    else if (city == "BUCCIANO")
    {
        city = "B239";
        finished = true;
    }
    else if (city == "BUCCINASCO")
    {
        city = "B240";
        finished = true;
    }
    else if (city == "BUCCINO")
    {
        city = "B242";
        finished = true;
    }
    else if (city == "BUCINE")
    {
        city = "B243";
        finished = true;
    }
    else if (city == "BUDDUSO'")
    {
        city = "B246";
        finished = true;
    }
    else if (city == "BUDOIA")
    {
        city = "B247";
        finished = true;
    }
    else if (city == "BUDONI")
    {
        city = "B248";
        finished = true;
    }
    else if (city == "BUDRIO")
    {
        city = "B249";
        finished = true;
    }
    else if (city == "BUGGERRU")
    {
        city = "B250";
        finished = true;
    }
    else if (city == "BUGGIANO")
    {
        city = "B251";
        finished = true;
    }
    else if (city == "BUGLIOINMONTE")
    {
        city = "B255";
        finished = true;
    }
    else if (city == "BUGNARA")
    {
        city = "B256";
        finished = true;
    }
    else if (city == "BUGUGGIATE")
    {
        city = "B258";
        finished = true;
    }
    else if (city == "BUJA")
    {
        city = "B259";
        finished = true;
    }
    else if (city == "BULCIAGO")
    {
        city = "B261";
        finished = true;
    }
    else if (city == "BULGAROGRASSO")
    {
        city = "B262";
        finished = true;
    }
    else if (city == "BULTEI")
    {
        city = "B264";
        finished = true;
    }
    else if (city == "BULZI")
    {
        city = "B265";
        finished = true;
    }
    else if (city == "BUONABITACOLO")
    {
        city = "B266";
        finished = true;
    }
    else if (city == "BUONALBERGO")
    {
        city = "B267";
        finished = true;
    }
    else if (city == "BUONCONVENTO")
    {
        city = "B269";
        finished = true;
    }
    else if (city == "BUONVICINO")
    {
        city = "B270";
        finished = true;
    }
    else if (city == "BURAGODIMOLGORA")
    {
        city = "B272";
        finished = true;
    }
    else if (city == "BURCEI")
    {
        city = "B274";
        finished = true;
    }
    else if (city == "BURGIO")
    {
        city = "B275";
        finished = true;
    }
    else if (city == "BURGOS")
    {
        city = "B276";
        finished = true;
    }
    else if (city == "BURIASCO")
    {
        city = "B278";
        finished = true;
    }
    else if (city == "BUROLO")
    {
        city = "B279";
        finished = true;
    }
    else if (city == "BURONZO")
    {
        city = "B280";
        finished = true;
    }
    else if (city == "BUSACHI")
    {
        city = "B281";
        finished = true;
    }
    else if (city == "BUSALLA")
    {
        city = "B282";
        finished = true;
    }
    else if (city == "BUSANA")
    {
        city = "B283";
        finished = true;
    }
    else if (city == "BUSANO")
    {
        city = "B284";
        finished = true;
    }
    else if (city == "BUSCA")
    {
        city = "B285";
        finished = true;
    }
    else if (city == "BUSCATE")
    {
        city = "B286";
        finished = true;
    }
    else if (city == "BUSCEMI")
    {
        city = "B287";
        finished = true;
    }
    else if (city == "BUSETOPALIZZOLO")
    {
        city = "B288";
        finished = true;
    }
    else if (city == "BUSNAGO")
    {
        city = "B289";
        finished = true;
    }
    else if (city == "BUSSERO")
    {
        city = "B292";
        finished = true;
    }
    else if (city == "BUSSETO")
    {
        city = "B293";
        finished = true;
    }
    else if (city == "BUSSISULTIRINO")
    {
        city = "B294";
        finished = true;
    }
    else if (city == "BUSSO")
    {
        city = "B295";
        finished = true;
    }
    else if (city == "BUSSOLENGO")
    {
        city = "B296";
        finished = true;
    }
    else if (city == "BUSSOLENO")
    {
        city = "B297";
        finished = true;
    }
    else if (city == "BUSTOARSIZIO")
    {
        city = "B300";
        finished = true;
    }
    else if (city == "BUSTOGAROLFO")
    {
        city = "B301";
        finished = true;
    }
    else if (city == "BUTERA")
    {
        city = "B302";
        finished = true;
    }
    else if (city == "BUTI")
    {
        city = "B303";
        finished = true;
    }
    else if (city == "BUTTAPIETRA")
    {
        city = "B304";
        finished = true;
    }
    else if (city == "BUTTIGLIERAALTA")
    {
        city = "B305";
        finished = true;
    }
    else if (city == "BUTTIGLIERAD'ASTI")
    {
        city = "B306";
        finished = true;
    }
    else if (city == "BUTTRIO")
    {
        city = "B309";
        finished = true;
    }
    else if (city == "CA'D'ANDREA")
    {
        city = "B320";
        finished = true;
    }
    else if (city == "CABELLALIGURE")
    {
        city = "B311";
        finished = true;
    }
    else if (city == "CABIATE")
    {
        city = "B313";
        finished = true;
    }
    else if (city == "CABRAS")
    {
        city = "B314";
        finished = true;
    }
    else if (city == "CACCAMO")
    {
        city = "B315";
        finished = true;
    }
    else if (city == "CACCURI")
    {
        city = "B319";
        finished = true;
    }
    else if (city == "CADEGLIANO-VICONAGO")
    {
        city = "B326";
        finished = true;
    }
    else if (city == "CADELBOSCODISOPRA")
    {
        city = "B328";
        finished = true;
    }
    else if (city == "CADEO")
    {
        city = "B332";
        finished = true;
    }
    else if (city == "CADERZONETERME")
    {
        city = "B335";
        finished = true;
    }
    else if (city == "CADONEGHE")
    {
        city = "B345";
        finished = true;
    }
    else if (city == "CADORAGO")
    {
        city = "B346";
        finished = true;
    }
    else if (city == "CADREZZATE")
    {
        city = "B347";
        finished = true;
    }
    else if (city == "CADREZZATECONOSMATE")
    {
        city = "M425";
        finished = true;
    }
    else if (city == "CAERANODISANMARCO")
    {
        city = "B349";
        finished = true;
    }
    else if (city == "CAFASSE")
    {
        city = "B350";
        finished = true;
    }
    else if (city == "CAGGIANO")
    {
        city = "B351";
        finished = true;
    }
    else if (city == "CAGLI")
    {
        city = "B352";
        finished = true;
    }
    else if (city == "CAGLIARI")
    {
        city = "B354";
        finished = true;
    }
    else if (city == "CAGLIO")
    {
        city = "B355";
        finished = true;
    }
    else if (city == "CAGNANOAMITERNO")
    {
        city = "B358";
        finished = true;
    }
    else if (city == "CAGNANOVARANO")
    {
        city = "B357";
        finished = true;
    }
    else if (city == "CAGNO'")
    {
        city = "B360";
        finished = true;
    }
    else if (city == "CAGNO")
    {
        city = "B359";
        finished = true;
    }
    else if (city == "CAIANELLO")
    {
        city = "B361";
        finished = true;
    }
    else if (city == "CAIAZZO")
    {
        city = "B362";
        finished = true;
    }
    else if (city == "CAINES.KUENS.")
    {
        city = "B364";
        finished = true;
    }
    else if (city == "CAINO")
    {
        city = "B365";
        finished = true;
    }
    else if (city == "CAIOLO")
    {
        city = "B366";
        finished = true;
    }
    else if (city == "CAIRANO")
    {
        city = "B367";
        finished = true;
    }
    else if (city == "CAIRATE")
    {
        city = "B368";
        finished = true;
    }
    else if (city == "CAIROMONTENOTTE")
    {
        city = "B369";
        finished = true;
    }
    else if (city == "CAIVANO")
    {
        city = "B371";
        finished = true;
    }
    else if (city == "CALABRITTO")
    {
        city = "B374";
        finished = true;
    }
    else if (city == "CALALZODICADORE")
    {
        city = "B375";
        finished = true;
    }
    else if (city == "CALAMANDRANA")
    {
        city = "B376";
        finished = true;
    }
    else if (city == "CALAMONACI")
    {
        city = "B377";
        finished = true;
    }
    else if (city == "CALANGIANUS")
    {
        city = "B378";
        finished = true;
    }
    else if (city == "CALANNA")
    {
        city = "B379";
        finished = true;
    }
    else if (city == "CALASCA-CASTIGLIONE")
    {
        city = "B380";
        finished = true;
    }
    else if (city == "CALASCIBETTA")
    {
        city = "B381";
        finished = true;
    }
    else if (city == "CALASCIO")
    {
        city = "B382";
        finished = true;
    }
    else if (city == "CALASETTA")
    {
        city = "B383";
        finished = true;
    }
    else if (city == "CALATABIANO")
    {
        city = "B384";
        finished = true;
    }
    else if (city == "CALATAFIMISEGESTA")
    {
        city = "B385";
        finished = true;
    }
    else if (city == "CALAVINO")
    {
        city = "B386";
        finished = true;
    }
    else if (city == "CALCATA")
    {
        city = "B388";
        finished = true;
    }
    else if (city == "CALCERANICAALLAGO")
    {
        city = "B389";
        finished = true;
    }
    else if (city == "CALCI")
    {
        city = "B390";
        finished = true;
    }
    else if (city == "CALCIANO")
    {
        city = "B391";
        finished = true;
    }
    else if (city == "CALCINAIA")
    {
        city = "B392";
        finished = true;
    }
    else if (city == "CALCINATE")
    {
        city = "B393";
        finished = true;
    }
    else if (city == "CALCINATO")
    {
        city = "B394";
        finished = true;
    }
    else if (city == "CALCIO")
    {
        city = "B395";
        finished = true;
    }
    else if (city == "CALCO")
    {
        city = "B396";
        finished = true;
    }
    else if (city == "CALDAROSULLASTRADADELVINO.KALTERNANDE.")
    {
        city = "B397";
        finished = true;
    }
    else if (city == "CALDAROLA")
    {
        city = "B398";
        finished = true;
    }
    else if (city == "CALDERARADIRENO")
    {
        city = "B399";
        finished = true;
    }
    else if (city == "CALDES")
    {
        city = "B400";
        finished = true;
    }
    else if (city == "CALDIERO")
    {
        city = "B402";
        finished = true;
    }
    else if (city == "CALDOGNO")
    {
        city = "B403";
        finished = true;
    }
    else if (city == "CALDONAZZO")
    {
        city = "B404";
        finished = true;
    }
    else if (city == "CALENDASCO")
    {
        city = "B405";
        finished = true;
    }
    else if (city == "CALENZANO")
    {
        city = "B406";
        finished = true;
    }
    else if (city == "CALESTANO")
    {
        city = "B408";
        finished = true;
    }
    else if (city == "CALICEALCORNOVIGLIO")
    {
        city = "B410";
        finished = true;
    }
    else if (city == "CALICELIGURE")
    {
        city = "B409";
        finished = true;
    }
    else if (city == "CALIMERA")
    {
        city = "B413";
        finished = true;
    }
    else if (city == "CALITRI")
    {
        city = "B415";
        finished = true;
    }
    else if (city == "CALIZZANO")
    {
        city = "B416";
        finished = true;
    }
    else if (city == "CALLABIANA")
    {
        city = "B417";
        finished = true;
    }
    else if (city == "CALLIANO")
    {
        city = "B419";
        finished = true;
    }
    else if (city == "CALLIANO")
    {
        city = "B418";
        finished = true;
    }
    else if (city == "CALOLZIOCORTE")
    {
        city = "B423";
        finished = true;
    }
    else if (city == "CALOPEZZATI")
    {
        city = "B424";
        finished = true;
    }
    else if (city == "CALOSSO")
    {
        city = "B425";
        finished = true;
    }
    else if (city == "CALOVETO")
    {
        city = "B426";
        finished = true;
    }
    else if (city == "CALTABELLOTTA")
    {
        city = "B427";
        finished = true;
    }
    else if (city == "CALTAGIRONE")
    {
        city = "B428";
        finished = true;
    }
    else if (city == "CALTANISSETTA")
    {
        city = "B429";
        finished = true;
    }
    else if (city == "CALTAVUTURO")
    {
        city = "B430";
        finished = true;
    }
    else if (city == "CALTIGNAGA")
    {
        city = "B431";
        finished = true;
    }
    else if (city == "CALTO")
    {
        city = "B432";
        finished = true;
    }
    else if (city == "CALTRANO")
    {
        city = "B433";
        finished = true;
    }
    else if (city == "CALUSCOD'ADDA")
    {
        city = "B434";
        finished = true;
    }
    else if (city == "CALUSO")
    {
        city = "B435";
        finished = true;
    }
    else if (city == "CALVAGESEDELLARIVIERA")
    {
        city = "B436";
        finished = true;
    }
    else if (city == "CALVANICO")
    {
        city = "B437";
        finished = true;
    }
    else if (city == "CALVATONE")
    {
        city = "B439";
        finished = true;
    }
    else if (city == "CALVELLO")
    {
        city = "B440";
        finished = true;
    }
    else if (city == "CALVENE")
    {
        city = "B441";
        finished = true;
    }
    else if (city == "CALVENZANO")
    {
        city = "B442";
        finished = true;
    }
    else if (city == "CALVERA")
    {
        city = "B443";
        finished = true;
    }
    else if (city == "CALVI")
    {
        city = "B444";
        finished = true;
    }
    else if (city == "CALVIDELL'UMBRIA")
    {
        city = "B446";
        finished = true;
    }
    else if (city == "CALVIRISORTA")
    {
        city = "B445";
        finished = true;
    }
    else if (city == "CALVIGNANO")
    {
        city = "B447";
        finished = true;
    }
    else if (city == "CALVIGNASCO")
    {
        city = "B448";
        finished = true;
    }
    else if (city == "CALVISANO")
    {
        city = "B450";
        finished = true;
    }
    else if (city == "CALVIZZANO")
    {
        city = "B452";
        finished = true;
    }
    else if (city == "CAMAGNAMONFERRATO")
    {
        city = "B453";
        finished = true;
    }
    else if (city == "CAMAIORE")
    {
        city = "B455";
        finished = true;
    }
    else if (city == "CAMAIRAGO")
    {
        city = "B456";
        finished = true;
    }
    else if (city == "CAMANDONA")
    {
        city = "B457";
        finished = true;
    }
    else if (city == "CAMASTRA")
    {
        city = "B460";
        finished = true;
    }
    else if (city == "CAMBIAGO")
    {
        city = "B461";
        finished = true;
    }
    else if (city == "CAMBIANO")
    {
        city = "B462";
        finished = true;
    }
    else if (city == "CAMBIASCA")
    {
        city = "B463";
        finished = true;
    }
    else if (city == "CAMBURZANO")
    {
        city = "B465";
        finished = true;
    }
    else if (city == "CAMERANA")
    {
        city = "B467";
        finished = true;
    }
    else if (city == "CAMERANO")
    {
        city = "B468";
        finished = true;
    }
    else if (city == "CAMERANOCASASCO")
    {
        city = "B469";
        finished = true;
    }
    else if (city == "CAMERATACORNELLO")
    {
        city = "B471";
        finished = true;
    }
    else if (city == "CAMERATANUOVA")
    {
        city = "B472";
        finished = true;
    }
    else if (city == "CAMERATAPICENA")
    {
        city = "B470";
        finished = true;
    }
    else if (city == "CAMERI")
    {
        city = "B473";
        finished = true;
    }
    else if (city == "CAMERINO")
    {
        city = "B474";
        finished = true;
    }
    else if (city == "CAMEROTA")
    {
        city = "B476";
        finished = true;
    }
    else if (city == "CAMIGLIANO")
    {
        city = "B477";
        finished = true;
    }
    else if (city == "CAMINATA")
    {
        city = "B479";
        finished = true;
    }
    else if (city == "CAMINI")
    {
        city = "B481";
        finished = true;
    }
    else if (city == "CAMINO")
    {
        city = "B482";
        finished = true;
    }
    else if (city == "CAMINOALTAGLIAMENTO")
    {
        city = "B483";
        finished = true;
    }
    else if (city == "CAMISANO")
    {
        city = "B484";
        finished = true;
    }
    else if (city == "CAMISANOVICENTINO")
    {
        city = "B485";
        finished = true;
    }
    else if (city == "CAMMARATA")
    {
        city = "B486";
        finished = true;
    }
    else if (city == "CAMO")
    {
        city = "B489";
        finished = true;
    }
    else if (city == "CAMOGLI")
    {
        city = "B490";
        finished = true;
    }
    else if (city == "CAMPAGNA")
    {
        city = "B492";
        finished = true;
    }
    else if (city == "CAMPAGNALUPIA")
    {
        city = "B493";
        finished = true;
    }
    else if (city == "CAMPAGNANODIROMA")
    {
        city = "B496";
        finished = true;
    }
    else if (city == "CAMPAGNATICO")
    {
        city = "B497";
        finished = true;
    }
    else if (city == "CAMPAGNOLACREMASCA")
    {
        city = "B498";
        finished = true;
    }
    else if (city == "CAMPAGNOLAEMILIA")
    {
        city = "B499";
        finished = true;
    }
    else if (city == "CAMPANA")
    {
        city = "B500";
        finished = true;
    }
    else if (city == "CAMPARADA")
    {
        city = "B501";
        finished = true;
    }
    else if (city == "CAMPEGINE")
    {
        city = "B502";
        finished = true;
    }
    else if (city == "CAMPELLOSULCLITUNNO")
    {
        city = "B504";
        finished = true;
    }
    else if (city == "CAMPERTOGNO")
    {
        city = "B505";
        finished = true;
    }
    else if (city == "CAMPIBISENZIO")
    {
        city = "B507";
        finished = true;
    }
    else if (city == "CAMPISALENTINA")
    {
        city = "B506";
        finished = true;
    }
    else if (city == "CAMPIGLIACERVO")
    {
        city = "B508";
        finished = true;
    }
    else if (city == "CAMPIGLIACERVO")
    {
        city = "M373";
        finished = true;
    }
    else if (city == "CAMPIGLIADEIBERICI")
    {
        city = "B511";
        finished = true;
    }
    else if (city == "CAMPIGLIAMARITTIMA")
    {
        city = "B509";
        finished = true;
    }
    else if (city == "CAMPIGLIONEFENILE")
    {
        city = "B512";
        finished = true;
    }
    else if (city == "CAMPIONED'ITALIA")
    {
        city = "B513";
        finished = true;
    }
    else if (city == "CAMPITELLODelse ifASSA")
    {
        city = "B514";
        finished = true;
    }
    else if (city == "CAMPLI")
    {
        city = "B515";
        finished = true;
    }
    else if (city == "CAMPOCALABRO")
    {
        city = "B516";
        finished = true;
    }
    else if (city == "CAMPODIGIOVE")
    {
        city = "B526";
        finished = true;
    }
    else if (city == "CAMPODITRENS.FREIENFELD.")
    {
        city = "B529";
        finished = true;
    }
    else if (city == "CAMPOLIGURE")
    {
        city = "B538";
        finished = true;
    }
    else if (city == "CAMPONELL'ELBA")
    {
        city = "B553";
        finished = true;
    }
    else if (city == "CAMPOSANMARTINO")
    {
        city = "B564";
        finished = true;
    }
    else if (city == "CAMPOTURES.SANDINTAUFERS.")
    {
        city = "B570";
        finished = true;
    }
    else if (city == "CAMPOBASSO")
    {
        city = "B519";
        finished = true;
    }
    else if (city == "CAMPOBELLODILICATA")
    {
        city = "B520";
        finished = true;
    }
    else if (city == "CAMPOBELLODIMAZARA")
    {
        city = "B521";
        finished = true;
    }
    else if (city == "CAMPOCHIARO")
    {
        city = "B522";
        finished = true;
    }
    else if (city == "CAMPODARSEGO")
    {
        city = "B524";
        finished = true;
    }
    else if (city == "CAMPODENNO")
    {
        city = "B525";
        finished = true;
    }
    else if (city == "CAMPODIMELE")
    {
        city = "B527";
        finished = true;
    }
    else if (city == "CAMPODIPIETRA")
    {
        city = "B528";
        finished = true;
    }
    else if (city == "CAMPODOLCINO")
    {
        city = "B530";
        finished = true;
    }
    else if (city == "CAMPODORO")
    {
        city = "B531";
        finished = true;
    }
    else if (city == "CAMPOFELICEDelse ifITALIA")
    {
        city = "B533";
        finished = true;
    }
    else if (city == "CAMPOFELICEDIROCCELLA")
    {
        city = "B532";
        finished = true;
    }
    else if (city == "CAMPOFILONE")
    {
        city = "B534";
        finished = true;
    }
    else if (city == "CAMPOFIORITO")
    {
        city = "B535";
        finished = true;
    }
    else if (city == "CAMPOFORMIDO")
    {
        city = "B536";
        finished = true;
    }
    else if (city == "CAMPOFRANCO")
    {
        city = "B537";
        finished = true;
    }
    else if (city == "CAMPOGALLIANO")
    {
        city = "B539";
        finished = true;
    }
    else if (city == "CAMPOLATTARO")
    {
        city = "B541";
        finished = true;
    }
    else if (city == "CAMPOLIAPPENNINO")
    {
        city = "B543";
        finished = true;
    }
    else if (city == "CAMPOLIDELMONTETABURNO")
    {
        city = "B542";
        finished = true;
    }
    else if (city == "CAMPOLIETO")
    {
        city = "B544";
        finished = true;
    }
    else if (city == "CAMPOLONGOALTORRE")
    {
        city = "B545";
        finished = true;
    }
    else if (city == "CAMPOLONGOMAGGIORE")
    {
        city = "B546";
        finished = true;
    }
    else if (city == "CAMPOLONGOSULBRENTA")
    {
        city = "B547";
        finished = true;
    }
    else if (city == "CAMPOLONGOTAPOGLIANO")
    {
        city = "M311";
        finished = true;
    }
    else if (city == "CAMPOMAGGIORE")
    {
        city = "B549";
        finished = true;
    }
    else if (city == "CAMPOMARINO")
    {
        city = "B550";
        finished = true;
    }
    else if (city == "CAMPOMORONE")
    {
        city = "B551";
        finished = true;
    }
    else if (city == "CAMPONOGARA")
    {
        city = "B554";
        finished = true;
    }
    else if (city == "CAMPORA")
    {
        city = "B555";
        finished = true;
    }
    else if (city == "CAMPOREALE")
    {
        city = "B556";
        finished = true;
    }
    else if (city == "CAMPORGIANO")
    {
        city = "B557";
        finished = true;
    }
    else if (city == "CAMPOROSSO")
    {
        city = "B559";
        finished = true;
    }
    else if (city == "CAMPOROTONDODelse ifIASTRONE")
    {
        city = "B562";
        finished = true;
    }
    else if (city == "CAMPOROTONDOETNEO")
    {
        city = "B561";
        finished = true;
    }
    else if (city == "CAMPOSAMPIERO")
    {
        city = "B563";
        finished = true;
    }
    else if (city == "CAMPOSANO")
    {
        city = "B565";
        finished = true;
    }
    else if (city == "CAMPOSANTO")
    {
        city = "B566";
        finished = true;
    }
    else if (city == "CAMPOSPINOSO")
    {
        city = "B567";
        finished = true;
    }
    else if (city == "CAMPOTOSTO")
    {
        city = "B569";
        finished = true;
    }
    else if (city == "CAMUGNANO")
    {
        city = "B572";
        finished = true;
    }
    else if (city == "CANALSANBOVO")
    {
        city = "B577";
        finished = true;
    }
    else if (city == "CANALE")
    {
        city = "B573";
        finished = true;
    }
    else if (city == "CANALED'AGORDO")
    {
        city = "B574";
        finished = true;
    }
    else if (city == "CANALEMONTERANO")
    {
        city = "B576";
        finished = true;
    }
    else if (city == "CANARO")
    {
        city = "B578";
        finished = true;
    }
    else if (city == "CANAZEI")
    {
        city = "B579";
        finished = true;
    }
    else if (city == "CANCELLARA")
    {
        city = "B580";
        finished = true;
    }
    else if (city == "CANCELLOEDARNONE")
    {
        city = "B581";
        finished = true;
    }
    else if (city == "CANDA")
    {
        city = "B582";
        finished = true;
    }
    else if (city == "CANDELA")
    {
        city = "B584";
        finished = true;
    }
    else if (city == "CANDELO")
    {
        city = "B586";
        finished = true;
    }
    else if (city == "CANDIACANAVESE")
    {
        city = "B588";
        finished = true;
    }
    else if (city == "CANDIALOMELLINA")
    {
        city = "B587";
        finished = true;
    }
    else if (city == "CANDIANA")
    {
        city = "B589";
        finished = true;
    }
    else if (city == "CANDIDA")
    {
        city = "B590";
        finished = true;
    }
    else if (city == "CANDIDONI")
    {
        city = "B591";
        finished = true;
    }
    else if (city == "CANDIOLO")
    {
        city = "B592";
        finished = true;
    }
    else if (city == "CANEGRATE")
    {
        city = "B593";
        finished = true;
    }
    else if (city == "CANELLI")
    {
        city = "B594";
        finished = true;
    }
    else if (city == "CANEPINA")
    {
        city = "B597";
        finished = true;
    }
    else if (city == "CANEVA")
    {
        city = "B598";
        finished = true;
    }
    else if (city == "CANEVINO")
    {
        city = "B599";
        finished = true;
    }
    else if (city == "CANICATTI'")
    {
        city = "B602";
        finished = true;
    }
    else if (city == "CANICATTINIBAGNI")
    {
        city = "B603";
        finished = true;
    }
    else if (city == "CANINO")
    {
        city = "B604";
        finished = true;
    }
    else if (city == "CANISCHIO")
    {
        city = "B605";
        finished = true;
    }
    else if (city == "CANISTRO")
    {
        city = "B606";
        finished = true;
    }
    else if (city == "CANNA")
    {
        city = "B607";
        finished = true;
    }
    else if (city == "CANNALONGA")
    {
        city = "B608";
        finished = true;
    }
    else if (city == "CANNARA")
    {
        city = "B609";
        finished = true;
    }
    else if (city == "CANNERORIVIERA")
    {
        city = "B610";
        finished = true;
    }
    else if (city == "CANNETOPAVESE")
    {
        city = "B613";
        finished = true;
    }
    else if (city == "CANNETOSULL'OGLIO")
    {
        city = "B612";
        finished = true;
    }
    else if (city == "CANNOBIO")
    {
        city = "B615";
        finished = true;
    }
    else if (city == "CANNOLE")
    {
        city = "B616";
        finished = true;
    }
    else if (city == "CANOLO")
    {
        city = "B617";
        finished = true;
    }
    else if (city == "CANONICAD'ADDA")
    {
        city = "B618";
        finished = true;
    }
    else if (city == "CANOSADIPUGLIA")
    {
        city = "B619";
        finished = true;
    }
    else if (city == "CANOSASANNITA")
    {
        city = "B620";
        finished = true;
    }
    else if (city == "CANOSIO")
    {
        city = "B621";
        finished = true;
    }
    else if (city == "CANOSSA")
    {
        city = "C669";
        finished = true;
    }
    else if (city == "CANSANO")
    {
        city = "B624";
        finished = true;
    }
    else if (city == "CANTAGALLO")
    {
        city = "B626";
        finished = true;
    }
    else if (city == "CANTALICE")
    {
        city = "B627";
        finished = true;
    }
    else if (city == "CANTALUPA")
    {
        city = "B628";
        finished = true;
    }
    else if (city == "CANTALUPOINSABINA")
    {
        city = "B631";
        finished = true;
    }
    else if (city == "CANTALUPOLIGURE")
    {
        city = "B629";
        finished = true;
    }
    else if (city == "CANTALUPONELSANNIO")
    {
        city = "B630";
        finished = true;
    }
    else if (city == "CANTARANA")
    {
        city = "B633";
        finished = true;
    }
    else if (city == "CANTELLO")
    {
        city = "B634";
        finished = true;
    }
    else if (city == "CANTERANO")
    {
        city = "B635";
        finished = true;
    }
    else if (city == "CANTIANO")
    {
        city = "B636";
        finished = true;
    }
    else if (city == "CANTOIRA")
    {
        city = "B637";
        finished = true;
    }
    else if (city == "CANTU'")
    {
        city = "B639";
        finished = true;
    }
    else if (city == "CANZANO")
    {
        city = "B640";
        finished = true;
    }
    else if (city == "CANZO")
    {
        city = "B641";
        finished = true;
    }
    else if (city == "CAORLE")
    {
        city = "B642";
        finished = true;
    }
    else if (city == "CAORSO")
    {
        city = "B643";
        finished = true;
    }
    else if (city == "CAPACCIOPAESTUM")
    {
        city = "B644";
        finished = true;
    }
    else if (city == "CAPACI")
    {
        city = "B645";
        finished = true;
    }
    else if (city == "CAPALBIO")
    {
        city = "B646";
        finished = true;
    }
    else if (city == "CAPANNOLI")
    {
        city = "B647";
        finished = true;
    }
    else if (city == "CAPANNORI")
    {
        city = "B648";
        finished = true;
    }
    else if (city == "CAPENA")
    {
        city = "B649";
        finished = true;
    }
    else if (city == "CAPERGNANICA")
    {
        city = "B650";
        finished = true;
    }
    else if (city == "CAPESTRANO")
    {
        city = "B651";
        finished = true;
    }
    else if (city == "CAPIAGOINTIMIANO")
    {
        city = "B653";
        finished = true;
    }
    else if (city == "CAPISTRANO")
    {
        city = "B655";
        finished = true;
    }
    else if (city == "CAPISTRELLO")
    {
        city = "B656";
        finished = true;
    }
    else if (city == "CAPITIGNANO")
    {
        city = "B658";
        finished = true;
    }
    else if (city == "CAPIZZI")
    {
        city = "B660";
        finished = true;
    }
    else if (city == "CAPIZZONE")
    {
        city = "B661";
        finished = true;
    }
    else if (city == "CAPODIPONTE")
    {
        city = "B664";
        finished = true;
    }
    else if (city == "CAPOD'ORLANDO")
    {
        city = "B666";
        finished = true;
    }
    else if (city == "CAPODIMONTE")
    {
        city = "B663";
        finished = true;
    }
    else if (city == "CAPODRISE")
    {
        city = "B667";
        finished = true;
    }
    else if (city == "CAPOLIVERI")
    {
        city = "B669";
        finished = true;
    }
    else if (city == "CAPOLONA")
    {
        city = "B670";
        finished = true;
    }
    else if (city == "CAPONAGO")
    {
        city = "B671";
        finished = true;
    }
    else if (city == "CAPORCIANO")
    {
        city = "B672";
        finished = true;
    }
    else if (city == "CAPOSELE")
    {
        city = "B674";
        finished = true;
    }
    else if (city == "CAPOTERRA")
    {
        city = "B675";
        finished = true;
    }
    else if (city == "CAPOVALLE")
    {
        city = "B676";
        finished = true;
    }
    else if (city == "CAPPADOCIA")
    {
        city = "B677";
        finished = true;
    }
    else if (city == "CAPPELLACANTONE")
    {
        city = "B679";
        finished = true;
    }
    else if (city == "CAPPELLADE'PICENARDI")
    {
        city = "B680";
        finished = true;
    }
    else if (city == "CAPPELLAMAGGIORE")
    {
        city = "B678";
        finished = true;
    }
    else if (city == "CAPPELLESULTAVO")
    {
        city = "B681";
        finished = true;
    }
    else if (city == "CAPRACOTTA")
    {
        city = "B682";
        finished = true;
    }
    else if (city == "CAPRAIAELIMITE")
    {
        city = "B684";
        finished = true;
    }
    else if (city == "CAPRAIAISOLA")
    {
        city = "B685";
        finished = true;
    }
    else if (city == "CAPRALBA")
    {
        city = "B686";
        finished = true;
    }
    else if (city == "CAPRANICA")
    {
        city = "B688";
        finished = true;
    }
    else if (city == "CAPRANICAPRENESTINA")
    {
        city = "B687";
        finished = true;
    }
    else if (city == "CAPRARICADILECCE")
    {
        city = "B690";
        finished = true;
    }
    else if (city == "CAPRAROLA")
    {
        city = "B691";
        finished = true;
    }
    else if (city == "CAPRAUNA")
    {
        city = "B692";
        finished = true;
    }
    else if (city == "CAPRESEMICHELANGELO")
    {
        city = "B693";
        finished = true;
    }
    else if (city == "CAPREZZO")
    {
        city = "B694";
        finished = true;
    }
    else if (city == "CAPRI")
    {
        city = "B696";
        finished = true;
    }
    else if (city == "CAPRILEONE")
    {
        city = "B695";
        finished = true;
    }
    else if (city == "CAPRIANA")
    {
        city = "B697";
        finished = true;
    }
    else if (city == "CAPRIANODELCOLLE")
    {
        city = "B698";
        finished = true;
    }
    else if (city == "CAPRIATAD'ORBA")
    {
        city = "B701";
        finished = true;
    }
    else if (city == "CAPRIATESANGERVASIO")
    {
        city = "B703";
        finished = true;
    }
    else if (city == "CAPRIATIAVOLTURNO")
    {
        city = "B704";
        finished = true;
    }
    else if (city == "CAPRIE")
    {
        city = "B705";
        finished = true;
    }
    else if (city == "CAPRIGLIAIRPINA")
    {
        city = "B706";
        finished = true;
    }
    else if (city == "CAPRIGLIO")
    {
        city = "B707";
        finished = true;
    }
    else if (city == "CAPRILE")
    {
        city = "B708";
        finished = true;
    }
    else if (city == "CAPRINOBERGAMASCO")
    {
        city = "B710";
        finished = true;
    }
    else if (city == "CAPRINOVERONESE")
    {
        city = "B709";
        finished = true;
    }
    else if (city == "CAPRIOLO")
    {
        city = "B711";
        finished = true;
    }
    else if (city == "CAPRIVADELFRIULI")
    {
        city = "B712";
        finished = true;
    }
    else if (city == "CAPUA")
    {
        city = "B715";
        finished = true;
    }
    else if (city == "CAPURSO")
    {
        city = "B716";
        finished = true;
    }
    else if (city == "CARAFFADELBIANCO")
    {
        city = "B718";
        finished = true;
    }
    else if (city == "CARAFFADICATANZARO")
    {
        city = "B717";
        finished = true;
    }
    else if (city == "CARAGLIO")
    {
        city = "B719";
        finished = true;
    }
    else if (city == "CARAMAGNAPIEMONTE")
    {
        city = "B720";
        finished = true;
    }
    else if (city == "CARAMANICOTERME")
    {
        city = "B722";
        finished = true;
    }
    else if (city == "CARANO")
    {
        city = "B723";
        finished = true;
    }
    else if (city == "CARAPELLE")
    {
        city = "B724";
        finished = true;
    }
    else if (city == "CARAPELLECALVISIO")
    {
        city = "B725";
        finished = true;
    }
    else if (city == "CARASCO")
    {
        city = "B726";
        finished = true;
    }
    else if (city == "CARASSAI")
    {
        city = "B727";
        finished = true;
    }
    else if (city == "CARATEBRIANZA")
    {
        city = "B729";
        finished = true;
    }
    else if (city == "CARATEURIO")
    {
        city = "B730";
        finished = true;
    }
    else if (city == "CARAVAGGIO")
    {
        city = "B731";
        finished = true;
    }
    else if (city == "CARAVATE")
    {
        city = "B732";
        finished = true;
    }
    else if (city == "CARAVINO")
    {
        city = "B733";
        finished = true;
    }
    else if (city == "CARAVONICA")
    {
        city = "B734";
        finished = true;
    }
    else if (city == "CARBOGNANO")
    {
        city = "B735";
        finished = true;
    }
    else if (city == "CARBONARAALTICINO")
    {
        city = "B741";
        finished = true;
    }
    else if (city == "CARBONARADINOLA")
    {
        city = "B740";
        finished = true;
    }
    else if (city == "CARBONARADIPO")
    {
        city = "B739";
        finished = true;
    }
    else if (city == "CARBONARASCRIVIA")
    {
        city = "B736";
        finished = true;
    }
    else if (city == "CARBONATE")
    {
        city = "B742";
        finished = true;
    }
    else if (city == "CARBONE")
    {
        city = "B743";
        finished = true;
    }
    else if (city == "CARBONERA")
    {
        city = "B744";
        finished = true;
    }
    else if (city == "CARBONIA")
    {
        city = "B745";
        finished = true;
    }
    else if (city == "CARCARE")
    {
        city = "B748";
        finished = true;
    }
    else if (city == "CARCERI")
    {
        city = "B749";
        finished = true;
    }
    else if (city == "CARCOFORO")
    {
        city = "B752";
        finished = true;
    }
    else if (city == "CARDANOALCAMPO")
    {
        city = "B754";
        finished = true;
    }
    else if (city == "CARDE'")
    {
        city = "B755";
        finished = true;
    }
    else if (city == "CARDEDU")
    {
        city = "M285";
        finished = true;
    }
    else if (city == "CARDETO")
    {
        city = "B756";
        finished = true;
    }
    else if (city == "CARDINALE")
    {
        city = "B758";
        finished = true;
    }
    else if (city == "CARDITO")
    {
        city = "B759";
        finished = true;
    }
    else if (city == "CAREGGINE")
    {
        city = "B760";
        finished = true;
    }
    else if (city == "CAREMA")
    {
        city = "B762";
        finished = true;
    }
    else if (city == "CARENNO")
    {
        city = "B763";
        finished = true;
    }
    else if (city == "CARENTINO")
    {
        city = "B765";
        finished = true;
    }
    else if (city == "CARERI")
    {
        city = "B766";
        finished = true;
    }
    else if (city == "CARESANA")
    {
        city = "B767";
        finished = true;
    }
    else if (city == "CARESANABLOT")
    {
        city = "B768";
        finished = true;
    }
    else if (city == "CAREZZANO")
    {
        city = "B769";
        finished = true;
    }
    else if (city == "CARFIZZI")
    {
        city = "B771";
        finished = true;
    }
    else if (city == "CARGEGHE")
    {
        city = "B772";
        finished = true;
    }
    else if (city == "CARIATI")
    {
        city = "B774";
        finished = true;
    }
    else if (city == "CARelse ifE")
    {
        city = "B776";
        finished = true;
    }
    else if (city == "CARIGNANO")
    {
        city = "B777";
        finished = true;
    }
    else if (city == "CARIMATE")
    {
        city = "B778";
        finished = true;
    }
    else if (city == "CARINARO")
    {
        city = "B779";
        finished = true;
    }
    else if (city == "CARINI")
    {
        city = "B780";
        finished = true;
    }
    else if (city == "CARINOLA")
    {
        city = "B781";
        finished = true;
    }
    else if (city == "CARISIO")
    {
        city = "B782";
        finished = true;
    }
    else if (city == "CARISOLO")
    {
        city = "B783";
        finished = true;
    }
    else if (city == "CARLANTINO")
    {
        city = "B784";
        finished = true;
    }
    else if (city == "CARLAZZO")
    {
        city = "B785";
        finished = true;
    }
    else if (city == "CARLENTINI")
    {
        city = "B787";
        finished = true;
    }
    else if (city == "CARLINO")
    {
        city = "B788";
        finished = true;
    }
    else if (city == "CARLOFORTE")
    {
        city = "B789";
        finished = true;
    }
    else if (city == "CARLOPOLI")
    {
        city = "B790";
        finished = true;
    }
    else if (city == "CARMAGNOLA")
    {
        city = "B791";
        finished = true;
    }
    else if (city == "CARMIANO")
    {
        city = "B792";
        finished = true;
    }
    else if (city == "CARMIGNANO")
    {
        city = "B794";
        finished = true;
    }
    else if (city == "CARMIGNANODIBRENTA")
    {
        city = "B795";
        finished = true;
    }
    else if (city == "CARNAGO")
    {
        city = "B796";
        finished = true;
    }
    else if (city == "CARNATE")
    {
        city = "B798";
        finished = true;
    }
    else if (city == "CAROBBIODEGLIANGELI")
    {
        city = "B801";
        finished = true;
    }
    else if (city == "CAROLEI")
    {
        city = "B802";
        finished = true;
    }
    else if (city == "CARONA")
    {
        city = "B803";
        finished = true;
    }
    else if (city == "CARONIA")
    {
        city = "B804";
        finished = true;
    }
    else if (city == "CARONNOPERTUSELLA")
    {
        city = "B805";
        finished = true;
    }
    else if (city == "CARONNOVARESINO")
    {
        city = "B807";
        finished = true;
    }
    else if (city == "CAROSINO")
    {
        city = "B808";
        finished = true;
    }
    else if (city == "CAROVIGNO")
    {
        city = "B809";
        finished = true;
    }
    else if (city == "CAROVILLI")
    {
        city = "B810";
        finished = true;
    }
    else if (city == "CARPANETOPIACENTINO")
    {
        city = "B812";
        finished = true;
    }
    else if (city == "CARPANZANO")
    {
        city = "B813";
        finished = true;
    }
    else if (city == "CARPASIO")
    {
        city = "B814";
        finished = true;
    }
    else if (city == "CARPEGNA")
    {
        city = "B816";
        finished = true;
    }
    else if (city == "CARPENEDOLO")
    {
        city = "B817";
        finished = true;
    }
    else if (city == "CARPENETO")
    {
        city = "B818";
        finished = true;
    }
    else if (city == "CARPI")
    {
        city = "B819";
        finished = true;
    }
    else if (city == "CARPIANO")
    {
        city = "B820";
        finished = true;
    }
    else if (city == "CARPIGNANOSALENTINO")
    {
        city = "B822";
        finished = true;
    }
    else if (city == "CARPIGNANOSESIA")
    {
        city = "B823";
        finished = true;
    }
    else if (city == "CARPINETI")
    {
        city = "B825";
        finished = true;
    }
    else if (city == "CARPINETODELLANORA")
    {
        city = "B827";
        finished = true;
    }
    else if (city == "CARPINETOROMANO")
    {
        city = "B828";
        finished = true;
    }
    else if (city == "CARPINETOSINELLO")
    {
        city = "B826";
        finished = true;
    }
    else if (city == "CARPINO")
    {
        city = "B829";
        finished = true;
    }
    else if (city == "CARPINONE")
    {
        city = "B830";
        finished = true;
    }
    else if (city == "CARRARA")
    {
        city = "B832";
        finished = true;
    }
    else if (city == "CARRE'")
    {
        city = "B835";
        finished = true;
    }
    else if (city == "CARREGALIGURE")
    {
        city = "B836";
        finished = true;
    }
    else if (city == "CARRO")
    {
        city = "B838";
        finished = true;
    }
    else if (city == "CARRODANO")
    {
        city = "B839";
        finished = true;
    }
    else if (city == "CARROSIO")
    {
        city = "B840";
        finished = true;
    }
    else if (city == "CARRU'")
    {
        city = "B841";
        finished = true;
    }
    else if (city == "CARSOLI")
    {
        city = "B842";
        finished = true;
    }
    else if (city == "CARTIGLIANO")
    {
        city = "B844";
        finished = true;
    }
    else if (city == "CARTIGNANO")
    {
        city = "B845";
        finished = true;
    }
    else if (city == "CARTOCETO")
    {
        city = "B846";
        finished = true;
    }
    else if (city == "CARTOSIO")
    {
        city = "B847";
        finished = true;
    }
    else if (city == "CARTURA")
    {
        city = "B848";
        finished = true;
    }
    else if (city == "CARUGATE")
    {
        city = "B850";
        finished = true;
    }
    else if (city == "CARUGO")
    {
        city = "B851";
        finished = true;
    }
    else if (city == "CARUNCHIO")
    {
        city = "B853";
        finished = true;
    }
    else if (city == "CARVICO")
    {
        city = "B854";
        finished = true;
    }
    else if (city == "CARZANO")
    {
        city = "B856";
        finished = true;
    }
    else if (city == "CASABONA")
    {
        city = "B857";
        finished = true;
    }
    else if (city == "CASACALENDA")
    {
        city = "B858";
        finished = true;
    }
    else if (city == "CASACANDITELLA")
    {
        city = "B859";
        finished = true;
    }
    else if (city == "CASAGIOVE")
    {
        city = "B860";
        finished = true;
    }
    else if (city == "CASALCERMELLI")
    {
        city = "B870";
        finished = true;
    }
    else if (city == "CASALDIPRINCIPE")
    {
        city = "B872";
        finished = true;
    }
    else if (city == "CASALVELINO")
    {
        city = "B895";
        finished = true;
    }
    else if (city == "CASALANGUIDA")
    {
        city = "B861";
        finished = true;
    }
    else if (city == "CASALATTICO")
    {
        city = "B862";
        finished = true;
    }
    else if (city == "CASALBELTRAME")
    {
        city = "B864";
        finished = true;
    }
    else if (city == "CASALBORDINO")
    {
        city = "B865";
        finished = true;
    }
    else if (city == "CASALBORE")
    {
        city = "B866";
        finished = true;
    }
    else if (city == "CASALBORGONE")
    {
        city = "B867";
        finished = true;
    }
    else if (city == "CASALBUONO")
    {
        city = "B868";
        finished = true;
    }
    else if (city == "CASALBUTTANOEDUNITI")
    {
        city = "B869";
        finished = true;
    }
    else if (city == "CASALCIPRANO")
    {
        city = "B871";
        finished = true;
    }
    else if (city == "CASALDUNI")
    {
        city = "B873";
        finished = true;
    }
    else if (city == "CASALECORTECERRO")
    {
        city = "B876";
        finished = true;
    }
    else if (city == "CASALECREMASCO-VIDOLASCO")
    {
        city = "B881";
        finished = true;
    }
    else if (city == "CASALEDISCODOSIA")
    {
        city = "B877";
        finished = true;
    }
    else if (city == "CASALELITTA")
    {
        city = "B875";
        finished = true;
    }
    else if (city == "CASALEMARITTIMO")
    {
        city = "B878";
        finished = true;
    }
    else if (city == "CASALEMONFERRATO")
    {
        city = "B885";
        finished = true;
    }
    else if (city == "CASALESULSILE")
    {
        city = "B879";
        finished = true;
    }
    else if (city == "CASALECCHIODIRENO")
    {
        city = "B880";
        finished = true;
    }
    else if (city == "CASALEGGIOBOIRO")
    {
        city = "B882";
        finished = true;
    }
    else if (city == "CASALEGGIONOVARA")
    {
        city = "B883";
        finished = true;
    }
    else if (city == "CASALEONE")
    {
        city = "B886";
        finished = true;
    }
    else if (city == "CASALETTOCEREDANO")
    {
        city = "B889";
        finished = true;
    }
    else if (city == "CASALETTODISOPRA")
    {
        city = "B890";
        finished = true;
    }
    else if (city == "CASALETTOLODIGIANO")
    {
        city = "B887";
        finished = true;
    }
    else if (city == "CASALETTOSPARTANO")
    {
        city = "B888";
        finished = true;
    }
    else if (city == "CASALETTOVAPRIO")
    {
        city = "B891";
        finished = true;
    }
    else if (city == "CASALFIUMANESE")
    {
        city = "B892";
        finished = true;
    }
    else if (city == "CASALGRANDE")
    {
        city = "B893";
        finished = true;
    }
    else if (city == "CASALGRASSO")
    {
        city = "B894";
        finished = true;
    }
    else if (city == "CASALIDELMANCO")
    {
        city = "M385";
        finished = true;
    }
    else if (city == "CASALINCONTRADA")
    {
        city = "B896";
        finished = true;
    }
    else if (city == "CASALINO")
    {
        city = "B897";
        finished = true;
    }
    else if (city == "CASALMAGGIORE")
    {
        city = "B898";
        finished = true;
    }
    else if (city == "CASALMAIOCCO")
    {
        city = "B899";
        finished = true;
    }
    else if (city == "CASALMORANO")
    {
        city = "B900";
        finished = true;
    }
    else if (city == "CASALMORO")
    {
        city = "B901";
        finished = true;
    }
    else if (city == "CASALNOCETO")
    {
        city = "B902";
        finished = true;
    }
    else if (city == "CASALNUOVODINAPOLI")
    {
        city = "B905";
        finished = true;
    }
    else if (city == "CASALNUOVOMONTEROTARO")
    {
        city = "B904";
        finished = true;
    }
    else if (city == "CASALOLDO")
    {
        city = "B907";
        finished = true;
    }
    else if (city == "CASALPUSTERLENGO")
    {
        city = "B910";
        finished = true;
    }
    else if (city == "CASALROMANO")
    {
        city = "B911";
        finished = true;
    }
    else if (city == "CASALSERUGO")
    {
        city = "B912";
        finished = true;
    }
    else if (city == "CASALUCE")
    {
        city = "B916";
        finished = true;
    }
    else if (city == "CASALVECCHIODIPUGLIA")
    {
        city = "B917";
        finished = true;
    }
    else if (city == "CASALVECCHIOSICULO")
    {
        city = "B918";
        finished = true;
    }
    else if (city == "CASALVIERI")
    {
        city = "B919";
        finished = true;
    }
    else if (city == "CASALVOLONE")
    {
        city = "B920";
        finished = true;
    }
    else if (city == "CASALZUIGNO")
    {
        city = "B921";
        finished = true;
    }
    else if (city == "CASAMARCIANO")
    {
        city = "B922";
        finished = true;
    }
    else if (city == "CASAMASSIMA")
    {
        city = "B923";
        finished = true;
    }
    else if (city == "CASAMICCIOLATERME")
    {
        city = "B924";
        finished = true;
    }
    else if (city == "CASANDRINO")
    {
        city = "B925";
        finished = true;
    }
    else if (city == "CASANOVAELVO")
    {
        city = "B928";
        finished = true;
    }
    else if (city == "CASANOVALERRONE")
    {
        city = "B927";
        finished = true;
    }
    else if (city == "CASANOVALONATI")
    {
        city = "B929";
        finished = true;
    }
    else if (city == "CASAPE")
    {
        city = "B932";
        finished = true;
    }
    else if (city == "CASAPESENNA")
    {
        city = "M260";
        finished = true;
    }
    else if (city == "CASAPINTA")
    {
        city = "B933";
        finished = true;
    }
    else if (city == "CASAPROTA")
    {
        city = "B934";
        finished = true;
    }
    else if (city == "CASAPULLA")
    {
        city = "B935";
        finished = true;
    }
    else if (city == "CASARANO")
    {
        city = "B936";
        finished = true;
    }
    else if (city == "CASARGO")
    {
        city = "B937";
        finished = true;
    }
    else if (city == "CASARILE")
    {
        city = "B938";
        finished = true;
    }
    else if (city == "CASARSADELLADELIZIA")
    {
        city = "B940";
        finished = true;
    }
    else if (city == "CASARZALIGURE")
    {
        city = "B939";
        finished = true;
    }
    else if (city == "CASASCO")
    {
        city = "B941";
        finished = true;
    }
    else if (city == "CASASCOD'INTELVI")
    {
        city = "B942";
        finished = true;
    }
    else if (city == "CASATENOVO")
    {
        city = "B943";
        finished = true;
    }
    else if (city == "CASATISMA")
    {
        city = "B945";
        finished = true;
    }
    else if (city == "CASAVATORE")
    {
        city = "B946";
        finished = true;
    }
    else if (city == "CASAZZA")
    {
        city = "B947";
        finished = true;
    }
    else if (city == "CASCIA")
    {
        city = "B948";
        finished = true;
    }
    else if (city == "CASCIAGO")
    {
        city = "B949";
        finished = true;
    }
    else if (city == "CASCIANATERME")
    {
        city = "A559";
        finished = true;
    }
    else if (city == "CASCIANATERMELARI")
    {
        city = "M327";
        finished = true;
    }
    else if (city == "CASCINA")
    {
        city = "B950";
        finished = true;
    }
    else if (city == "CASCINETTED'IVREA")
    {
        city = "B953";
        finished = true;
    }
    else if (city == "CASEIGEROLA")
    {
        city = "B954";
        finished = true;
    }
    else if (city == "CASELETTE")
    {
        city = "B955";
        finished = true;
    }
    else if (city == "CASELLA")
    {
        city = "B956";
        finished = true;
    }
    else if (city == "CASELLEINPITTARI")
    {
        city = "B959";
        finished = true;
    }
    else if (city == "CASELLELANDI")
    {
        city = "B961";
        finished = true;
    }
    else if (city == "CASELLELURANI")
    {
        city = "B958";
        finished = true;
    }
    else if (city == "CASELLETORINESE")
    {
        city = "B960";
        finished = true;
    }
    else if (city == "CASERTA")
    {
        city = "B963";
        finished = true;
    }
    else if (city == "CASIER")
    {
        city = "B965";
        finished = true;
    }
    else if (city == "CASIGNANA")
    {
        city = "B966";
        finished = true;
    }
    else if (city == "CASINA")
    {
        city = "B967";
        finished = true;
    }
    else if (city == "CASIRATED'ADDA")
    {
        city = "B971";
        finished = true;
    }
    else if (city == "CASLINOD'ERBA")
    {
        city = "B974";
        finished = true;
    }
    else if (city == "CASNATECONBERNATE")
    {
        city = "B977";
        finished = true;
    }
    else if (city == "CASNIGO")
    {
        city = "B978";
        finished = true;
    }
    else if (city == "CASOLADINAPOLI")
    {
        city = "B980";
        finished = true;
    }
    else if (city == "CASOLAINLUNIGIANA")
    {
        city = "B979";
        finished = true;
    }
    else if (city == "CASOLAVALSENIO")
    {
        city = "B982";
        finished = true;
    }
    else if (city == "CASOLEBRUZIO")
    {
        city = "B983";
        finished = true;
    }
    else if (city == "CASOLED'ELSA")
    {
        city = "B984";
        finished = true;
    }
    else if (city == "CASOLI")
    {
        city = "B985";
        finished = true;
    }
    else if (city == "CASORATEPRIMO")
    {
        city = "B988";
        finished = true;
    }
    else if (city == "CASORATESEMPIONE")
    {
        city = "B987";
        finished = true;
    }
    else if (city == "CASOREZZO")
    {
        city = "B989";
        finished = true;
    }
    else if (city == "CASORIA")
    {
        city = "B990";
        finished = true;
    }
    else if (city == "CASORZO")
    {
        city = "B991";
        finished = true;
    }
    else if (city == "CASPERIA")
    {
        city = "A472";
        finished = true;
    }
    else if (city == "CASPOGGIO")
    {
        city = "B993";
        finished = true;
    }
    else if (city == "CASSACCO")
    {
        city = "B994";
        finished = true;
    }
    else if (city == "CASSAGOBRIANZA")
    {
        city = "B996";
        finished = true;
    }
    else if (city == "CASSANOALL'IONIO")
    {
        city = "C002";
        finished = true;
    }
    else if (city == "CASSANOD'ADDA")
    {
        city = "C003";
        finished = true;
    }
    else if (city == "CASSANODELLEMURGE")
    {
        city = "B998";
        finished = true;
    }
    else if (city == "CASSANOIRPINO")
    {
        city = "B997";
        finished = true;
    }
    else if (city == "CASSANOMAGNAGO")
    {
        city = "C004";
        finished = true;
    }
    else if (city == "CASSANOSPINOLA")
    {
        city = "C005";
        finished = true;
    }
    else if (city == "CASSANOSPINOLA")
    {
        city = "M388";
        finished = true;
    }
    else if (city == "CASSANOVALCUVIA")
    {
        city = "B999";
        finished = true;
    }
    else if (city == "CASSARO")
    {
        city = "C006";
        finished = true;
    }
    else if (city == "CASSIGLIO")
    {
        city = "C007";
        finished = true;
    }
    else if (city == "CASSINADE'PECCHI")
    {
        city = "C014";
        finished = true;
    }
    else if (city == "CASSINARIZZARDI")
    {
        city = "C020";
        finished = true;
    }
    else if (city == "CASSINAVALSASSINA")
    {
        city = "C024";
        finished = true;
    }
    else if (city == "CASSINASCO")
    {
        city = "C022";
        finished = true;
    }
    else if (city == "CASSINE")
    {
        city = "C027";
        finished = true;
    }
    else if (city == "CASSINELLE")
    {
        city = "C030";
        finished = true;
    }
    else if (city == "CASSINETTADILUGAGNANO")
    {
        city = "C033";
        finished = true;
    }
    else if (city == "CASSINO")
    {
        city = "C034";
        finished = true;
    }
    else if (city == "CASSOLA")
    {
        city = "C037";
        finished = true;
    }
    else if (city == "CASSOLNOVO")
    {
        city = "C038";
        finished = true;
    }
    else if (city == "CASTAGNARO")
    {
        city = "C041";
        finished = true;
    }
    else if (city == "CASTAGNETOCARDUCCI")
    {
        city = "C044";
        finished = true;
    }
    else if (city == "CASTAGNETOPO")
    {
        city = "C045";
        finished = true;
    }
    else if (city == "CASTAGNITO")
    {
        city = "C046";
        finished = true;
    }
    else if (city == "CASTAGNOLEDELLELANZE")
    {
        city = "C049";
        finished = true;
    }
    else if (city == "CASTAGNOLEMONFERRATO")
    {
        city = "C047";
        finished = true;
    }
    else if (city == "CASTAGNOLEPIEMONTE")
    {
        city = "C048";
        finished = true;
    }
    else if (city == "CASTANA")
    {
        city = "C050";
        finished = true;
    }
    else if (city == "CASTANOPRIMO")
    {
        city = "C052";
        finished = true;
    }
    else if (city == "CASTEGGIO")
    {
        city = "C053";
        finished = true;
    }
    else if (city == "CASTEGNATO")
    {
        city = "C055";
        finished = true;
    }
    else if (city == "CASTEGNERO")
    {
        city = "C056";
        finished = true;
    }
    else if (city == "CASTELBARONIA")
    {
        city = "C058";
        finished = true;
    }
    else if (city == "CASTELBOGLIONE")
    {
        city = "C064";
        finished = true;
    }
    else if (city == "CASTELBOLOGNESE")
    {
        city = "C065";
        finished = true;
    }
    else if (city == "CASTELCAMPAGNANO")
    {
        city = "B494";
        finished = true;
    }
    else if (city == "CASTELCASTAGNA")
    {
        city = "C040";
        finished = true;
    }
    else if (city == "CASTELCOLONNA")
    {
        city = "C071";
        finished = true;
    }
    else if (city == "CASTELCONDINO")
    {
        city = "C183";
        finished = true;
    }
    else if (city == "CASTELD'AIANO")
    {
        city = "C075";
        finished = true;
    }
    else if (city == "CASTELD'ARIO")
    {
        city = "C076";
        finished = true;
    }
    else if (city == "CASTELD'AZZANO")
    {
        city = "C078";
        finished = true;
    }
    else if (city == "CASTELDELGIUDICE")
    {
        city = "C082";
        finished = true;
    }
    else if (city == "CASTELDELMONTE")
    {
        city = "C083";
        finished = true;
    }
    else if (city == "CASTELDELPIANO")
    {
        city = "C085";
        finished = true;
    }
    else if (city == "CASTELDELRIO")
    {
        city = "C086";
        finished = true;
    }
    else if (city == "CASTELDICASIO")
    {
        city = "B969";
        finished = true;
    }
    else if (city == "CASTELDIIERI")
    {
        city = "C090";
        finished = true;
    }
    else if (city == "CASTELDIIUDICA")
    {
        city = "C091";
        finished = true;
    }
    else if (city == "CASTELDILAMA")
    {
        city = "C093";
        finished = true;
    }
    else if (city == "CASTELDILUCIO")
    {
        city = "C094";
        finished = true;
    }
    else if (city == "CASTELDISANGRO")
    {
        city = "C096";
        finished = true;
    }
    else if (city == "CASTELDISASSO")
    {
        city = "C097";
        finished = true;
    }
    else if (city == "CASTELDITORA")
    {
        city = "C098";
        finished = true;
    }
    else if (city == "CASTELFOCOGNANO")
    {
        city = "C102";
        finished = true;
    }
    else if (city == "CASTELFRENTANO")
    {
        city = "C114";
        finished = true;
    }
    else if (city == "CASTELGABBIANO")
    {
        city = "C115";
        finished = true;
    }
    else if (city == "CASTELGANDOLFO")
    {
        city = "C116";
        finished = true;
    }
    else if (city == "CASTELGIORGIO")
    {
        city = "C117";
        finished = true;
    }
    else if (city == "CASTELGOFFREDO")
    {
        city = "C118";
        finished = true;
    }
    else if (city == "CASTELGUELFODIBOLOGNA")
    {
        city = "C121";
        finished = true;
    }
    else if (city == "CASTELIVANO")
    {
        city = "M354";
        finished = true;
    }
    else if (city == "CASTELMADAMA")
    {
        city = "C203";
        finished = true;
    }
    else if (city == "CASTELMAGGIORE")
    {
        city = "C204";
        finished = true;
    }
    else if (city == "CASTELMELLA")
    {
        city = "C208";
        finished = true;
    }
    else if (city == "CASTELMORRONE")
    {
        city = "C211";
        finished = true;
    }
    else if (city == "CASTELRITALDI")
    {
        city = "C252";
        finished = true;
    }
    else if (city == "CASTELROCCHERO")
    {
        city = "C253";
        finished = true;
    }
    else if (city == "CASTELROZZONE")
    {
        city = "C255";
        finished = true;
    }
    else if (city == "CASTELSANGIORGIO")
    {
        city = "C259";
        finished = true;
    }
    else if (city == "CASTELSANGIOVANNI")
    {
        city = "C261";
        finished = true;
    }
    else if (city == "CASTELSANLORENZO")
    {
        city = "C262";
        finished = true;
    }
    else if (city == "CASTELSANNICCOLO'")
    {
        city = "C263";
        finished = true;
    }
    else if (city == "CASTELSANPIETROROMANO")
    {
        city = "C266";
        finished = true;
    }
    else if (city == "CASTELSANPIETROTERME")
    {
        city = "C265";
        finished = true;
    }
    else if (city == "CASTELSANVINCENZO")
    {
        city = "C270";
        finished = true;
    }
    else if (city == "CASTELSANT'ANGELO")
    {
        city = "C268";
        finished = true;
    }
    else if (city == "CASTELSANT'ELIA")
    {
        city = "C269";
        finished = true;
    }
    else if (city == "CASTELVISCARDO")
    {
        city = "C289";
        finished = true;
    }
    else if (city == "CASTELVITTORIO")
    {
        city = "C110";
        finished = true;
    }
    else if (city == "CASTELVOLTURNO")
    {
        city = "C291";
        finished = true;
    }
    else if (city == "CASTELBALDO")
    {
        city = "C057";
        finished = true;
    }
    else if (city == "CASTELBELFORTE")
    {
        city = "C059";
        finished = true;
    }
    else if (city == "CASTELBELLINO")
    {
        city = "C060";
        finished = true;
    }
    else if (city == "CASTELBELLOCIARDES.KASTELBELLTSCHARS.")
    {
        city = "C062";
        finished = true;
    }
    else if (city == "CASTELBIANCO")
    {
        city = "C063";
        finished = true;
    }
    else if (city == "CASTELBOTTACCIO")
    {
        city = "C066";
        finished = true;
    }
    else if (city == "CASTELBUONO")
    {
        city = "C067";
        finished = true;
    }
    else if (city == "CASTELCIVITA")
    {
        city = "C069";
        finished = true;
    }
    else if (city == "CASTELCOVATI")
    {
        city = "C072";
        finished = true;
    }
    else if (city == "CASTELCUCCO")
    {
        city = "C073";
        finished = true;
    }
    else if (city == "CASTELDACCIA")
    {
        city = "C074";
        finished = true;
    }
    else if (city == "CASTELDELCI")
    {
        city = "C080";
        finished = true;
    }
    else if (city == "CASTELDELFINO")
    {
        city = "C081";
        finished = true;
    }
    else if (city == "CASTELDIDONE")
    {
        city = "C089";
        finished = true;
    }
    else if (city == "CASTELFIDARDO")
    {
        city = "C100";
        finished = true;
    }
    else if (city == "CASTELFIORENTINO")
    {
        city = "C101";
        finished = true;
    }
    else if (city == "CASTELFONDO")
    {
        city = "C103";
        finished = true;
    }
    else if (city == "CASTELFORTE")
    {
        city = "C104";
        finished = true;
    }
    else if (city == "CASTELFRANCI")
    {
        city = "C105";
        finished = true;
    }
    else if (city == "CASTELFRANCODISOPRA")
    {
        city = "C112";
        finished = true;
    }
    else if (city == "CASTELFRANCODISOTTO")
    {
        city = "C113";
        finished = true;
    }
    else if (city == "CASTELFRANCOEMILIA")
    {
        city = "C107";
        finished = true;
    }
    else if (city == "CASTELFRANCOINMISCANO")
    {
        city = "C106";
        finished = true;
    }
    else if (city == "CASTELFRANCOPIANDISCO'")
    {
        city = "M322";
        finished = true;
    }
    else if (city == "CASTELFRANCOVENETO")
    {
        city = "C111";
        finished = true;
    }
    else if (city == "CASTELGERUNDO")
    {
        city = "M393";
        finished = true;
    }
    else if (city == "CASTELGOMBERTO")
    {
        city = "C119";
        finished = true;
    }
    else if (city == "CASTELGRANDE")
    {
        city = "C120";
        finished = true;
    }
    else if (city == "CASTELGUGLIELMO")
    {
        city = "C122";
        finished = true;
    }
    else if (city == "CASTELGUIDONE")
    {
        city = "C123";
        finished = true;
    }
    else if (city == "CASTELLABATE")
    {
        city = "C125";
        finished = true;
    }
    else if (city == "CASTELLAFIUME")
    {
        city = "C126";
        finished = true;
    }
    else if (city == "CASTELL'ALFERO")
    {
        city = "C127";
        finished = true;
    }
    else if (city == "CASTELLALTO")
    {
        city = "C128";
        finished = true;
    }
    else if (city == "CASTELLAMMAREDELGOLFO")
    {
        city = "C130";
        finished = true;
    }
    else if (city == "CASTELLAMMAREDISTABIA")
    {
        city = "C129";
        finished = true;
    }
    else if (city == "CASTELLAMONTE")
    {
        city = "C133";
        finished = true;
    }
    else if (city == "CASTELLANAGROTTE")
    {
        city = "C134";
        finished = true;
    }
    else if (city == "CASTELLANASICULA")
    {
        city = "C135";
        finished = true;
    }
    else if (city == "CASTELLANETA")
    {
        city = "C136";
        finished = true;
    }
    else if (city == "CASTELLANIACOPPI")
    {
        city = "C137";
        finished = true;
    }
    else if (city == "CASTELLANZA")
    {
        city = "C139";
        finished = true;
    }
    else if (city == "CASTELLAR")
    {
        city = "C140";
        finished = true;
    }
    else if (city == "CASTELLARGUIDOBONO")
    {
        city = "C142";
        finished = true;
    }
    else if (city == "CASTELLARANO")
    {
        city = "C141";
        finished = true;
    }
    else if (city == "CASTELLARO")
    {
        city = "C143";
        finished = true;
    }
    else if (city == "CASTELL'ARQUATO")
    {
        city = "C145";
        finished = true;
    }
    else if (city == "CASTELLAVAZZO")
    {
        city = "C146";
        finished = true;
    }
    else if (city == "CASTELL'AZZARA")
    {
        city = "C147";
        finished = true;
    }
    else if (city == "CASTELLAZZOBORMIDA")
    {
        city = "C148";
        finished = true;
    }
    else if (city == "CASTELLAZZONOVARESE")
    {
        city = "C149";
        finished = true;
    }
    else if (city == "CASTELLEONE")
    {
        city = "C153";
        finished = true;
    }
    else if (city == "CASTELLEONEDISUASA")
    {
        city = "C152";
        finished = true;
    }
    else if (city == "CASTELLERO")
    {
        city = "C154";
        finished = true;
    }
    else if (city == "CASTELLETTOCERVO")
    {
        city = "C155";
        finished = true;
    }
    else if (city == "CASTELLETTOD'ERRO")
    {
        city = "C156";
        finished = true;
    }
    else if (city == "CASTELLETTODIBRANDUZZO")
    {
        city = "C157";
        finished = true;
    }
    else if (city == "CASTELLETTOD'ORBA")
    {
        city = "C158";
        finished = true;
    }
    else if (city == "CASTELLETTOMERLI")
    {
        city = "C160";
        finished = true;
    }
    else if (city == "CASTELLETTOMOLINA")
    {
        city = "C161";
        finished = true;
    }
    else if (city == "CASTELLETTOMONFERRATO")
    {
        city = "C162";
        finished = true;
    }
    else if (city == "CASTELLETTOSOPRATICINO")
    {
        city = "C166";
        finished = true;
    }
    else if (city == "CASTELLETTOSTURA")
    {
        city = "C165";
        finished = true;
    }
    else if (city == "CASTELLETTOUZZONE")
    {
        city = "C167";
        finished = true;
    }
    else if (city == "CASTELLI")
    {
        city = "C169";
        finished = true;
    }
    else if (city == "CASTELLICALEPIO")
    {
        city = "C079";
        finished = true;
    }
    else if (city == "CASTELLINAINCHIANTI")
    {
        city = "C172";
        finished = true;
    }
    else if (city == "CASTELLINAMARITTIMA")
    {
        city = "C174";
        finished = true;
    }
    else if (city == "CASTELLINALDOD'ALBA")
    {
        city = "C173";
        finished = true;
    }
    else if (city == "CASTELLINODELBelse ifERNO")
    {
        city = "C175";
        finished = true;
    }
    else if (city == "CASTELLINOTANARO")
    {
        city = "C176";
        finished = true;
    }
    else if (city == "CASTELLIRI")
    {
        city = "C177";
        finished = true;
    }
    else if (city == "CASTELLOCABIAGLIO")
    {
        city = "B312";
        finished = true;
    }
    else if (city == "CASTELLOD'AGOGNA")
    {
        city = "C184";
        finished = true;
    }
    else if (city == "CASTELLOD'ARGILE")
    {
        city = "C185";
        finished = true;
    }
    else if (city == "CASTELLODELMATESE")
    {
        city = "C178";
        finished = true;
    }
    else if (city == "CASTELLODELL'ACQUA")
    {
        city = "C186";
        finished = true;
    }
    else if (city == "CASTELLODIANNONE")
    {
        city = "A300";
        finished = true;
    }
    else if (city == "CASTELLODIBRIANZA")
    {
        city = "C187";
        finished = true;
    }
    else if (city == "CASTELLODICISTERNA")
    {
        city = "C188";
        finished = true;
    }
    else if (city == "CASTELLODIGODEGO")
    {
        city = "C190";
        finished = true;
    }
    else if (city == "CASTELLODISERRAVALLE")
    {
        city = "C191";
        finished = true;
    }
    else if (city == "CASTELLOTESINO")
    {
        city = "C194";
        finished = true;
    }
    else if (city == "CASTELLO-MOLINADelse ifIEMME")
    {
        city = "C189";
        finished = true;
    }
    else if (city == "CASTELLUCCHIO")
    {
        city = "C195";
        finished = true;
    }
    else if (city == "CASTELLUCCIODEISAURI")
    {
        city = "C198";
        finished = true;
    }
    else if (city == "CASTELLUCCIOINFERIORE")
    {
        city = "C199";
        finished = true;
    }
    else if (city == "CASTELLUCCIOSUPERIORE")
    {
        city = "C201";
        finished = true;
    }
    else if (city == "CASTELLUCCIOVALMAGGIORE")
    {
        city = "C202";
        finished = true;
    }
    else if (city == "CASTELL'UMBERTO")
    {
        city = "C051";
        finished = true;
    }
    else if (city == "CASTELMAGNO")
    {
        city = "C205";
        finished = true;
    }
    else if (city == "CASTELMARTE")
    {
        city = "C206";
        finished = true;
    }
    else if (city == "CASTELMASSA")
    {
        city = "C207";
        finished = true;
    }
    else if (city == "CASTELMAURO")
    {
        city = "C197";
        finished = true;
    }
    else if (city == "CASTELMEZZANO")
    {
        city = "C209";
        finished = true;
    }
    else if (city == "CASTELMOLA")
    {
        city = "C210";
        finished = true;
    }
    else if (city == "CASTELNOVETTO")
    {
        city = "C213";
        finished = true;
    }
    else if (city == "CASTELNOVOBARIANO")
    {
        city = "C215";
        finished = true;
    }
    else if (city == "CASTELNOVODELFRIULI")
    {
        city = "C217";
        finished = true;
    }
    else if (city == "CASTELNOVODISOTTO")
    {
        city = "C218";
        finished = true;
    }
    else if (city == "CASTELNOVONE'MONTI")
    {
        city = "C219";
        finished = true;
    }
    else if (city == "CASTELNUOVO")
    {
        city = "C216";
        finished = true;
    }
    else if (city == "CASTELNUOVOBELBO")
    {
        city = "C226";
        finished = true;
    }
    else if (city == "CASTELNUOVOBERARDENGA")
    {
        city = "C227";
        finished = true;
    }
    else if (city == "CASTELNUOVOBOCCAD'ADDA")
    {
        city = "C228";
        finished = true;
    }
    else if (city == "CASTELNUOVOBORMIDA")
    {
        city = "C229";
        finished = true;
    }
    else if (city == "CASTELNUOVOBOZZENTE")
    {
        city = "C220";
        finished = true;
    }
    else if (city == "CASTELNUOVOCALCEA")
    {
        city = "C230";
        finished = true;
    }
    else if (city == "CASTELNUOVOCILENTO")
    {
        city = "C231";
        finished = true;
    }
    else if (city == "CASTELNUOVODELGARDA")
    {
        city = "C225";
        finished = true;
    }
    else if (city == "CASTELNUOVODELLADAUNIA")
    {
        city = "C222";
        finished = true;
    }
    else if (city == "CASTELNUOVODICEVA")
    {
        city = "C214";
        finished = true;
    }
    else if (city == "CASTELNUOVODICONZA")
    {
        city = "C235";
        finished = true;
    }
    else if (city == "CASTELNUOVODelse ifARFA")
    {
        city = "C224";
        finished = true;
    }
    else if (city == "CASTELNUOVODIGARFAGNANA")
    {
        city = "C236";
        finished = true;
    }
    else if (city == "CASTELNUOVODIPORTO")
    {
        city = "C237";
        finished = true;
    }
    else if (city == "CASTELNUOVODONBOSCO")
    {
        city = "C232";
        finished = true;
    }
    else if (city == "CASTELNUOVOMAGRA")
    {
        city = "C240";
        finished = true;
    }
    else if (city == "CASTELNUOVONIGRA")
    {
        city = "C241";
        finished = true;
    }
    else if (city == "CASTELNUOVOPARANO")
    {
        city = "C223";
        finished = true;
    }
    else if (city == "CASTELNUOVORANGONE")
    {
        city = "C242";
        finished = true;
    }
    else if (city == "CASTELNUOVOSCRIVIA")
    {
        city = "C243";
        finished = true;
    }
    else if (city == "CASTELNUOVOVALDICECINA")
    {
        city = "C244";
        finished = true;
    }
    else if (city == "CASTELPAGANO")
    {
        city = "C245";
        finished = true;
    }
    else if (city == "CASTELPETROSO")
    {
        city = "C246";
        finished = true;
    }
    else if (city == "CASTELPIZZUTO")
    {
        city = "C247";
        finished = true;
    }
    else if (city == "CASTELPLANIO")
    {
        city = "C248";
        finished = true;
    }
    else if (city == "CASTELPOTO")
    {
        city = "C250";
        finished = true;
    }
    else if (city == "CASTELRAIMONDO")
    {
        city = "C251";
        finished = true;
    }
    else if (city == "CASTELROTTO.KASTELRUTH.")
    {
        city = "C254";
        finished = true;
    }
    else if (city == "CASTELSANTANGELOSULNERA")
    {
        city = "C267";
        finished = true;
    }
    else if (city == "CASTELSARACENO")
    {
        city = "C271";
        finished = true;
    }
    else if (city == "CASTELSARDO")
    {
        city = "C272";
        finished = true;
    }
    else if (city == "CASTELSEPRIO")
    {
        city = "C273";
        finished = true;
    }
    else if (city == "CASTELSILANO")
    {
        city = "B968";
        finished = true;
    }
    else if (city == "CASTELSPINA")
    {
        city = "C274";
        finished = true;
    }
    else if (city == "CASTELTERMINI")
    {
        city = "C275";
        finished = true;
    }
    else if (city == "CASTELVECCANA")
    {
        city = "C181";
        finished = true;
    }
    else if (city == "CASTELVECCHIOCALVISIO")
    {
        city = "C278";
        finished = true;
    }
    else if (city == "CASTELVECCHIODIROCCABARBENA")
    {
        city = "C276";
        finished = true;
    }
    else if (city == "CASTELVECCHIOSUBEQUO")
    {
        city = "C279";
        finished = true;
    }
    else if (city == "CASTELVENERE")
    {
        city = "C280";
        finished = true;
    }
    else if (city == "CASTELVERDE")
    {
        city = "B129";
        finished = true;
    }
    else if (city == "CASTELVERRINO")
    {
        city = "C200";
        finished = true;
    }
    else if (city == "CASTELVETEREINVALFORTORE")
    {
        city = "C284";
        finished = true;
    }
    else if (city == "CASTELVETERESULCALORE")
    {
        city = "C283";
        finished = true;
    }
    else if (city == "CASTELVETRANO")
    {
        city = "C286";
        finished = true;
    }
    else if (city == "CASTELVETRODIMODENA")
    {
        city = "C287";
        finished = true;
    }
    else if (city == "CASTELVETROPIACENTINO")
    {
        city = "C288";
        finished = true;
    }
    else if (city == "CASTELVISCONTI")
    {
        city = "C290";
        finished = true;
    }
    else if (city == "CASTENASO")
    {
        city = "C292";
        finished = true;
    }
    else if (city == "CASTENEDOLO")
    {
        city = "C293";
        finished = true;
    }
    else if (city == "CASTIADAS")
    {
        city = "M288";
        finished = true;
    }
    else if (city == "CASTIGLIONFIBOCCHI")
    {
        city = "C318";
        finished = true;
    }
    else if (city == "CASTIGLIONFIORENTINO")
    {
        city = "C319";
        finished = true;
    }
    else if (city == "CASTIGLIONEACASAURIA")
    {
        city = "C308";
        finished = true;
    }
    else if (city == "CASTIGLIONECHIAVARESE")
    {
        city = "C302";
        finished = true;
    }
    else if (city == "CASTIGLIONECOSENTINO")
    {
        city = "C301";
        finished = true;
    }
    else if (city == "CASTIGLIONED'ADDA")
    {
        city = "C304";
        finished = true;
    }
    else if (city == "CASTIGLIONEDEIPEPOLI")
    {
        city = "C296";
        finished = true;
    }
    else if (city == "CASTIGLIONEDELGENOVESI")
    {
        city = "C306";
        finished = true;
    }
    else if (city == "CASTIGLIONEDELLAGO")
    {
        city = "C309";
        finished = true;
    }
    else if (city == "CASTIGLIONEDELLAPESCAIA")
    {
        city = "C310";
        finished = true;
    }
    else if (city == "CASTIGLIONEDELLESTIVIERE")
    {
        city = "C312";
        finished = true;
    }
    else if (city == "CASTIGLIONEDIGARFAGNANA")
    {
        city = "C303";
        finished = true;
    }
    else if (city == "CASTIGLIONEDISICILIA")
    {
        city = "C297";
        finished = true;
    }
    else if (city == "CASTIGLIONED'INTELVI")
    {
        city = "C299";
        finished = true;
    }
    else if (city == "CASTIGLIONED'ORCIA")
    {
        city = "C313";
        finished = true;
    }
    else if (city == "CASTIGLIONEFALLETTO")
    {
        city = "C314";
        finished = true;
    }
    else if (city == "CASTIGLIONEINTEVERINA")
    {
        city = "C315";
        finished = true;
    }
    else if (city == "CASTIGLIONEMESSERMARINO")
    {
        city = "C298";
        finished = true;
    }
    else if (city == "CASTIGLIONEMESSERRAIMONDO")
    {
        city = "C316";
        finished = true;
    }
    else if (city == "CASTIGLIONEOLONA")
    {
        city = "C300";
        finished = true;
    }
    else if (city == "CASTIGLIONETINELLA")
    {
        city = "C317";
        finished = true;
    }
    else if (city == "CASTIGLIONETORINESE")
    {
        city = "C307";
        finished = true;
    }
    else if (city == "CASTIGNANO")
    {
        city = "C321";
        finished = true;
    }
    else if (city == "CASTILENTI")
    {
        city = "C322";
        finished = true;
    }
    else if (city == "CASTINO")
    {
        city = "C323";
        finished = true;
    }
    else if (city == "CASTIONEANDEVENNO")
    {
        city = "C325";
        finished = true;
    }
    else if (city == "CASTIONEDELLAPRESOLANA")
    {
        city = "C324";
        finished = true;
    }
    else if (city == "CASTIONSDISTRADA")
    {
        city = "C327";
        finished = true;
    }
    else if (city == "CASTIRAGAVIDARDO")
    {
        city = "C329";
        finished = true;
    }
    else if (city == "CASTO")
    {
        city = "C330";
        finished = true;
    }
    else if (city == "CASTORANO")
    {
        city = "C331";
        finished = true;
    }
    else if (city == "CASTREZZATO")
    {
        city = "C332";
        finished = true;
    }
    else if (city == "CASTRIDILECCE")
    {
        city = "C334";
        finished = true;
    }
    else if (city == "CASTRIGNANODE'GRECI")
    {
        city = "C335";
        finished = true;
    }
    else if (city == "CASTRIGNANODELCAPO")
    {
        city = "C336";
        finished = true;
    }
    else if (city == "CASTRO")
    {
        city = "C337";
        finished = true;
    }
    else if (city == "CASTRO")
    {
        city = "M261";
        finished = true;
    }
    else if (city == "CASTRODEIVOLSCI")
    {
        city = "C338";
        finished = true;
    }
    else if (city == "CASTROCAROTERMEETERRADELSOLE")
    {
        city = "C339";
        finished = true;
    }
    else if (city == "CASTROCIELO")
    {
        city = "C340";
        finished = true;
    }
    else if (city == "CASTROFILIPPO")
    {
        city = "C341";
        finished = true;
    }
    else if (city == "CASTROLIBERO")
    {
        city = "C108";
        finished = true;
    }
    else if (city == "CASTRONNO")
    {
        city = "C343";
        finished = true;
    }
    else if (city == "CASTRONOVODISICILIA")
    {
        city = "C344";
        finished = true;
    }
    else if (city == "CASTRONUOVODISANT'ANDREA")
    {
        city = "C345";
        finished = true;
    }
    else if (city == "CASTROPIGNANO")
    {
        city = "C346";
        finished = true;
    }
    else if (city == "CASTROREALE")
    {
        city = "C347";
        finished = true;
    }
    else if (city == "CASTROREGIO")
    {
        city = "C348";
        finished = true;
    }
    else if (city == "CASTROVILLARI")
    {
        city = "C349";
        finished = true;
    }
    else if (city == "CATANIA")
    {
        city = "C351";
        finished = true;
    }
    else if (city == "CATANZARO")
    {
        city = "C352";
        finished = true;
    }
    else if (city == "CATENANUOVA")
    {
        city = "C353";
        finished = true;
    }
    else if (city == "CATIGNANO")
    {
        city = "C354";
        finished = true;
    }
    else if (city == "CATTOLICA")
    {
        city = "C357";
        finished = true;
    }
    else if (city == "CATTOLICAERACLEA")
    {
        city = "C356";
        finished = true;
    }
    else if (city == "CAULONIA")
    {
        city = "C285";
        finished = true;
    }
    else if (city == "CAUTANO")
    {
        city = "C359";
        finished = true;
    }
    else if (city == "CAVADE'TIRRENI")
    {
        city = "C361";
        finished = true;
    }
    else if (city == "CAVAMANARA")
    {
        city = "C360";
        finished = true;
    }
    else if (city == "CAVACURTA")
    {
        city = "C362";
        finished = true;
    }
    else if (city == "CAVAGLIA'")
    {
        city = "C363";
        finished = true;
    }
    else if (city == "CAVAGLIETTO")
    {
        city = "C364";
        finished = true;
    }
    else if (city == "CAVAGLIOD'AGOGNA")
    {
        city = "C365";
        finished = true;
    }
    else if (city == "CAVAGLIO-SPOCCIA")
    {
        city = "C367";
        finished = true;
    }
    else if (city == "CAVAGNOLO")
    {
        city = "C369";
        finished = true;
    }
    else if (city == "CAVAIONVERONESE")
    {
        city = "C370";
        finished = true;
    }
    else if (city == "CAVALESE")
    {
        city = "C372";
        finished = true;
    }
    else if (city == "CAVALLASCA")
    {
        city = "C374";
        finished = true;
    }
    else if (city == "CAVALLERLEONE")
    {
        city = "C375";
        finished = true;
    }
    else if (city == "CAVALLERMAGGIORE")
    {
        city = "C376";
        finished = true;
    }
    else if (city == "CAVALLINO")
    {
        city = "C377";
        finished = true;
    }
    else if (city == "CAVALLINO-TREPORTI")
    {
        city = "M308";
        finished = true;
    }
    else if (city == "CAVALLIRIO")
    {
        city = "C378";
        finished = true;
    }
    else if (city == "CAVARENO")
    {
        city = "C380";
        finished = true;
    }
    else if (city == "CAVARGNA")
    {
        city = "C381";
        finished = true;
    }
    else if (city == "CAVARIACONPREMEZZO")
    {
        city = "C382";
        finished = true;
    }
    else if (city == "CAVARZERE")
    {
        city = "C383";
        finished = true;
    }
    else if (city == "CAVASODELTOMBA")
    {
        city = "C384";
        finished = true;
    }
    else if (city == "CAVASSONUOVO")
    {
        city = "C385";
        finished = true;
    }
    else if (city == "CAVATORE")
    {
        city = "C387";
        finished = true;
    }
    else if (city == "CAVAZZOCARNICO")
    {
        city = "C389";
        finished = true;
    }
    else if (city == "CAVE")
    {
        city = "C390";
        finished = true;
    }
    else if (city == "CAVEDAGO")
    {
        city = "C392";
        finished = true;
    }
    else if (city == "CAVEDINE")
    {
        city = "C393";
        finished = true;
    }
    else if (city == "CAVENAGOD'ADDA")
    {
        city = "C394";
        finished = true;
    }
    else if (city == "CAVENAGODIBRIANZA")
    {
        city = "C395";
        finished = true;
    }
    else if (city == "CAVERNAGO")
    {
        city = "C396";
        finished = true;
    }
    else if (city == "CAVEZZO")
    {
        city = "C398";
        finished = true;
    }
    else if (city == "CAVIZZANA")
    {
        city = "C400";
        finished = true;
    }
    else if (city == "CAVOUR")
    {
        city = "C404";
        finished = true;
    }
    else if (city == "CAVRIAGO")
    {
        city = "C405";
        finished = true;
    }
    else if (city == "CAVRIANA")
    {
        city = "C406";
        finished = true;
    }
    else if (city == "CAVRIGLIA")
    {
        city = "C407";
        finished = true;
    }
    else if (city == "CAZZAGOBRABBIA")
    {
        city = "C409";
        finished = true;
    }
    else if (city == "CAZZAGOSANMARTINO")
    {
        city = "C408";
        finished = true;
    }
    else if (city == "CAZZANODITRAMIGNA")
    {
        city = "C412";
        finished = true;
    }
    else if (city == "CAZZANOSANT'ANDREA")
    {
        city = "C410";
        finished = true;
    }
    else if (city == "CECCANO")
    {
        city = "C413";
        finished = true;
    }
    else if (city == "CECIMA")
    {
        city = "C414";
        finished = true;
    }
    else if (city == "CECINA")
    {
        city = "C415";
        finished = true;
    }
    else if (city == "CEDEGOLO")
    {
        city = "C417";
        finished = true;
    }
    else if (city == "CEDRASCO")
    {
        city = "C418";
        finished = true;
    }
    else if (city == "CEFALA'DIANA")
    {
        city = "C420";
        finished = true;
    }
    else if (city == "CEFALU'")
    {
        city = "C421";
        finished = true;
    }
    else if (city == "CEGGIA")
    {
        city = "C422";
        finished = true;
    }
    else if (city == "CEGLIEMESSAPICA")
    {
        city = "C424";
        finished = true;
    }
    else if (city == "CELANO")
    {
        city = "C426";
        finished = true;
    }
    else if (city == "CELENZASULTRIGNO")
    {
        city = "C428";
        finished = true;
    }
    else if (city == "CELENZAVALFORTORE")
    {
        city = "C429";
        finished = true;
    }
    else if (city == "CELICO")
    {
        city = "C430";
        finished = true;
    }
    else if (city == "CELLADATI")
    {
        city = "C435";
        finished = true;
    }
    else if (city == "CELLAMONTE")
    {
        city = "C432";
        finished = true;
    }
    else if (city == "CELLAMARE")
    {
        city = "C436";
        finished = true;
    }
    else if (city == "CELLARA")
    {
        city = "C437";
        finished = true;
    }
    else if (city == "CELLARENGO")
    {
        city = "C438";
        finished = true;
    }
    else if (city == "CELLATICA")
    {
        city = "C439";
        finished = true;
    }
    else if (city == "CELLEDIBULGHERIA")
    {
        city = "C444";
        finished = true;
    }
    else if (city == "CELLEDIMACRA")
    {
        city = "C441";
        finished = true;
    }
    else if (city == "CELLEDISANVITO")
    {
        city = "C442";
        finished = true;
    }
    else if (city == "CELLEENOMONDO")
    {
        city = "C440";
        finished = true;
    }
    else if (city == "CELLELIGURE")
    {
        city = "C443";
        finished = true;
    }
    else if (city == "CELLENO")
    {
        city = "C446";
        finished = true;
    }
    else if (city == "CELLERE")
    {
        city = "C447";
        finished = true;
    }
    else if (city == "CELLINOATTANASIO")
    {
        city = "C449";
        finished = true;
    }
    else if (city == "CELLINOSANMARCO")
    {
        city = "C448";
        finished = true;
    }
    else if (city == "CELLIO")
    {
        city = "C450";
        finished = true;
    }
    else if (city == "CELLIOCONBREIA")
    {
        city = "M398";
        finished = true;
    }
    else if (city == "CELLOLE")
    {
        city = "M262";
        finished = true;
    }
    else if (city == "CEMBRA")
    {
        city = "C452";
        finished = true;
    }
    else if (city == "CEMBRALISIGNAGO")
    {
        city = "M355";
        finished = true;
    }
    else if (city == "CENADI")
    {
        city = "C453";
        finished = true;
    }
    else if (city == "CENATESOPRA")
    {
        city = "C456";
        finished = true;
    }
    else if (city == "CENATESOTTO")
    {
        city = "C457";
        finished = true;
    }
    else if (city == "CENCENIGHEAGORDINO")
    {
        city = "C458";
        finished = true;
    }
    else if (city == "CENE")
    {
        city = "C459";
        finished = true;
    }
    else if (city == "CENESELLI")
    {
        city = "C461";
        finished = true;
    }
    else if (city == "CENGIO")
    {
        city = "C463";
        finished = true;
    }
    else if (city == "CENTASANNICOLO'")
    {
        city = "C467";
        finished = true;
    }
    else if (city == "CENTALLO")
    {
        city = "C466";
        finished = true;
    }
    else if (city == "CENTO")
    {
        city = "C469";
        finished = true;
    }
    else if (city == "CENTOLA")
    {
        city = "C470";
        finished = true;
    }
    else if (city == "CENTRACHE")
    {
        city = "C472";
        finished = true;
    }
    else if (city == "CENTROVALLEINTELVI")
    {
        city = "M394";
        finished = true;
    }
    else if (city == "CENTURIPE")
    {
        city = "C471";
        finished = true;
    }
    else if (city == "CEPAGATTI")
    {
        city = "C474";
        finished = true;
    }
    else if (city == "CEPPALONI")
    {
        city = "C476";
        finished = true;
    }
    else if (city == "CEPPOMORELLI")
    {
        city = "C478";
        finished = true;
    }
    else if (city == "CEPRANO")
    {
        city = "C479";
        finished = true;
    }
    else if (city == "CERAMI")
    {
        city = "C480";
        finished = true;
    }
    else if (city == "CERANESI")
    {
        city = "C481";
        finished = true;
    }
    else if (city == "CERANO")
    {
        city = "C483";
        finished = true;
    }
    else if (city == "CERANOD'INTELVI")
    {
        city = "C482";
        finished = true;
    }
    else if (city == "CERANOVA")
    {
        city = "C484";
        finished = true;
    }
    else if (city == "CERASO")
    {
        city = "C485";
        finished = true;
    }
    else if (city == "CERCEMAGGIORE")
    {
        city = "C486";
        finished = true;
    }
    else if (city == "CERCENASCO")
    {
        city = "C487";
        finished = true;
    }
    else if (city == "CERCEPICCOLA")
    {
        city = "C488";
        finished = true;
    }
    else if (city == "CERCHIARADICALABRIA")
    {
        city = "C489";
        finished = true;
    }
    else if (city == "CERCHIO")
    {
        city = "C492";
        finished = true;
    }
    else if (city == "CERCINO")
    {
        city = "C493";
        finished = true;
    }
    else if (city == "CERCIVENTO")
    {
        city = "C494";
        finished = true;
    }
    else if (city == "CERCOLA")
    {
        city = "C495";
        finished = true;
    }
    else if (city == "CERDA")
    {
        city = "C496";
        finished = true;
    }
    else if (city == "CEREA")
    {
        city = "C498";
        finished = true;
    }
    else if (city == "CEREGNANO")
    {
        city = "C500";
        finished = true;
    }
    else if (city == "CERENZIA")
    {
        city = "C501";
        finished = true;
    }
    else if (city == "CERES")
    {
        city = "C497";
        finished = true;
    }
    else if (city == "CERESARA")
    {
        city = "C502";
        finished = true;
    }
    else if (city == "CERESETO")
    {
        city = "C503";
        finished = true;
    }
    else if (city == "CERESOLEALBA")
    {
        city = "C504";
        finished = true;
    }
    else if (city == "CERESOLEREALE")
    {
        city = "C505";
        finished = true;
    }
    else if (city == "CERETE")
    {
        city = "C506";
        finished = true;
    }
    else if (city == "CERETTOLOMELLINA")
    {
        city = "C508";
        finished = true;
    }
    else if (city == "CERGNAGO")
    {
        city = "C509";
        finished = true;
    }
    else if (city == "CERIALE")
    {
        city = "C510";
        finished = true;
    }
    else if (city == "CERIANA")
    {
        city = "C511";
        finished = true;
    }
    else if (city == "CERIANOLAGHETTO")
    {
        city = "C512";
        finished = true;
    }
    else if (city == "CERIGNALE")
    {
        city = "C513";
        finished = true;
    }
    else if (city == "CERIGNOLA")
    {
        city = "C514";
        finished = true;
    }
    else if (city == "CERISANO")
    {
        city = "C515";
        finished = true;
    }
    else if (city == "CERMENATE")
    {
        city = "C516";
        finished = true;
    }
    else if (city == "CERMES.TSCHERMS.")
    {
        city = "A022";
        finished = true;
    }
    else if (city == "CERMIGNANO")
    {
        city = "C517";
        finished = true;
    }
    else if (city == "CERNOBBIO")
    {
        city = "C520";
        finished = true;
    }
    else if (city == "CERNUSCOLOMBARDONE")
    {
        city = "C521";
        finished = true;
    }
    else if (city == "CERNUSCOSULNAVIGLIO")
    {
        city = "C523";
        finished = true;
    }
    else if (city == "CERRETOCASTELLO")
    {
        city = "C526";
        finished = true;
    }
    else if (city == "CERRETOD'ASTI")
    {
        city = "C528";
        finished = true;
    }
    else if (city == "CERRETOD'ESI")
    {
        city = "C524";
        finished = true;
    }
    else if (city == "CERRETODISPOLETO")
    {
        city = "C527";
        finished = true;
    }
    else if (city == "CERRETOGRUE")
    {
        city = "C507";
        finished = true;
    }
    else if (city == "CERRETOGUIDI")
    {
        city = "C529";
        finished = true;
    }
    else if (city == "CERRETOLAZIALE")
    {
        city = "C518";
        finished = true;
    }
    else if (city == "CERRETOSANNITA")
    {
        city = "C525";
        finished = true;
    }
    else if (city == "CERRETTOLANGHE")
    {
        city = "C530";
        finished = true;
    }
    else if (city == "CERRINAMONFERRATO")
    {
        city = "C531";
        finished = true;
    }
    else if (city == "CERRIONE")
    {
        city = "C532";
        finished = true;
    }
    else if (city == "CERROALLAMBRO")
    {
        city = "C536";
        finished = true;
    }
    else if (city == "CERROALVOLTURNO")
    {
        city = "C534";
        finished = true;
    }
    else if (city == "CERROMAGGIORE")
    {
        city = "C537";
        finished = true;
    }
    else if (city == "CERROTANARO")
    {
        city = "C533";
        finished = true;
    }
    else if (city == "CERROVERONESE")
    {
        city = "C538";
        finished = true;
    }
    else if (city == "CERSOSIMO")
    {
        city = "C539";
        finished = true;
    }
    else if (city == "CERTALDO")
    {
        city = "C540";
        finished = true;
    }
    else if (city == "CERTOSADIPAVIA")
    {
        city = "C541";
        finished = true;
    }
    else if (city == "CERVA")
    {
        city = "C542";
        finished = true;
    }
    else if (city == "CERVARADIROMA")
    {
        city = "C543";
        finished = true;
    }
    else if (city == "CERVARESESANTACROCE")
    {
        city = "C544";
        finished = true;
    }
    else if (city == "CERVARO")
    {
        city = "C545";
        finished = true;
    }
    else if (city == "CERVASCA")
    {
        city = "C547";
        finished = true;
    }
    else if (city == "CERVATTO")
    {
        city = "C548";
        finished = true;
    }
    else if (city == "CERVENO")
    {
        city = "C549";
        finished = true;
    }
    else if (city == "CERVERE")
    {
        city = "C550";
        finished = true;
    }
    else if (city == "CERVESINA")
    {
        city = "C551";
        finished = true;
    }
    else if (city == "CERVETERI")
    {
        city = "C552";
        finished = true;
    }
    else if (city == "CERVIA")
    {
        city = "C553";
        finished = true;
    }
    else if (city == "CERVICATI")
    {
        city = "C554";
        finished = true;
    }
    else if (city == "CERVIGNANOD'ADDA")
    {
        city = "C555";
        finished = true;
    }
    else if (city == "CERVIGNANODELFRIULI")
    {
        city = "C556";
        finished = true;
    }
    else if (city == "CERVINARA")
    {
        city = "C557";
        finished = true;
    }
    else if (city == "CERVINO")
    {
        city = "C558";
        finished = true;
    }
    else if (city == "CERVO")
    {
        city = "C559";
        finished = true;
    }
    else if (city == "CERZETO")
    {
        city = "C560";
        finished = true;
    }
    else if (city == "CESA")
    {
        city = "C561";
        finished = true;
    }
    else if (city == "CESANABRIANZA")
    {
        city = "C563";
        finished = true;
    }
    else if (city == "CESANATORINESE")
    {
        city = "C564";
        finished = true;
    }
    else if (city == "CESANOBOSCONE")
    {
        city = "C565";
        finished = true;
    }
    else if (city == "CESANOMADERNO")
    {
        city = "C566";
        finished = true;
    }
    else if (city == "CESARA")
    {
        city = "C567";
        finished = true;
    }
    else if (city == "CESARO'")
    {
        city = "C568";
        finished = true;
    }
    else if (city == "CESATE")
    {
        city = "C569";
        finished = true;
    }
    else if (city == "CESENA")
    {
        city = "C573";
        finished = true;
    }
    else if (city == "CESENATICO")
    {
        city = "C574";
        finished = true;
    }
    else if (city == "CESINALI")
    {
        city = "C576";
        finished = true;
    }
    else if (city == "CESIO")
    {
        city = "C578";
        finished = true;
    }
    else if (city == "CESIOMAGGIORE")
    {
        city = "C577";
        finished = true;
    }
    else if (city == "CESSALTO")
    {
        city = "C580";
        finished = true;
    }
    else if (city == "CESSANITI")
    {
        city = "C581";
        finished = true;
    }
    else if (city == "CESSAPALOMBO")
    {
        city = "C582";
        finished = true;
    }
    else if (city == "CESSOLE")
    {
        city = "C583";
        finished = true;
    }
    else if (city == "CETARA")
    {
        city = "C584";
        finished = true;
    }
    else if (city == "CETO")
    {
        city = "C585";
        finished = true;
    }
    else if (city == "CETONA")
    {
        city = "C587";
        finished = true;
    }
    else if (city == "CETRARO")
    {
        city = "C588";
        finished = true;
    }
    else if (city == "CEVA")
    {
        city = "C589";
        finished = true;
    }
    else if (city == "CEVO")
    {
        city = "C591";
        finished = true;
    }
    else if (city == "CHALLAND-SAINT-ANSELME")
    {
        city = "C593";
        finished = true;
    }
    else if (city == "CHALLAND-SAINT-VICTOR")
    {
        city = "C594";
        finished = true;
    }
    else if (city == "CHAMBAVE")
    {
        city = "C595";
        finished = true;
    }
    else if (city == "CHAMOIS")
    {
        city = "B491";
        finished = true;
    }
    else if (city == "CHAMPDEPRAZ")
    {
        city = "C596";
        finished = true;
    }
    else if (city == "CHAMPORCHER")
    {
        city = "B540";
        finished = true;
    }
    else if (city == "CHARVENSOD")
    {
        city = "C598";
        finished = true;
    }
    else if (city == "CHATILLON")
    {
        city = "C294";
        finished = true;
    }
    else if (city == "CHERASCO")
    {
        city = "C599";
        finished = true;
    }
    else if (city == "CHEREMULE")
    {
        city = "C600";
        finished = true;
    }
    else if (city == "CHIALAMBERTO")
    {
        city = "C604";
        finished = true;
    }
    else if (city == "CHIAMPO")
    {
        city = "C605";
        finished = true;
    }
    else if (city == "CHIANCHE")
    {
        city = "C606";
        finished = true;
    }
    else if (city == "CHIANCIANOTERME")
    {
        city = "C608";
        finished = true;
    }
    else if (city == "CHIANNI")
    {
        city = "C609";
        finished = true;
    }
    else if (city == "CHIANOCCO")
    {
        city = "C610";
        finished = true;
    }
    else if (city == "CHIARAMONTEGULFI")
    {
        city = "C612";
        finished = true;
    }
    else if (city == "CHIARAMONTI")
    {
        city = "C613";
        finished = true;
    }
    else if (city == "CHIARANO")
    {
        city = "C614";
        finished = true;
    }
    else if (city == "CHIARAVALLE")
    {
        city = "C615";
        finished = true;
    }
    else if (city == "CHIARAVALLECENTRALE")
    {
        city = "C616";
        finished = true;
    }
    else if (city == "CHIARI")
    {
        city = "C618";
        finished = true;
    }
    else if (city == "CHIAROMONTE")
    {
        city = "C619";
        finished = true;
    }
    else if (city == "CHIAUCI")
    {
        city = "C620";
        finished = true;
    }
    else if (city == "CHIAVARI")
    {
        city = "C621";
        finished = true;
    }
    else if (city == "CHIAVENNA")
    {
        city = "C623";
        finished = true;
    }
    else if (city == "CHIAVERANO")
    {
        city = "C624";
        finished = true;
    }
    else if (city == "CHIENES.KIENS.")
    {
        city = "C625";
        finished = true;
    }
    else if (city == "CHIERI")
    {
        city = "C627";
        finished = true;
    }
    else if (city == "CHIESD'ALPAGO")
    {
        city = "C630";
        finished = true;
    }
    else if (city == "CHIESAINVALMALENCO")
    {
        city = "C628";
        finished = true;
    }
    else if (city == "CHIESANUOVA")
    {
        city = "C629";
        finished = true;
    }
    else if (city == "CHIESINAUZZANESE")
    {
        city = "C631";
        finished = true;
    }
    else if (city == "CHIETI")
    {
        city = "C632";
        finished = true;
    }
    else if (city == "CHIEUTI")
    {
        city = "C633";
        finished = true;
    }
    else if (city == "CHIEVE")
    {
        city = "C634";
        finished = true;
    }
    else if (city == "CHIGNOLOD'ISOLA")
    {
        city = "C635";
        finished = true;
    }
    else if (city == "CHIGNOLOPO")
    {
        city = "C637";
        finished = true;
    }
    else if (city == "CHIOGGIA")
    {
        city = "C638";
        finished = true;
    }
    else if (city == "CHIOMONTE")
    {
        city = "C639";
        finished = true;
    }
    else if (city == "CHIONS")
    {
        city = "C640";
        finished = true;
    }
    else if (city == "CHIOPRISVISCONE")
    {
        city = "C641";
        finished = true;
    }
    else if (city == "CHITIGNANO")
    {
        city = "C648";
        finished = true;
    }
    else if (city == "CHIUDUNO")
    {
        city = "C649";
        finished = true;
    }
    else if (city == "CHIUPPANO")
    {
        city = "C650";
        finished = true;
    }
    else if (city == "CHIURO")
    {
        city = "C651";
        finished = true;
    }
    else if (city == "CHIUSADIPESIO")
    {
        city = "C653";
        finished = true;
    }
    else if (city == "CHIUSADISANMICHELE")
    {
        city = "C655";
        finished = true;
    }
    else if (city == "CHIUSA.KLAUSEN.")
    {
        city = "C652";
        finished = true;
    }
    else if (city == "CHIUSASCLAFANI")
    {
        city = "C654";
        finished = true;
    }
    else if (city == "CHIUSAFORTE")
    {
        city = "C656";
        finished = true;
    }
    else if (city == "CHIUSANICO")
    {
        city = "C657";
        finished = true;
    }
    else if (city == "CHIUSANOD'ASTI")
    {
        city = "C658";
        finished = true;
    }
    else if (city == "CHIUSANODISANDOMENICO")
    {
        city = "C659";
        finished = true;
    }
    else if (city == "CHIUSAVECCHIA")
    {
        city = "C660";
        finished = true;
    }
    else if (city == "CHIUSDINO")
    {
        city = "C661";
        finished = true;
    }
    else if (city == "CHIUSI")
    {
        city = "C662";
        finished = true;
    }
    else if (city == "CHIUSIDELLAVERNA")
    {
        city = "C663";
        finished = true;
    }
    else if (city == "CHIVASSO")
    {
        city = "C665";
        finished = true;
    }
    else if (city == "CIAMPINO")
    {
        city = "M272";
        finished = true;
    }
    else if (city == "CIANCIANA")
    {
        city = "C668";
        finished = true;
    }
    else if (city == "CIBIANADICADORE")
    {
        city = "C672";
        finished = true;
    }
    else if (city == "CICAGNA")
    {
        city = "C673";
        finished = true;
    }
    else if (city == "CICALA")
    {
        city = "C674";
        finished = true;
    }
    else if (city == "CICCIANO")
    {
        city = "C675";
        finished = true;
    }
    else if (city == "CICERALE")
    {
        city = "C676";
        finished = true;
    }
    else if (city == "CICILIANO")
    {
        city = "C677";
        finished = true;
    }
    else if (city == "CICOGNOLO")
    {
        city = "C678";
        finished = true;
    }
    else if (city == "CICONIO")
    {
        city = "C679";
        finished = true;
    }
    else if (city == "CIGLIANO")
    {
        city = "C680";
        finished = true;
    }
    else if (city == "CIGLIE'")
    {
        city = "C681";
        finished = true;
    }
    else if (city == "CIGOGNOLA")
    {
        city = "C684";
        finished = true;
    }
    else if (city == "CIGOLE")
    {
        city = "C685";
        finished = true;
    }
    else if (city == "CILAVEGNA")
    {
        city = "C686";
        finished = true;
    }
    else if (city == "CIMADOLMO")
    {
        city = "C689";
        finished = true;
    }
    else if (city == "CIMBERGO")
    {
        city = "C691";
        finished = true;
    }
    else if (city == "CIMEGO")
    {
        city = "C694";
        finished = true;
    }
    else if (city == "CIMINA'")
    {
        city = "C695";
        finished = true;
    }
    else if (city == "CIMINNA")
    {
        city = "C696";
        finished = true;
    }
    else if (city == "CIMITILE")
    {
        city = "C697";
        finished = true;
    }
    else if (city == "CIMOLAIS")
    {
        city = "C699";
        finished = true;
    }
    else if (city == "CIMONE")
    {
        city = "C700";
        finished = true;
    }
    else if (city == "CINAGLIO")
    {
        city = "C701";
        finished = true;
    }
    else if (city == "CINETOROMANO")
    {
        city = "C702";
        finished = true;
    }
    else if (city == "CINGIADE'BOTTI")
    {
        city = "C703";
        finished = true;
    }
    else if (city == "CINGOLI")
    {
        city = "C704";
        finished = true;
    }
    else if (city == "CINIGIANO")
    {
        city = "C705";
        finished = true;
    }
    else if (city == "CINISELLOBALSAMO")
    {
        city = "C707";
        finished = true;
    }
    else if (city == "CINISI")
    {
        city = "C708";
        finished = true;
    }
    else if (city == "CINO")
    {
        city = "C709";
        finished = true;
    }
    else if (city == "CINQUEFRONDI")
    {
        city = "C710";
        finished = true;
    }
    else if (city == "CINTANO")
    {
        city = "C711";
        finished = true;
    }
    else if (city == "CINTETESINO")
    {
        city = "C712";
        finished = true;
    }
    else if (city == "CINTOCAOMAGGIORE")
    {
        city = "C714";
        finished = true;
    }
    else if (city == "CINTOEUGANEO")
    {
        city = "C713";
        finished = true;
    }
    else if (city == "CINZANO")
    {
        city = "C715";
        finished = true;
    }
    else if (city == "CIORLANO")
    {
        city = "C716";
        finished = true;
    }
    else if (city == "CIPRESSA")
    {
        city = "C718";
        finished = true;
    }
    else if (city == "CIRCELLO")
    {
        city = "C719";
        finished = true;
    }
    else if (city == "CIRIE'")
    {
        city = "C722";
        finished = true;
    }
    else if (city == "CIRIGLIANO")
    {
        city = "C723";
        finished = true;
    }
    else if (city == "CIRIMIDO")
    {
        city = "C724";
        finished = true;
    }
    else if (city == "CIRO'")
    {
        city = "C725";
        finished = true;
    }
    else if (city == "CIRO'MARINA")
    {
        city = "C726";
        finished = true;
    }
    else if (city == "CIS")
    {
        city = "C727";
        finished = true;
    }
    else if (city == "CISANOBERGAMASCO")
    {
        city = "C728";
        finished = true;
    }
    else if (city == "CISANOSULNEVA")
    {
        city = "C729";
        finished = true;
    }
    else if (city == "CISERANO")
    {
        city = "C730";
        finished = true;
    }
    else if (city == "CISLAGO")
    {
        city = "C732";
        finished = true;
    }
    else if (city == "CISLIANO")
    {
        city = "C733";
        finished = true;
    }
    else if (city == "CISMONDELGRAPPA")
    {
        city = "C734";
        finished = true;
    }
    else if (city == "CISONDIVALMARINO")
    {
        city = "C735";
        finished = true;
    }
    else if (city == "CISSONE")
    {
        city = "C738";
        finished = true;
    }
    else if (city == "CISTERNAD'ASTI")
    {
        city = "C739";
        finished = true;
    }
    else if (city == "CISTERNADILATINA")
    {
        city = "C740";
        finished = true;
    }
    else if (city == "CISTERNINO")
    {
        city = "C741";
        finished = true;
    }
    else if (city == "CITERNA")
    {
        city = "C742";
        finished = true;
    }
    else if (city == "CITTA'DELLAPIEVE")
    {
        city = "C744";
        finished = true;
    }
    else if (city == "CITTA'DICASTELLO")
    {
        city = "C745";
        finished = true;
    }
    else if (city == "CITTA'SANT'ANGELO")
    {
        city = "C750";
        finished = true;
    }
    else if (city == "CITTADELLA")
    {
        city = "C743";
        finished = true;
    }
    else if (city == "CITTADUCALE")
    {
        city = "C746";
        finished = true;
    }
    else if (city == "CITTANOVA")
    {
        city = "C747";
        finished = true;
    }
    else if (city == "CITTAREALE")
    {
        city = "C749";
        finished = true;
    }
    else if (city == "CITTIGLIO")
    {
        city = "C751";
        finished = true;
    }
    else if (city == "CIVATE")
    {
        city = "C752";
        finished = true;
    }
    else if (city == "CIVENNA")
    {
        city = "C754";
        finished = true;
    }
    else if (city == "CIVEZZA")
    {
        city = "C755";
        finished = true;
    }
    else if (city == "CIVEZZANO")
    {
        city = "C756";
        finished = true;
    }
    else if (city == "CIVIASCO")
    {
        city = "C757";
        finished = true;
    }
    else if (city == "CIVIDALEDELFRIULI")
    {
        city = "C758";
        finished = true;
    }
    else if (city == "CIVIDATEALPIANO")
    {
        city = "C759";
        finished = true;
    }
    else if (city == "CIVIDATECAMUNO")
    {
        city = "C760";
        finished = true;
    }
    else if (city == "CIVITA")
    {
        city = "C763";
        finished = true;
    }
    else if (city == "CIVITACASTELLANA")
    {
        city = "C765";
        finished = true;
    }
    else if (city == "CIVITAD'ANTINO")
    {
        city = "C766";
        finished = true;
    }
    else if (city == "CIVITACAMPOMARANO")
    {
        city = "C764";
        finished = true;
    }
    else if (city == "CIVITALUPARELLA")
    {
        city = "C768";
        finished = true;
    }
    else if (city == "CIVITANOVADELSANNIO")
    {
        city = "C769";
        finished = true;
    }
    else if (city == "CIVITANOVAMARCHE")
    {
        city = "C770";
        finished = true;
    }
    else if (city == "CIVITAQUANA")
    {
        city = "C771";
        finished = true;
    }
    else if (city == "CIVITAVECCHIA")
    {
        city = "C773";
        finished = true;
    }
    else if (city == "CIVITELLAALFEDENA")
    {
        city = "C778";
        finished = true;
    }
    else if (city == "CIVITELLACASANOVA")
    {
        city = "C779";
        finished = true;
    }
    else if (city == "CIVITELLAD'AGLIANO")
    {
        city = "C780";
        finished = true;
    }
    else if (city == "CIVITELLADELTRONTO")
    {
        city = "C781";
        finished = true;
    }
    else if (city == "CIVITELLADIROMAGNA")
    {
        city = "C777";
        finished = true;
    }
    else if (city == "CIVITELLAINVALDICHIANA")
    {
        city = "C774";
        finished = true;
    }
    else if (city == "CIVITELLAMESSERRAIMONDO")
    {
        city = "C776";
        finished = true;
    }
    else if (city == "CIVITELLAPAGANICO")
    {
        city = "C782";
        finished = true;
    }
    else if (city == "CIVITELLAROVETO")
    {
        city = "C783";
        finished = true;
    }
    else if (city == "CIVITELLASANPAOLO")
    {
        city = "C784";
        finished = true;
    }
    else if (city == "CIVO")
    {
        city = "C785";
        finished = true;
    }
    else if (city == "CLAINOCONOSTENO")
    {
        city = "C787";
        finished = true;
    }
    else if (city == "CLAUT")
    {
        city = "C790";
        finished = true;
    }
    else if (city == "CLAUZETTO")
    {
        city = "C791";
        finished = true;
    }
    else if (city == "CLAVESANA")
    {
        city = "C792";
        finished = true;
    }
    else if (city == "CLAVIERE")
    {
        city = "C793";
        finished = true;
    }
    else if (city == "CLES")
    {
        city = "C794";
        finished = true;
    }
    else if (city == "CLETO")
    {
        city = "C795";
        finished = true;
    }
    else if (city == "CLIVIO")
    {
        city = "C796";
        finished = true;
    }
    else if (city == "CLOZ")
    {
        city = "C797";
        finished = true;
    }
    else if (city == "CLUSONE")
    {
        city = "C800";
        finished = true;
    }
    else if (city == "COASSOLOTORINESE")
    {
        city = "C801";
        finished = true;
    }
    else if (city == "COAZZE")
    {
        city = "C803";
        finished = true;
    }
    else if (city == "COAZZOLO")
    {
        city = "C804";
        finished = true;
    }
    else if (city == "COCCAGLIO")
    {
        city = "C806";
        finished = true;
    }
    else if (city == "COCCONATO")
    {
        city = "C807";
        finished = true;
    }
    else if (city == "COCQUIO-TREVISAGO")
    {
        city = "C810";
        finished = true;
    }
    else if (city == "COCULLO")
    {
        city = "C811";
        finished = true;
    }
    else if (city == "CODEVIGO")
    {
        city = "C812";
        finished = true;
    }
    else if (city == "CODEVILLA")
    {
        city = "C813";
        finished = true;
    }
    else if (city == "CODIGORO")
    {
        city = "C814";
        finished = true;
    }
    else if (city == "CODOGNE'")
    {
        city = "C815";
        finished = true;
    }
    else if (city == "CODOGNO")
    {
        city = "C816";
        finished = true;
    }
    else if (city == "CODROIPO")
    {
        city = "C817";
        finished = true;
    }
    else if (city == "CODRONGIANOS")
    {
        city = "C818";
        finished = true;
    }
    else if (city == "COGGIOLA")
    {
        city = "C819";
        finished = true;
    }
    else if (city == "COGLIATE")
    {
        city = "C820";
        finished = true;
    }
    else if (city == "COGNE")
    {
        city = "C821";
        finished = true;
    }
    else if (city == "COGOLETO")
    {
        city = "C823";
        finished = true;
    }
    else if (city == "COGOLLODELCENGIO")
    {
        city = "C824";
        finished = true;
    }
    else if (city == "COGORNO")
    {
        city = "C826";
        finished = true;
    }
    else if (city == "COLAZZA")
    {
        city = "C829";
        finished = true;
    }
    else if (city == "COLBORDOLO")
    {
        city = "C830";
        finished = true;
    }
    else if (city == "COLCERESA")
    {
        city = "M426";
        finished = true;
    }
    else if (city == "COLERE")
    {
        city = "C835";
        finished = true;
    }
    else if (city == "COLFELICE")
    {
        city = "C836";
        finished = true;
    }
    else if (city == "COLI")
    {
        city = "C838";
        finished = true;
    }
    else if (city == "COLICO")
    {
        city = "C839";
        finished = true;
    }
    else if (city == "COLLAGNA")
    {
        city = "C840";
        finished = true;
    }
    else if (city == "COLLALTOSABINO")
    {
        city = "C841";
        finished = true;
    }
    else if (city == "COLLARMELE")
    {
        city = "C844";
        finished = true;
    }
    else if (city == "COLLAZZONE")
    {
        city = "C845";
        finished = true;
    }
    else if (city == "COLLEBRIANZA")
    {
        city = "C851";
        finished = true;
    }
    else if (city == "COLLED'ANCHISE")
    {
        city = "C854";
        finished = true;
    }
    else if (city == "COLLEDITORA")
    {
        city = "C857";
        finished = true;
    }
    else if (city == "COLLEDIVALD'ELSA")
    {
        city = "C847";
        finished = true;
    }
    else if (city == "COLLESANMAGNO")
    {
        city = "C870";
        finished = true;
    }
    else if (city == "COLLESANNITA")
    {
        city = "C846";
        finished = true;
    }
    else if (city == "COLLESANTALUCIA")
    {
        city = "C872";
        finished = true;
    }
    else if (city == "COLLEUMBERTO")
    {
        city = "C848";
        finished = true;
    }
    else if (city == "COLLEBEATO")
    {
        city = "C850";
        finished = true;
    }
    else if (city == "COLLECCHIO")
    {
        city = "C852";
        finished = true;
    }
    else if (city == "COLLECORVINO")
    {
        city = "C853";
        finished = true;
    }
    else if (city == "COLLEDARA")
    {
        city = "C311";
        finished = true;
    }
    else if (city == "COLLEDIMACINE")
    {
        city = "C855";
        finished = true;
    }
    else if (city == "COLLEDIMEZZO")
    {
        city = "C856";
        finished = true;
    }
    else if (city == "COLLEFERRO")
    {
        city = "C858";
        finished = true;
    }
    else if (city == "COLLEGIOVE")
    {
        city = "C859";
        finished = true;
    }
    else if (city == "COLLEGNO")
    {
        city = "C860";
        finished = true;
    }
    else if (city == "COLLELONGO")
    {
        city = "C862";
        finished = true;
    }
    else if (city == "COLLEPARDO")
    {
        city = "C864";
        finished = true;
    }
    else if (city == "COLLEPASSO")
    {
        city = "C865";
        finished = true;
    }
    else if (city == "COLLEPIETRO")
    {
        city = "C866";
        finished = true;
    }
    else if (city == "COLLERETTOCASTELNUOVO")
    {
        city = "C867";
        finished = true;
    }
    else if (city == "COLLERETTOGIACOSA")
    {
        city = "C868";
        finished = true;
    }
    else if (city == "COLLESALVETTI")
    {
        city = "C869";
        finished = true;
    }
    else if (city == "COLLESANO")
    {
        city = "C871";
        finished = true;
    }
    else if (city == "COLLETORTO")
    {
        city = "C875";
        finished = true;
    }
    else if (city == "COLLEVECCHIO")
    {
        city = "C876";
        finished = true;
    }
    else if (city == "COLLIAVOLTURNO")
    {
        city = "C878";
        finished = true;
    }
    else if (city == "COLLIALMETAURO")
    {
        city = "M380";
        finished = true;
    }
    else if (city == "COLLIDELTRONTO")
    {
        city = "C877";
        finished = true;
    }
    else if (city == "COLLISULVELINO")
    {
        city = "C880";
        finished = true;
    }
    else if (city == "COLLIVERDI")
    {
        city = "M419";
        finished = true;
    }
    else if (city == "COLLIANO")
    {
        city = "C879";
        finished = true;
    }
    else if (city == "COLLINAS")
    {
        city = "C882";
        finished = true;
    }
    else if (city == "COLLIO")
    {
        city = "C883";
        finished = true;
    }
    else if (city == "COLLOBIANO")
    {
        city = "C884";
        finished = true;
    }
    else if (city == "COLLOREDODIMONTEALBANO")
    {
        city = "C885";
        finished = true;
    }
    else if (city == "COLMURANO")
    {
        city = "C886";
        finished = true;
    }
    else if (city == "COLOBRARO")
    {
        city = "C888";
        finished = true;
    }
    else if (city == "COLOGNAVENETA")
    {
        city = "C890";
        finished = true;
    }
    else if (city == "COLOGNE")
    {
        city = "C893";
        finished = true;
    }
    else if (city == "COLOGNOALSERIO")
    {
        city = "C894";
        finished = true;
    }
    else if (city == "COLOGNOMONZESE")
    {
        city = "C895";
        finished = true;
    }
    else if (city == "COLOGNOLAAICOLLI")
    {
        city = "C897";
        finished = true;
    }
    else if (city == "COLONNA")
    {
        city = "C900";
        finished = true;
    }
    else if (city == "COLONNELLA")
    {
        city = "C901";
        finished = true;
    }
    else if (city == "COLONNO")
    {
        city = "C902";
        finished = true;
    }
    else if (city == "COLORINA")
    {
        city = "C903";
        finished = true;
    }
    else if (city == "COLORNO")
    {
        city = "C904";
        finished = true;
    }
    else if (city == "COLOSIMI")
    {
        city = "C905";
        finished = true;
    }
    else if (city == "COLTURANO")
    {
        city = "C908";
        finished = true;
    }
    else if (city == "COLVERDE")
    {
        city = "M336";
        finished = true;
    }
    else if (city == "COLZATE")
    {
        city = "C910";
        finished = true;
    }
    else if (city == "COMABBIO")
    {
        city = "C911";
        finished = true;
    }
    else if (city == "COMACCHIO")
    {
        city = "C912";
        finished = true;
    }
    else if (city == "COMANO")
    {
        city = "C914";
        finished = true;
    }
    else if (city == "COMANOTERME")
    {
        city = "M314";
        finished = true;
    }
    else if (city == "COMAZZO")
    {
        city = "C917";
        finished = true;
    }
    else if (city == "COMEGLIANS")
    {
        city = "C918";
        finished = true;
    }
    else if (city == "COMELICOSUPERIORE")
    {
        city = "C920";
        finished = true;
    }
    else if (city == "COMERIO")
    {
        city = "C922";
        finished = true;
    }
    else if (city == "COMEZZANO-CIZZAGO")
    {
        city = "C925";
        finished = true;
    }
    else if (city == "COMIGNAGO")
    {
        city = "C926";
        finished = true;
    }
    else if (city == "COMISO")
    {
        city = "C927";
        finished = true;
    }
    else if (city == "COMITINI")
    {
        city = "C928";
        finished = true;
    }
    else if (city == "COMIZIANO")
    {
        city = "C929";
        finished = true;
    }
    else if (city == "COMMESSAGGIO")
    {
        city = "C930";
        finished = true;
    }
    else if (city == "COMMEZZADURA")
    {
        city = "C931";
        finished = true;
    }
    else if (city == "COMO")
    {
        city = "C933";
        finished = true;
    }
    else if (city == "COMPIANO")
    {
        city = "C934";
        finished = true;
    }
    else if (city == "COMUNNUOVO")
    {
        city = "C937";
        finished = true;
    }
    else if (city == "COMUNANZA")
    {
        city = "C935";
        finished = true;
    }
    else if (city == "CONA")
    {
        city = "C938";
        finished = true;
    }
    else if (city == "CONCACASALE")
    {
        city = "C941";
        finished = true;
    }
    else if (city == "CONCADEIMARINI")
    {
        city = "C940";
        finished = true;
    }
    else if (city == "CONCADELLACAMPANIA")
    {
        city = "C939";
        finished = true;
    }
    else if (city == "CONCAMARISE")
    {
        city = "C943";
        finished = true;
    }
    else if (city == "CONCEI")
    {
        city = "C944";
        finished = true;
    }
    else if (city == "CONCERVIANO")
    {
        city = "C946";
        finished = true;
    }
    else if (city == "CONCESIO")
    {
        city = "C948";
        finished = true;
    }
    else if (city == "CONCO")
    {
        city = "C949";
        finished = true;
    }
    else if (city == "CONCORDIASAGITTARIA")
    {
        city = "C950";
        finished = true;
    }
    else if (city == "CONCORDIASULLASECCHIA")
    {
        city = "C951";
        finished = true;
    }
    else if (city == "CONCOREZZO")
    {
        city = "C952";
        finished = true;
    }
    else if (city == "CONDINO")
    {
        city = "C953";
        finished = true;
    }
    else if (city == "CONDOFURI")
    {
        city = "C954";
        finished = true;
    }
    else if (city == "CONDOVE")
    {
        city = "C955";
        finished = true;
    }
    else if (city == "CONDRO'")
    {
        city = "C956";
        finished = true;
    }
    else if (city == "CONEGLIANO")
    {
        city = "C957";
        finished = true;
    }
    else if (city == "CONFIENZA")
    {
        city = "C958";
        finished = true;
    }
    else if (city == "CONFIGNI")
    {
        city = "C959";
        finished = true;
    }
    else if (city == "CONFLENTI")
    {
        city = "C960";
        finished = true;
    }
    else if (city == "CONIOLO")
    {
        city = "C962";
        finished = true;
    }
    else if (city == "CONSELICE")
    {
        city = "C963";
        finished = true;
    }
    else if (city == "CONSELVE")
    {
        city = "C964";
        finished = true;
    }
    else if (city == "CONSIGLIODIRUMO")
    {
        city = "C965";
        finished = true;
    }
    else if (city == "CONTA'")
    {
        city = "M356";
        finished = true;
    }
    else if (city == "CONTESSAENTELLINA")
    {
        city = "C968";
        finished = true;
    }
    else if (city == "CONTIGLIANO")
    {
        city = "C969";
        finished = true;
    }
    else if (city == "CONTRADA")
    {
        city = "C971";
        finished = true;
    }
    else if (city == "CONTROGUERRA")
    {
        city = "C972";
        finished = true;
    }
    else if (city == "CONTRONE")
    {
        city = "C973";
        finished = true;
    }
    else if (city == "CONTURSITERME")
    {
        city = "C974";
        finished = true;
    }
    else if (city == "CONVERSANO")
    {
        city = "C975";
        finished = true;
    }
    else if (city == "CONZADELLACAMPANIA")
    {
        city = "C976";
        finished = true;
    }
    else if (city == "CONZANO")
    {
        city = "C977";
        finished = true;
    }
    else if (city == "COPERTINO")
    {
        city = "C978";
        finished = true;
    }
    else if (city == "COPIANO")
    {
        city = "C979";
        finished = true;
    }
    else if (city == "COPPARO")
    {
        city = "C980";
        finished = true;
    }
    else if (city == "CORANA")
    {
        city = "C982";
        finished = true;
    }
    else if (city == "CORATO")
    {
        city = "C983";
        finished = true;
    }
    else if (city == "CORBARA")
    {
        city = "C984";
        finished = true;
    }
    else if (city == "CORBETTA")
    {
        city = "C986";
        finished = true;
    }
    else if (city == "CORBOLA")
    {
        city = "C987";
        finished = true;
    }
    else if (city == "CORCHIANO")
    {
        city = "C988";
        finished = true;
    }
    else if (city == "CORCIANO")
    {
        city = "C990";
        finished = true;
    }
    else if (city == "CORDENONS")
    {
        city = "C991";
        finished = true;
    }
    else if (city == "CORDIGNANO")
    {
        city = "C992";
        finished = true;
    }
    else if (city == "CORDOVADO")
    {
        city = "C993";
        finished = true;
    }
    else if (city == "COREDO")
    {
        city = "C994";
        finished = true;
    }
    else if (city == "COREGLIAANTELMINELLI")
    {
        city = "C996";
        finished = true;
    }
    else if (city == "COREGLIALIGURE")
    {
        city = "C995";
        finished = true;
    }
    else if (city == "CORENOAUSONIO")
    {
        city = "C998";
        finished = true;
    }
    else if (city == "CORFINIO")
    {
        city = "C999";
        finished = true;
    }
    else if (city == "CORI")
    {
        city = "D003";
        finished = true;
    }
    else if (city == "CORIANO")
    {
        city = "D004";
        finished = true;
    }
    else if (city == "CORIGLIANOCALABRO")
    {
        city = "D005";
        finished = true;
    }
    else if (city == "CORIGLIANOD'OTRANTO")
    {
        city = "D006";
        finished = true;
    }
    else if (city == "CORIGLIANO-ROSSANO")
    {
        city = "M403";
        finished = true;
    }
    else if (city == "CORINALDO")
    {
        city = "D007";
        finished = true;
    }
    else if (city == "CORIO")
    {
        city = "D008";
        finished = true;
    }
    else if (city == "CORLEONE")
    {
        city = "D009";
        finished = true;
    }
    else if (city == "CORLETOMONFORTE")
    {
        city = "D011";
        finished = true;
    }
    else if (city == "CORLETOPERTICARA")
    {
        city = "D010";
        finished = true;
    }
    else if (city == "CORMANO")
    {
        city = "D013";
        finished = true;
    }
    else if (city == "CORMONS")
    {
        city = "D014";
        finished = true;
    }
    else if (city == "CORNAIMAGNA")
    {
        city = "D015";
        finished = true;
    }
    else if (city == "CORNALBA")
    {
        city = "D016";
        finished = true;
    }
    else if (city == "CORNALE")
    {
        city = "D017";
        finished = true;
    }
    else if (city == "CORNALEEBASTIDA")
    {
        city = "M338";
        finished = true;
    }
    else if (city == "CORNAREDO")
    {
        city = "D018";
        finished = true;
    }
    else if (city == "CORNATED'ADDA")
    {
        city = "D019";
        finished = true;
    }
    else if (city == "CORNEDOALL'ISARCO.KARNEID.")
    {
        city = "B799";
        finished = true;
    }
    else if (city == "CORNEDOVICENTINO")
    {
        city = "D020";
        finished = true;
    }
    else if (city == "CORNEGLIANOLAUDENSE")
    {
        city = "D021";
        finished = true;
    }
    else if (city == "CORNELIANOD'ALBA")
    {
        city = "D022";
        finished = true;
    }
    else if (city == "CORNIGLIO")
    {
        city = "D026";
        finished = true;
    }
    else if (city == "CORNODIROSAZZO")
    {
        city = "D027";
        finished = true;
    }
    else if (city == "CORNOGIOVINE")
    {
        city = "D028";
        finished = true;
    }
    else if (city == "CORNOVECCHIO")
    {
        city = "D029";
        finished = true;
    }
    else if (city == "CORNUDA")
    {
        city = "D030";
        finished = true;
    }
    else if (city == "CORREGGIO")
    {
        city = "D037";
        finished = true;
    }
    else if (city == "CORREZZANA")
    {
        city = "D038";
        finished = true;
    }
    else if (city == "CORREZZOLA")
    {
        city = "D040";
        finished = true;
    }
    else if (city == "CORRIDO")
    {
        city = "D041";
        finished = true;
    }
    else if (city == "CORRIDONIA")
    {
        city = "D042";
        finished = true;
    }
    else if (city == "CORROPOLI")
    {
        city = "D043";
        finished = true;
    }
    else if (city == "CORSANO")
    {
        city = "D044";
        finished = true;
    }
    else if (city == "CORSICO")
    {
        city = "D045";
        finished = true;
    }
    else if (city == "CORSIONE")
    {
        city = "D046";
        finished = true;
    }
    else if (city == "CORTACCIASULLASTRADADELVINO.KURTATSCHA.")
    {
        city = "D048";
        finished = true;
    }
    else if (city == "CORTALE")
    {
        city = "D049";
        finished = true;
    }
    else if (city == "CORTANDONE")
    {
        city = "D050";
        finished = true;
    }
    else if (city == "CORTANZE")
    {
        city = "D051";
        finished = true;
    }
    else if (city == "CORTAZZONE")
    {
        city = "D052";
        finished = true;
    }
    else if (city == "CORTEBRUGNATELLA")
    {
        city = "D054";
        finished = true;
    }
    else if (city == "CORTEDE'CORTESICONCIGNONE")
    {
        city = "D056";
        finished = true;
    }
    else if (city == "CORTEDE'FRATI")
    {
        city = "D057";
        finished = true;
    }
    else if (city == "CORTEFRANCA")
    {
        city = "D058";
        finished = true;
    }
    else if (city == "CORTEPALASIO")
    {
        city = "D068";
        finished = true;
    }
    else if (city == "CORTEMAGGIORE")
    {
        city = "D061";
        finished = true;
    }
    else if (city == "CORTEMILIA")
    {
        city = "D062";
        finished = true;
    }
    else if (city == "CORTENOGOLGI")
    {
        city = "D064";
        finished = true;
    }
    else if (city == "CORTENOVA")
    {
        city = "D065";
        finished = true;
    }
    else if (city == "CORTENUOVA")
    {
        city = "D066";
        finished = true;
    }
    else if (city == "CORTEOLONA")
    {
        city = "D067";
        finished = true;
    }
    else if (city == "CORTEOLONAEGENZONE")
    {
        city = "M372";
        finished = true;
    }
    else if (city == "CORTIGLIONE")
    {
        city = "D072";
        finished = true;
    }
    else if (city == "CORTINAD'AMPEZZO")
    {
        city = "A266";
        finished = true;
    }
    else if (city == "CORTINASULLASTRADADELVINO.KURTINIGAND.")
    {
        city = "D075";
        finished = true;
    }
    else if (city == "CORTINO")
    {
        city = "D076";
        finished = true;
    }
    else if (city == "CORTONA")
    {
        city = "D077";
        finished = true;
    }
    else if (city == "CORVARA")
    {
        city = "D078";
        finished = true;
    }
    else if (city == "CORVARAINBADIA.CORVARA.")
    {
        city = "D079";
        finished = true;
    }
    else if (city == "CORVINOSANQUIRICO")
    {
        city = "D081";
        finished = true;
    }
    else if (city == "CORZANO")
    {
        city = "D082";
        finished = true;
    }
    else if (city == "COSEANO")
    {
        city = "D085";
        finished = true;
    }
    else if (city == "COSENZA")
    {
        city = "D086";
        finished = true;
    }
    else if (city == "COSIOD'ARROSCIA")
    {
        city = "D087";
        finished = true;
    }
    else if (city == "COSIOVALTELLINO")
    {
        city = "D088";
        finished = true;
    }
    else if (city == "COSOLETO")
    {
        city = "D089";
        finished = true;
    }
    else if (city == "COSSANOBELBO")
    {
        city = "D093";
        finished = true;
    }
    else if (city == "COSSANOCANAVESE")
    {
        city = "D092";
        finished = true;
    }
    else if (city == "COSSATO")
    {
        city = "D094";
        finished = true;
    }
    else if (city == "COSSERIA")
    {
        city = "D095";
        finished = true;
    }
    else if (city == "COSSIGNANO")
    {
        city = "D096";
        finished = true;
    }
    else if (city == "COSSOGNO")
    {
        city = "D099";
        finished = true;
    }
    else if (city == "COSSOINE")
    {
        city = "D100";
        finished = true;
    }
    else if (city == "COSSOMBRATO")
    {
        city = "D101";
        finished = true;
    }
    else if (city == "COSTADE'NOBILI")
    {
        city = "D109";
        finished = true;
    }
    else if (city == "COSTADIMEZZATE")
    {
        city = "D110";
        finished = true;
    }
    else if (city == "COSTADIROVIGO")
    {
        city = "D105";
        finished = true;
    }
    else if (city == "COSTAMASNAGA")
    {
        city = "D112";
        finished = true;
    }
    else if (city == "COSTASERINA")
    {
        city = "D111";
        finished = true;
    }
    else if (city == "COSTAVALLEIMAGNA")
    {
        city = "D103";
        finished = true;
    }
    else if (city == "COSTAVESCOVATO")
    {
        city = "D102";
        finished = true;
    }
    else if (city == "COSTAVOLPINO")
    {
        city = "D117";
        finished = true;
    }
    else if (city == "COSTABISSARA")
    {
        city = "D107";
        finished = true;
    }
    else if (city == "COSTACCIARO")
    {
        city = "D108";
        finished = true;
    }
    else if (city == "COSTANZANA")
    {
        city = "D113";
        finished = true;
    }
    else if (city == "COSTARAINERA")
    {
        city = "D114";
        finished = true;
    }
    else if (city == "COSTERMANOSULGARDA")
    {
        city = "D118";
        finished = true;
    }
    else if (city == "COSTIGLIOLED'ASTI")
    {
        city = "D119";
        finished = true;
    }
    else if (city == "COSTIGLIOLESALUZZO")
    {
        city = "D120";
        finished = true;
    }
    else if (city == "COTIGNOLA")
    {
        city = "D121";
        finished = true;
    }
    else if (city == "COTRONEI")
    {
        city = "D123";
        finished = true;
    }
    else if (city == "COTTANELLO")
    {
        city = "D124";
        finished = true;
    }
    else if (city == "COURMAYEUR")
    {
        city = "D012";
        finished = true;
    }
    else if (city == "COVO")
    {
        city = "D126";
        finished = true;
    }
    else if (city == "COZZO")
    {
        city = "D127";
        finished = true;
    }
    else if (city == "CRACO")
    {
        city = "D128";
        finished = true;
    }
    else if (city == "CRANDOLAVALSASSINA")
    {
        city = "D131";
        finished = true;
    }
    else if (city == "CRAVAGLIANA")
    {
        city = "D132";
        finished = true;
    }
    else if (city == "CRAVANZANA")
    {
        city = "D133";
        finished = true;
    }
    else if (city == "CRAVEGGIA")
    {
        city = "D134";
        finished = true;
    }
    else if (city == "CREAZZO")
    {
        city = "D136";
        finished = true;
    }
    else if (city == "CRECCHIO")
    {
        city = "D137";
        finished = true;
    }
    else if (city == "CREDARO")
    {
        city = "D139";
        finished = true;
    }
    else if (city == "CREDERARUBBIANO")
    {
        city = "D141";
        finished = true;
    }
    else if (city == "CREMA")
    {
        city = "D142";
        finished = true;
    }
    else if (city == "CREMELLA")
    {
        city = "D143";
        finished = true;
    }
    else if (city == "CREMENAGA")
    {
        city = "D144";
        finished = true;
    }
    else if (city == "CREMENO")
    {
        city = "D145";
        finished = true;
    }
    else if (city == "CREMIA")
    {
        city = "D147";
        finished = true;
    }
    else if (city == "CREMOLINO")
    {
        city = "D149";
        finished = true;
    }
    else if (city == "CREMONA")
    {
        city = "D150";
        finished = true;
    }
    else if (city == "CREMOSANO")
    {
        city = "D151";
        finished = true;
    }
    else if (city == "CRESCENTINO")
    {
        city = "D154";
        finished = true;
    }
    else if (city == "CRESPADORO")
    {
        city = "D156";
        finished = true;
    }
    else if (city == "CRESPANODELGRAPPA")
    {
        city = "D157";
        finished = true;
    }
    else if (city == "CRESPELLANO")
    {
        city = "D158";
        finished = true;
    }
    else if (city == "CRESPIATICA")
    {
        city = "D159";
        finished = true;
    }
    else if (city == "CRESPINA")
    {
        city = "D160";
        finished = true;
    }
    else if (city == "CRESPINALORENZANA")
    {
        city = "M328";
        finished = true;
    }
    else if (city == "CRESPINO")
    {
        city = "D161";
        finished = true;
    }
    else if (city == "CRESSA")
    {
        city = "D162";
        finished = true;
    }
    else if (city == "CREVACUORE")
    {
        city = "D165";
        finished = true;
    }
    else if (city == "CREVALCORE")
    {
        city = "D166";
        finished = true;
    }
    else if (city == "CREVOLADOSSOLA")
    {
        city = "D168";
        finished = true;
    }
    else if (city == "CRISPANO")
    {
        city = "D170";
        finished = true;
    }
    else if (city == "CRISPIANO")
    {
        city = "D171";
        finished = true;
    }
    else if (city == "CRISSOLO")
    {
        city = "D172";
        finished = true;
    }
    else if (city == "CROCEFIESCHI")
    {
        city = "D175";
        finished = true;
    }
    else if (city == "CROCETTADELMONTELLO")
    {
        city = "C670";
        finished = true;
    }
    else if (city == "CRODO")
    {
        city = "D177";
        finished = true;
    }
    else if (city == "CROGNALETO")
    {
        city = "D179";
        finished = true;
    }
    else if (city == "CROPALATI")
    {
        city = "D180";
        finished = true;
    }
    else if (city == "CROPANI")
    {
        city = "D181";
        finished = true;
    }
    else if (city == "CROSA")
    {
        city = "D182";
        finished = true;
    }
    else if (city == "CROSIA")
    {
        city = "D184";
        finished = true;
    }
    else if (city == "CROSIODELLAVALLE")
    {
        city = "D185";
        finished = true;
    }
    else if (city == "CROTONE")
    {
        city = "D122";
        finished = true;
    }
    else if (city == "CROTTAD'ADDA")
    {
        city = "D186";
        finished = true;
    }
    else if (city == "CROVA")
    {
        city = "D187";
        finished = true;
    }
    else if (city == "CROVIANA")
    {
        city = "D188";
        finished = true;
    }
    else if (city == "CRUCOLI")
    {
        city = "D189";
        finished = true;
    }
    else if (city == "CUASSOALMONTE")
    {
        city = "D192";
        finished = true;
    }
    else if (city == "CUCCAROMONFERRATO")
    {
        city = "D194";
        finished = true;
    }
    else if (city == "CUCCAROVETERE")
    {
        city = "D195";
        finished = true;
    }
    else if (city == "CUCCIAGO")
    {
        city = "D196";
        finished = true;
    }
    else if (city == "CUCEGLIO")
    {
        city = "D197";
        finished = true;
    }
    else if (city == "CUGGIONO")
    {
        city = "D198";
        finished = true;
    }
    else if (city == "CUGLIATE-FABIASCO")
    {
        city = "D199";
        finished = true;
    }
    else if (city == "CUGLIERI")
    {
        city = "D200";
        finished = true;
    }
    else if (city == "CUGNOLI")
    {
        city = "D201";
        finished = true;
    }
    else if (city == "CUMIANA")
    {
        city = "D202";
        finished = true;
    }
    else if (city == "CUMIGNANOSULNAVIGLIO")
    {
        city = "D203";
        finished = true;
    }
    else if (city == "CUNARDO")
    {
        city = "D204";
        finished = true;
    }
    else if (city == "CUNEO")
    {
        city = "D205";
        finished = true;
    }
    else if (city == "CUNEVO")
    {
        city = "D206";
        finished = true;
    }
    else if (city == "CUNICO")
    {
        city = "D207";
        finished = true;
    }
    else if (city == "CUORGNE'")
    {
        city = "D208";
        finished = true;
    }
    else if (city == "CUPELLO")
    {
        city = "D209";
        finished = true;
    }
    else if (city == "CUPRAMARITTIMA")
    {
        city = "D210";
        finished = true;
    }
    else if (city == "CUPRAMONTANA")
    {
        city = "D211";
        finished = true;
    }
    else if (city == "CURACARPIGNANO")
    {
        city = "B824";
        finished = true;
    }
    else if (city == "CURCURIS")
    {
        city = "D214";
        finished = true;
    }
    else if (city == "CUREGGIO")
    {
        city = "D216";
        finished = true;
    }
    else if (city == "CURIGLIACONMONTEVIASCO")
    {
        city = "D217";
        finished = true;
    }
    else if (city == "CURINGA")
    {
        city = "D218";
        finished = true;
    }
    else if (city == "CURINO")
    {
        city = "D219";
        finished = true;
    }
    else if (city == "CURNO")
    {
        city = "D221";
        finished = true;
    }
    else if (city == "CURONVENOSTA.GRAUNIMVINSCHGAU.")
    {
        city = "D222";
        finished = true;
    }
    else if (city == "CURSI")
    {
        city = "D223";
        finished = true;
    }
    else if (city == "CURSOLO-ORASSO")
    {
        city = "D225";
        finished = true;
    }
    else if (city == "CURTAROLO")
    {
        city = "D226";
        finished = true;
    }
    else if (city == "CURTATONE")
    {
        city = "D227";
        finished = true;
    }
    else if (city == "CURTI")
    {
        city = "D228";
        finished = true;
    }
    else if (city == "CUSAGO")
    {
        city = "D229";
        finished = true;
    }
    else if (city == "CUSANOMILANINO")
    {
        city = "D231";
        finished = true;
    }
    else if (city == "CUSANOMUTRI")
    {
        city = "D230";
        finished = true;
    }
    else if (city == "CUSINO")
    {
        city = "D232";
        finished = true;
    }
    else if (city == "CUSIO")
    {
        city = "D233";
        finished = true;
    }
    else if (city == "CUSTONACI")
    {
        city = "D234";
        finished = true;
    }
    else if (city == "CUTIGLIANO")
    {
        city = "D235";
        finished = true;
    }
    else if (city == "CUTRO")
    {
        city = "D236";
        finished = true;
    }
    else if (city == "CUTROFIANO")
    {
        city = "D237";
        finished = true;
    }
    else if (city == "CUVEGLIO")
    {
        city = "D238";
        finished = true;
    }
    else if (city == "CUVIO")
    {
        city = "D239";
        finished = true;
    }
    else if (city == "DAIANO")
    {
        city = "D243";
        finished = true;
    }
    else if (city == "DAIRAGO")
    {
        city = "D244";
        finished = true;
    }
    else if (city == "DALMINE")
    {
        city = "D245";
        finished = true;
    }
    else if (city == "DAMBEL")
    {
        city = "D246";
        finished = true;
    }
    else if (city == "DANTADICADORE")
    {
        city = "D247";
        finished = true;
    }
    else if (city == "DAONE")
    {
        city = "D248";
        finished = true;
    }
    else if (city == "DARE'")
    {
        city = "D250";
        finished = true;
    }
    else if (city == "DARFOBOARIOTERME")
    {
        city = "D251";
        finished = true;
    }
    else if (city == "DASA'")
    {
        city = "D253";
        finished = true;
    }
    else if (city == "DAVAGNA")
    {
        city = "D255";
        finished = true;
    }
    else if (city == "DAVERIO")
    {
        city = "D256";
        finished = true;
    }
    else if (city == "DAVOLI")
    {
        city = "D257";
        finished = true;
    }
    else if (city == "DAZIO")
    {
        city = "D258";
        finished = true;
    }
    else if (city == "DECIMOMANNU")
    {
        city = "D259";
        finished = true;
    }
    else if (city == "DECIMOPUTZU")
    {
        city = "D260";
        finished = true;
    }
    else if (city == "DECOLLATURA")
    {
        city = "D261";
        finished = true;
    }
    else if (city == "DEGO")
    {
        city = "D264";
        finished = true;
    }
    else if (city == "DEIVAMARINA")
    {
        city = "D265";
        finished = true;
    }
    else if (city == "DELEBIO")
    {
        city = "D266";
        finished = true;
    }
    else if (city == "DELIA")
    {
        city = "D267";
        finished = true;
    }
    else if (city == "DELIANUOVA")
    {
        city = "D268";
        finished = true;
    }
    else if (city == "DELICETO")
    {
        city = "D269";
        finished = true;
    }
    else if (city == "DELLO")
    {
        city = "D270";
        finished = true;
    }
    else if (city == "DEMONTE")
    {
        city = "D271";
        finished = true;
    }
    else if (city == "DENICE")
    {
        city = "D272";
        finished = true;
    }
    else if (city == "DENNO")
    {
        city = "D273";
        finished = true;
    }
    else if (city == "DERNICE")
    {
        city = "D277";
        finished = true;
    }
    else if (city == "DEROVERE")
    {
        city = "D278";
        finished = true;
    }
    else if (city == "DERUTA")
    {
        city = "D279";
        finished = true;
    }
    else if (city == "DERVIO")
    {
        city = "D280";
        finished = true;
    }
    else if (city == "DESANA")
    {
        city = "D281";
        finished = true;
    }
    else if (city == "DESENZANODELGARDA")
    {
        city = "D284";
        finished = true;
    }
    else if (city == "DESIO")
    {
        city = "D286";
        finished = true;
    }
    else if (city == "DESULO")
    {
        city = "D287";
        finished = true;
    }
    else if (city == "DIAMANTE")
    {
        city = "D289";
        finished = true;
    }
    else if (city == "DIANOARENTINO")
    {
        city = "D293";
        finished = true;
    }
    else if (city == "DIANOCASTELLO")
    {
        city = "D296";
        finished = true;
    }
    else if (city == "DIANOD'ALBA")
    {
        city = "D291";
        finished = true;
    }
    else if (city == "DIANOMARINA")
    {
        city = "D297";
        finished = true;
    }
    else if (city == "DIANOSANPIETRO")
    {
        city = "D298";
        finished = true;
    }
    else if (city == "DICOMANO")
    {
        city = "D299";
        finished = true;
    }
    else if (city == "DIGNANO")
    {
        city = "D300";
        finished = true;
    }
    else if (city == "DIMARO")
    {
        city = "D302";
        finished = true;
    }
    else if (city == "DIMAROFOLGARIDA")
    {
        city = "M366";
        finished = true;
    }
    else if (city == "DINAMI")
    {
        city = "D303";
        finished = true;
    }
    else if (city == "DIPIGNANO")
    {
        city = "D304";
        finished = true;
    }
    else if (city == "DISO")
    {
        city = "D305";
        finished = true;
    }
    else if (city == "DIVIGNANO")
    {
        city = "D309";
        finished = true;
    }
    else if (city == "DIZZASCO")
    {
        city = "D310";
        finished = true;
    }
    else if (city == "DOBBIACO.TOBLACH.")
    {
        city = "D311";
        finished = true;
    }
    else if (city == "DOBERDO'DELLAGO")
    {
        city = "D312";
        finished = true;
    }
    else if (city == "DOGLIANI")
    {
        city = "D314";
        finished = true;
    }
    else if (city == "DOGLIOLA")
    {
        city = "D315";
        finished = true;
    }
    else if (city == "DOGNA")
    {
        city = "D316";
        finished = true;
    }
    else if (city == "DOLCE'")
    {
        city = "D317";
        finished = true;
    }
    else if (city == "DOLCEACQUA")
    {
        city = "D318";
        finished = true;
    }
    else if (city == "DOLCEDO")
    {
        city = "D319";
        finished = true;
    }
    else if (city == "DOLEGNADELCOLLIO")
    {
        city = "D321";
        finished = true;
    }
    else if (city == "DOLIANOVA")
    {
        city = "D323";
        finished = true;
    }
    else if (city == "DOLO")
    {
        city = "D325";
        finished = true;
    }
    else if (city == "DOLZAGO")
    {
        city = "D327";
        finished = true;
    }
    else if (city == "DOMANICO")
    {
        city = "D328";
        finished = true;
    }
    else if (city == "DOMASO")
    {
        city = "D329";
        finished = true;
    }
    else if (city == "DOMEGGEDICADORE")
    {
        city = "D330";
        finished = true;
    }
    else if (city == "DOMICELLA")
    {
        city = "D331";
        finished = true;
    }
    else if (city == "DOMODOSSOLA")
    {
        city = "D332";
        finished = true;
    }
    else if (city == "DOMUSDEMARIA")
    {
        city = "D333";
        finished = true;
    }
    else if (city == "DOMUSNOVAS")
    {
        city = "D334";
        finished = true;
    }
    else if (city == "DON")
    {
        city = "D336";
        finished = true;
    }
    else if (city == "DONATO")
    {
        city = "D339";
        finished = true;
    }
    else if (city == "DONGO")
    {
        city = "D341";
        finished = true;
    }
    else if (city == "DONNAS")
    {
        city = "D338";
        finished = true;
    }
    else if (city == "DONORI")
    {
        city = "D344";
        finished = true;
    }
    else if (city == "DORGALI")
    {
        city = "D345";
        finished = true;
    }
    else if (city == "DORIO")
    {
        city = "D346";
        finished = true;
    }
    else if (city == "DORMELLETTO")
    {
        city = "D347";
        finished = true;
    }
    else if (city == "DORNO")
    {
        city = "D348";
        finished = true;
    }
    else if (city == "DORSINO")
    {
        city = "D349";
        finished = true;
    }
    else if (city == "DORZANO")
    {
        city = "D350";
        finished = true;
    }
    else if (city == "DOSOLO")
    {
        city = "D351";
        finished = true;
    }
    else if (city == "DOSSENA")
    {
        city = "D352";
        finished = true;
    }
    else if (city == "DOSSODELLIRO")
    {
        city = "D355";
        finished = true;
    }
    else if (city == "DOUES")
    {
        city = "D356";
        finished = true;
    }
    else if (city == "DOVADOLA")
    {
        city = "D357";
        finished = true;
    }
    else if (city == "DOVERA")
    {
        city = "D358";
        finished = true;
    }
    else if (city == "DOZZA")
    {
        city = "D360";
        finished = true;
    }
    else if (city == "DRAGONI")
    {
        city = "D361";
        finished = true;
    }
    else if (city == "DRAPIA")
    {
        city = "D364";
        finished = true;
    }
    else if (city == "DRENA")
    {
        city = "D365";
        finished = true;
    }
    else if (city == "DRENCHIA")
    {
        city = "D366";
        finished = true;
    }
    else if (city == "DRESANO")
    {
        city = "D367";
        finished = true;
    }
    else if (city == "DREZZO")
    {
        city = "D369";
        finished = true;
    }
    else if (city == "DRIZZONA")
    {
        city = "D370";
        finished = true;
    }
    else if (city == "DRO")
    {
        city = "D371";
        finished = true;
    }
    else if (city == "DRONERO")
    {
        city = "D372";
        finished = true;
    }
    else if (city == "DRUENTO")
    {
        city = "D373";
        finished = true;
    }
    else if (city == "DRUOGNO")
    {
        city = "D374";
        finished = true;
    }
    else if (city == "DUALCHI")
    {
        city = "D376";
        finished = true;
    }
    else if (city == "DUBINO")
    {
        city = "D377";
        finished = true;
    }
    else if (city == "DUECARRARE")
    {
        city = "M300";
        finished = true;
    }
    else if (city == "DUEVILLE")
    {
        city = "D379";
        finished = true;
    }
    else if (city == "DUGENTA")
    {
        city = "D380";
        finished = true;
    }
    else if (city == "DUINO-AURISINA")
    {
        city = "D383";
        finished = true;
    }
    else if (city == "DUMENZA")
    {
        city = "D384";
        finished = true;
    }
    else if (city == "DUNO")
    {
        city = "D385";
        finished = true;
    }
    else if (city == "DURAZZANO")
    {
        city = "D386";
        finished = true;
    }
    else if (city == "DURONIA")
    {
        city = "C772";
        finished = true;
    }
    else if (city == "DUSINOSANMICHELE")
    {
        city = "D388";
        finished = true;
    }
    else if (city == "EBOLI")
    {
        city = "D390";
        finished = true;
    }
    else if (city == "EDOLO")
    {
        city = "D391";
        finished = true;
    }
    else if (city == "EGNA.NEUMARKT.")
    {
        city = "D392";
        finished = true;
    }
    else if (city == "ELICE")
    {
        city = "D394";
        finished = true;
    }
    else if (city == "ELINI")
    {
        city = "D395";
        finished = true;
    }
    else if (city == "ELLO")
    {
        city = "D398";
        finished = true;
    }
    else if (city == "ELMAS")
    {
        city = "D399";
        finished = true;
    }
    else if (city == "ELVA")
    {
        city = "D401";
        finished = true;
    }
    else if (city == "EMARESE")
    {
        city = "D402";
        finished = true;
    }
    else if (city == "EMPOLI")
    {
        city = "D403";
        finished = true;
    }
    else if (city == "ENDINEGAIANO")
    {
        city = "D406";
        finished = true;
    }
    else if (city == "ENEGO")
    {
        city = "D407";
        finished = true;
    }
    else if (city == "ENEMONZO")
    {
        city = "D408";
        finished = true;
    }
    else if (city == "ENNA")
    {
        city = "C342";
        finished = true;
    }
    else if (city == "ENTRACQUE")
    {
        city = "D410";
        finished = true;
    }
    else if (city == "ENTRATICO")
    {
        city = "D411";
        finished = true;
    }
    else if (city == "ENVIE")
    {
        city = "D412";
        finished = true;
    }
    else if (city == "EPISCOPIA")
    {
        city = "D414";
        finished = true;
    }
    else if (city == "ERACLEA")
    {
        city = "D415";
        finished = true;
    }
    else if (city == "ERBA")
    {
        city = "D416";
        finished = true;
    }
    else if (city == "ERBE'")
    {
        city = "D419";
        finished = true;
    }
    else if (city == "ERBEZZO")
    {
        city = "D420";
        finished = true;
    }
    else if (city == "ERBUSCO")
    {
        city = "D421";
        finished = true;
    }
    else if (city == "ERCHIE")
    {
        city = "D422";
        finished = true;
    }
    else if (city == "ERCOLANO")
    {
        city = "H243";
        finished = true;
    }
    else if (city == "ERICE")
    {
        city = "D423";
        finished = true;
    }
    else if (city == "ERLI")
    {
        city = "D424";
        finished = true;
    }
    else if (city == "ERTOECASSO")
    {
        city = "D426";
        finished = true;
    }
    else if (city == "ERULA")
    {
        city = "M292";
        finished = true;
    }
    else if (city == "ERVE")
    {
        city = "D428";
        finished = true;
    }
    else if (city == "ESANATOGLIA")
    {
        city = "D429";
        finished = true;
    }
    else if (city == "ESCALAPLANO")
    {
        city = "D430";
        finished = true;
    }
    else if (city == "ESCOLCA")
    {
        city = "D431";
        finished = true;
    }
    else if (city == "ESINE")
    {
        city = "D434";
        finished = true;
    }
    else if (city == "ESINOLARIO")
    {
        city = "D436";
        finished = true;
    }
    else if (city == "ESPERIA")
    {
        city = "D440";
        finished = true;
    }
    else if (city == "ESPORLATU")
    {
        city = "D441";
        finished = true;
    }
    else if (city == "ESTE")
    {
        city = "D442";
        finished = true;
    }
    else if (city == "ESTERZILI")
    {
        city = "D443";
        finished = true;
    }
    else if (city == "ETROUBLES")
    {
        city = "D444";
        finished = true;
    }
    else if (city == "EUPILIO")
    {
        city = "D445";
        finished = true;
    }
    else if (city == "EXILLES")
    {
        city = "D433";
        finished = true;
    }
    else if (city == "FABBRICACURONE")
    {
        city = "D447";
        finished = true;
    }
    else if (city == "FABBRICHEDIVALLICO")
    {
        city = "D449";
        finished = true;
    }
    else if (city == "FABBRICHEDIVERGEMOLI")
    {
        city = "M319";
        finished = true;
    }
    else if (city == "FABBRICO")
    {
        city = "D450";
        finished = true;
    }
    else if (city == "FABRIANO")
    {
        city = "D451";
        finished = true;
    }
    else if (city == "FABRICADIROMA")
    {
        city = "D452";
        finished = true;
    }
    else if (city == "FABRIZIA")
    {
        city = "D453";
        finished = true;
    }
    else if (city == "FABRO")
    {
        city = "D454";
        finished = true;
    }
    else if (city == "FAEDIS")
    {
        city = "D455";
        finished = true;
    }
    else if (city == "FAEDO")
    {
        city = "D457";
        finished = true;
    }
    else if (city == "FAEDOVALTELLINO")
    {
        city = "D456";
        finished = true;
    }
    else if (city == "FAENZA")
    {
        city = "D458";
        finished = true;
    }
    else if (city == "FAETO")
    {
        city = "D459";
        finished = true;
    }
    else if (city == "FAGAGNA")
    {
        city = "D461";
        finished = true;
    }
    else if (city == "FAGGETOLARIO")
    {
        city = "D462";
        finished = true;
    }
    else if (city == "FAGGIANO")
    {
        city = "D463";
        finished = true;
    }
    else if (city == "FAGNANOALTO")
    {
        city = "D465";
        finished = true;
    }
    else if (city == "FAGNANOCASTELLO")
    {
        city = "D464";
        finished = true;
    }
    else if (city == "FAGNANOOLONA")
    {
        city = "D467";
        finished = true;
    }
    else if (city == "FAIDELLAPAGANELLA")
    {
        city = "D468";
        finished = true;
    }
    else if (city == "FAICCHIO")
    {
        city = "D469";
        finished = true;
    }
    else if (city == "FALCADE")
    {
        city = "D470";
        finished = true;
    }
    else if (city == "FALCIANODELMASSICO")
    {
        city = "D471";
        finished = true;
    }
    else if (city == "FALCONARAALBANESE")
    {
        city = "D473";
        finished = true;
    }
    else if (city == "FALCONARAMARITTIMA")
    {
        city = "D472";
        finished = true;
    }
    else if (city == "FALCONE")
    {
        city = "D474";
        finished = true;
    }
    else if (city == "FALERIA")
    {
        city = "D475";
        finished = true;
    }
    else if (city == "FALERNA")
    {
        city = "D476";
        finished = true;
    }
    else if (city == "FALERONE")
    {
        city = "D477";
        finished = true;
    }
    else if (city == "FALLO")
    {
        city = "D480";
        finished = true;
    }
    else if (city == "FALMENTA")
    {
        city = "D481";
        finished = true;
    }
    else if (city == "FALOPPIO")
    {
        city = "D482";
        finished = true;
    }
    else if (city == "FALVATERRA")
    {
        city = "D483";
        finished = true;
    }
    else if (city == "FALZES.PFALZEN.")
    {
        city = "D484";
        finished = true;
    }
    else if (city == "FANANO")
    {
        city = "D486";
        finished = true;
    }
    else if (city == "FANNA")
    {
        city = "D487";
        finished = true;
    }
    else if (city == "FANO")
    {
        city = "D488";
        finished = true;
    }
    else if (city == "FANOADRIANO")
    {
        city = "D489";
        finished = true;
    }
    else if (city == "FARAFILIORUMPETRI")
    {
        city = "D494";
        finished = true;
    }
    else if (city == "FARAGERAD'ADDA")
    {
        city = "D490";
        finished = true;
    }
    else if (city == "FARAINSABINA")
    {
        city = "D493";
        finished = true;
    }
    else if (city == "FARANOVARESE")
    {
        city = "D492";
        finished = true;
    }
    else if (city == "FARAOLIVANACONSOLA")
    {
        city = "D491";
        finished = true;
    }
    else if (city == "FARASANMARTINO")
    {
        city = "D495";
        finished = true;
    }
    else if (city == "FARAVICENTINO")
    {
        city = "D496";
        finished = true;
    }
    else if (city == "FARDELLA")
    {
        city = "D497";
        finished = true;
    }
    else if (city == "FARIGLIANO")
    {
        city = "D499";
        finished = true;
    }
    else if (city == "FARINDOLA")
    {
        city = "D501";
        finished = true;
    }
    else if (city == "FARINI")
    {
        city = "D502";
        finished = true;
    }
    else if (city == "FARNESE")
    {
        city = "D503";
        finished = true;
    }
    else if (city == "FARRAD'ALPAGO")
    {
        city = "D506";
        finished = true;
    }
    else if (city == "FARRADISOLIGO")
    {
        city = "D505";
        finished = true;
    }
    else if (city == "FARRAD'ISONZO")
    {
        city = "D504";
        finished = true;
    }
    else if (city == "FASANO")
    {
        city = "D508";
        finished = true;
    }
    else if (city == "FASCIA")
    {
        city = "D509";
        finished = true;
    }
    else if (city == "FAUGLIA")
    {
        city = "D510";
        finished = true;
    }
    else if (city == "FAULE")
    {
        city = "D511";
        finished = true;
    }
    else if (city == "FAVALEDIMALVARO")
    {
        city = "D512";
        finished = true;
    }
    else if (city == "FAVARA")
    {
        city = "D514";
        finished = true;
    }
    else if (city == "FAVER")
    {
        city = "D516";
        finished = true;
    }
    else if (city == "FAVIGNANA")
    {
        city = "D518";
        finished = true;
    }
    else if (city == "FAVRIA")
    {
        city = "D520";
        finished = true;
    }
    else if (city == "FEISOGLIO")
    {
        city = "D523";
        finished = true;
    }
    else if (city == "FELETTO")
    {
        city = "D524";
        finished = true;
    }
    else if (city == "FELINO")
    {
        city = "D526";
        finished = true;
    }
    else if (city == "FELITTO")
    {
        city = "D527";
        finished = true;
    }
    else if (city == "FELIZZANO")
    {
        city = "D528";
        finished = true;
    }
    else if (city == "FELONICA")
    {
        city = "D529";
        finished = true;
    }
    else if (city == "FELTRE")
    {
        city = "D530";
        finished = true;
    }
    else if (city == "FENEGRO'")
    {
        city = "D531";
        finished = true;
    }
    else if (city == "FENESTRELLE")
    {
        city = "D532";
        finished = true;
    }
    else if (city == "FENIS")
    {
        city = "D537";
        finished = true;
    }
    else if (city == "FERENTILLO")
    {
        city = "D538";
        finished = true;
    }
    else if (city == "FERENTINO")
    {
        city = "D539";
        finished = true;
    }
    else if (city == "FERLA")
    {
        city = "D540";
        finished = true;
    }
    else if (city == "FERMIGNANO")
    {
        city = "D541";
        finished = true;
    }
    else if (city == "FERMO")
    {
        city = "D542";
        finished = true;
    }
    else if (city == "FERNO")
    {
        city = "D543";
        finished = true;
    }
    else if (city == "FEROLETOANTICO")
    {
        city = "D544";
        finished = true;
    }
    else if (city == "FEROLETODELLACHIESA")
    {
        city = "D545";
        finished = true;
    }
    else if (city == "FERRANDINA")
    {
        city = "D547";
        finished = true;
    }
    else if (city == "FERRARA")
    {
        city = "D548";
        finished = true;
    }
    else if (city == "FERRARADIMONTEBALDO")
    {
        city = "D549";
        finished = true;
    }
    else if (city == "FERRAZZANO")
    {
        city = "D550";
        finished = true;
    }
    else if (city == "FERRERADIVARESE")
    {
        city = "D551";
        finished = true;
    }
    else if (city == "FERRERAERBOGNONE")
    {
        city = "D552";
        finished = true;
    }
    else if (city == "FERRERE")
    {
        city = "D554";
        finished = true;
    }
    else if (city == "FERRIERE")
    {
        city = "D555";
        finished = true;
    }
    else if (city == "FERRUZZANO")
    {
        city = "D557";
        finished = true;
    }
    else if (city == "FIAMIGNANO")
    {
        city = "D560";
        finished = true;
    }
    else if (city == "FIANO")
    {
        city = "D562";
        finished = true;
    }
    else if (city == "FIANOROMANO")
    {
        city = "D561";
        finished = true;
    }
    else if (city == "FIASTRA")
    {
        city = "D564";
        finished = true;
    }
    else if (city == "FIAVE'")
    {
        city = "D565";
        finished = true;
    }
    else if (city == "FICARAZZI")
    {
        city = "D567";
        finished = true;
    }
    else if (city == "FICAROLO")
    {
        city = "D568";
        finished = true;
    }
    else if (city == "FICARRA")
    {
        city = "D569";
        finished = true;
    }
    else if (city == "FICULLE")
    {
        city = "D570";
        finished = true;
    }
    else if (city == "FIDENZA")
    {
        city = "B034";
        finished = true;
    }
    else if (city == "FIE'ALLOSCILIAR.VOELSAMSCHLERN.")
    {
        city = "D571";
        finished = true;
    }
    else if (city == "FIERADIPRIMIERO")
    {
        city = "D572";
        finished = true;
    }
    else if (city == "FIEROZZO")
    {
        city = "D573";
        finished = true;
    }
    else if (city == "FIESCO")
    {
        city = "D574";
        finished = true;
    }
    else if (city == "FIESOLE")
    {
        city = "D575";
        finished = true;
    }
    else if (city == "FIESSE")
    {
        city = "D576";
        finished = true;
    }
    else if (city == "FIESSOD'ARTICO")
    {
        city = "D578";
        finished = true;
    }
    else if (city == "FIESSOUMBERTIANO")
    {
        city = "D577";
        finished = true;
    }
    else if (city == "FIGINOSERENZA")
    {
        city = "D579";
        finished = true;
    }
    else if (city == "FIGLINEEINCISAVALDARNO")
    {
        city = "M321";
        finished = true;
    }
    else if (city == "FIGLINEVALDARNO")
    {
        city = "D583";
        finished = true;
    }
    else if (city == "FIGLINEVEGLIATURO")
    {
        city = "D582";
        finished = true;
    }
    else if (city == "FILACCIANO")
    {
        city = "D586";
        finished = true;
    }
    else if (city == "FILADELFIA")
    {
        city = "D587";
        finished = true;
    }
    else if (city == "FILAGO")
    {
        city = "D588";
        finished = true;
    }
    else if (city == "FILANDARI")
    {
        city = "D589";
        finished = true;
    }
    else if (city == "FILATTIERA")
    {
        city = "D590";
        finished = true;
    }
    else if (city == "FILETTINO")
    {
        city = "D591";
        finished = true;
    }
    else if (city == "FILETTO")
    {
        city = "D592";
        finished = true;
    }
    else if (city == "FILIANO")
    {
        city = "D593";
        finished = true;
    }
    else if (city == "FILIGHERA")
    {
        city = "D594";
        finished = true;
    }
    else if (city == "FILIGNANO")
    {
        city = "D595";
        finished = true;
    }
    else if (city == "FILOGASO")
    {
        city = "D596";
        finished = true;
    }
    else if (city == "FILOTTRANO")
    {
        city = "D597";
        finished = true;
    }
    else if (city == "FINALEEMILIA")
    {
        city = "D599";
        finished = true;
    }
    else if (city == "FINALELIGURE")
    {
        city = "D600";
        finished = true;
    }
    else if (city == "FINODELMONTE")
    {
        city = "D604";
        finished = true;
    }
    else if (city == "FINOMORNASCO")
    {
        city = "D605";
        finished = true;
    }
    else if (city == "FIORANOALSERIO")
    {
        city = "D606";
        finished = true;
    }
    else if (city == "FIORANOCANAVESE")
    {
        city = "D608";
        finished = true;
    }
    else if (city == "FIORANOMODENESE")
    {
        city = "D607";
        finished = true;
    }
    else if (city == "FIORDIMONTE")
    {
        city = "D609";
        finished = true;
    }
    else if (city == "FIORENZUOLAD'ARDA")
    {
        city = "D611";
        finished = true;
    }
    else if (city == "FIRENZE")
    {
        city = "D612";
        finished = true;
    }
    else if (city == "FIRENZUOLA")
    {
        city = "D613";
        finished = true;
    }
    else if (city == "FIRMO")
    {
        city = "D614";
        finished = true;
    }
    else if (city == "FISCAGLIA")
    {
        city = "M323";
        finished = true;
    }
    else if (city == "FISCIANO")
    {
        city = "D615";
        finished = true;
    }
    else if (city == "FIUGGI")
    {
        city = "A310";
        finished = true;
    }
    else if (city == "FIUMALBO")
    {
        city = "D617";
        finished = true;
    }
    else if (city == "FIUMARA")
    {
        city = "D619";
        finished = true;
    }
    else if (city == "FIUMEVENETO")
    {
        city = "D621";
        finished = true;
    }
    else if (city == "FIUMEDINISI")
    {
        city = "D622";
        finished = true;
    }
    else if (city == "FIUMEFREDDOBRUZIO")
    {
        city = "D624";
        finished = true;
    }
    else if (city == "FIUMEFREDDODISICILIA")
    {
        city = "D623";
        finished = true;
    }
    else if (city == "FIUMICELLO")
    {
        city = "D627";
        finished = true;
    }
    else if (city == "FIUMICELLOVILLAVICENTINA")
    {
        city = "M400";
        finished = true;
    }
    else if (city == "FIUMICINO")
    {
        city = "M297";
        finished = true;
    }
    else if (city == "FIUMINATA")
    {
        city = "D628";
        finished = true;
    }
    else if (city == "FIVIZZANO")
    {
        city = "D629";
        finished = true;
    }
    else if (city == "FLAIBANO")
    {
        city = "D630";
        finished = true;
    }
    else if (city == "FLAVON")
    {
        city = "D631";
        finished = true;
    }
    else if (city == "FLERO")
    {
        city = "D634";
        finished = true;
    }
    else if (city == "FLORESTA")
    {
        city = "D635";
        finished = true;
    }
    else if (city == "FLORIDIA")
    {
        city = "D636";
        finished = true;
    }
    else if (city == "FLORINAS")
    {
        city = "D637";
        finished = true;
    }
    else if (city == "FLUMERI")
    {
        city = "D638";
        finished = true;
    }
    else if (city == "FLUMINIMAGGIORE")
    {
        city = "D639";
        finished = true;
    }
    else if (city == "FLUSSIO")
    {
        city = "D640";
        finished = true;
    }
    else if (city == "FOBELLO")
    {
        city = "D641";
        finished = true;
    }
    else if (city == "FOGGIA")
    {
        city = "D643";
        finished = true;
    }
    else if (city == "FOGLIANISE")
    {
        city = "D644";
        finished = true;
    }
    else if (city == "FOGLIANOREDIPUGLIA")
    {
        city = "D645";
        finished = true;
    }
    else if (city == "FOGLIZZO")
    {
        city = "D646";
        finished = true;
    }
    else if (city == "FOIANODELLACHIANA")
    {
        city = "D649";
        finished = true;
    }
    else if (city == "FOIANODIVALFORTORE")
    {
        city = "D650";
        finished = true;
    }
    else if (city == "FOLGARIA")
    {
        city = "D651";
        finished = true;
    }
    else if (city == "FOLIGNANO")
    {
        city = "D652";
        finished = true;
    }
    else if (city == "FOLIGNO")
    {
        city = "D653";
        finished = true;
    }
    else if (city == "FOLLINA")
    {
        city = "D654";
        finished = true;
    }
    else if (city == "FOLLO")
    {
        city = "D655";
        finished = true;
    }
    else if (city == "FOLLONICA")
    {
        city = "D656";
        finished = true;
    }
    else if (city == "FOMBIO")
    {
        city = "D660";
        finished = true;
    }
    else if (city == "FONDACHELLI-FANTINA")
    {
        city = "D661";
        finished = true;
    }
    else if (city == "FONDI")
    {
        city = "D662";
        finished = true;
    }
    else if (city == "FONDO")
    {
        city = "D663";
        finished = true;
    }
    else if (city == "FONNI")
    {
        city = "D665";
        finished = true;
    }
    else if (city == "FONTAINEMORE")
    {
        city = "D666";
        finished = true;
    }
    else if (city == "FONTANALIRI")
    {
        city = "D667";
        finished = true;
    }
    else if (city == "FONTANAFREDDA")
    {
        city = "D670";
        finished = true;
    }
    else if (city == "FONTANAROSA")
    {
        city = "D671";
        finished = true;
    }
    else if (city == "FONTANELICE")
    {
        city = "D668";
        finished = true;
    }
    else if (city == "FONTANELLA")
    {
        city = "D672";
        finished = true;
    }
    else if (city == "FONTANELLATO")
    {
        city = "D673";
        finished = true;
    }
    else if (city == "FONTANELLE")
    {
        city = "D674";
        finished = true;
    }
    else if (city == "FONTANETOD'AGOGNA")
    {
        city = "D675";
        finished = true;
    }
    else if (city == "FONTANETTOPO")
    {
        city = "D676";
        finished = true;
    }
    else if (city == "FONTANIGORDA")
    {
        city = "D677";
        finished = true;
    }
    else if (city == "FONTANILE")
    {
        city = "D678";
        finished = true;
    }
    else if (city == "FONTANIVA")
    {
        city = "D679";
        finished = true;
    }
    else if (city == "FONTE")
    {
        city = "D680";
        finished = true;
    }
    else if (city == "FONTENUOVA")
    {
        city = "M309";
        finished = true;
    }
    else if (city == "FONTECCHIO")
    {
        city = "D681";
        finished = true;
    }
    else if (city == "FONTECHIARI")
    {
        city = "D682";
        finished = true;
    }
    else if (city == "FONTEGRECA")
    {
        city = "D683";
        finished = true;
    }
    else if (city == "FONTENO")
    {
        city = "D684";
        finished = true;
    }
    else if (city == "FONTEVIVO")
    {
        city = "D685";
        finished = true;
    }
    else if (city == "FONZASO")
    {
        city = "D686";
        finished = true;
    }
    else if (city == "FOPPOLO")
    {
        city = "D688";
        finished = true;
    }
    else if (city == "FORANO")
    {
        city = "D689";
        finished = true;
    }
    else if (city == "FORCE")
    {
        city = "D691";
        finished = true;
    }
    else if (city == "FORCHIA")
    {
        city = "D693";
        finished = true;
    }
    else if (city == "FORCOLA")
    {
        city = "D694";
        finished = true;
    }
    else if (city == "FORDONGIANUS")
    {
        city = "D695";
        finished = true;
    }
    else if (city == "FORENZA")
    {
        city = "D696";
        finished = true;
    }
    else if (city == "FORESTOSPARSO")
    {
        city = "D697";
        finished = true;
    }
    else if (city == "FORGARIANELFRIULI")
    {
        city = "D700";
        finished = true;
    }
    else if (city == "FORINO")
    {
        city = "D701";
        finished = true;
    }
    else if (city == "FORIO")
    {
        city = "D702";
        finished = true;
    }
    else if (city == "FORLI'")
    {
        city = "D704";
        finished = true;
    }
    else if (city == "FORLI'DELSANNIO")
    {
        city = "D703";
        finished = true;
    }
    else if (city == "FORLIMPOPOLI")
    {
        city = "D705";
        finished = true;
    }
    else if (city == "FORMAZZA")
    {
        city = "D706";
        finished = true;
    }
    else if (city == "FORMELLO")
    {
        city = "D707";
        finished = true;
    }
    else if (city == "FORMIA")
    {
        city = "D708";
        finished = true;
    }
    else if (city == "FORMICOLA")
    {
        city = "D709";
        finished = true;
    }
    else if (city == "FORMIGARA")
    {
        city = "D710";
        finished = true;
    }
    else if (city == "FORMIGINE")
    {
        city = "D711";
        finished = true;
    }
    else if (city == "FORMIGLIANA")
    {
        city = "D712";
        finished = true;
    }
    else if (city == "FORMIGNANA")
    {
        city = "D713";
        finished = true;
    }
    else if (city == "FORNACE")
    {
        city = "D714";
        finished = true;
    }
    else if (city == "FORNELLI")
    {
        city = "D715";
        finished = true;
    }
    else if (city == "FORNIAVOLTRI")
    {
        city = "D718";
        finished = true;
    }
    else if (city == "FORNIDISOPRA")
    {
        city = "D719";
        finished = true;
    }
    else if (city == "FORNIDISOTTO")
    {
        city = "D720";
        finished = true;
    }
    else if (city == "FORNOCANAVESE")
    {
        city = "D725";
        finished = true;
    }
    else if (city == "FORNODIZOLDO")
    {
        city = "D726";
        finished = true;
    }
    else if (city == "FORNOVODITARO")
    {
        city = "D728";
        finished = true;
    }
    else if (city == "FORNOVOSANGIOVANNI")
    {
        city = "D727";
        finished = true;
    }
    else if (city == "FORTEDEIMARMI")
    {
        city = "D730";
        finished = true;
    }
    else if (city == "FORTEZZA.FRANZENSFESTE.")
    {
        city = "D731";
        finished = true;
    }
    else if (city == "FORTUNAGO")
    {
        city = "D732";
        finished = true;
    }
    else if (city == "FORZAD'AGRO'")
    {
        city = "D733";
        finished = true;
    }
    else if (city == "FOSCIANDORA")
    {
        city = "D734";
        finished = true;
    }
    else if (city == "FOSDINOVO")
    {
        city = "D735";
        finished = true;
    }
    else if (city == "FOSSA")
    {
        city = "D736";
        finished = true;
    }
    else if (city == "FOSSACESIA")
    {
        city = "D738";
        finished = true;
    }
    else if (city == "FOSSALTADIPIAVE")
    {
        city = "D740";
        finished = true;
    }
    else if (city == "FOSSALTADIPORTOGRUARO")
    {
        city = "D741";
        finished = true;
    }
    else if (city == "FOSSALTO")
    {
        city = "D737";
        finished = true;
    }
    else if (city == "FOSSANO")
    {
        city = "D742";
        finished = true;
    }
    else if (city == "FOSSATODIVICO")
    {
        city = "D745";
        finished = true;
    }
    else if (city == "FOSSATOSERRALTA")
    {
        city = "D744";
        finished = true;
    }
    else if (city == "FOSSO'")
    {
        city = "D748";
        finished = true;
    }
    else if (city == "FOSSOMBRONE")
    {
        city = "D749";
        finished = true;
    }
    else if (city == "FOZA")
    {
        city = "D750";
        finished = true;
    }
    else if (city == "FRABOSASOPRANA")
    {
        city = "D751";
        finished = true;
    }
    else if (city == "FRABOSASOTTANA")
    {
        city = "D752";
        finished = true;
    }
    else if (city == "FRACONALTO")
    {
        city = "D559";
        finished = true;
    }
    else if (city == "FRAGAGNANO")
    {
        city = "D754";
        finished = true;
    }
    else if (city == "FRAGNETOL'ABATE")
    {
        city = "D755";
        finished = true;
    }
    else if (city == "FRAGNETOMONFORTE")
    {
        city = "D756";
        finished = true;
    }
    else if (city == "FRAINE")
    {
        city = "D757";
        finished = true;
    }
    else if (city == "FRAMURA")
    {
        city = "D758";
        finished = true;
    }
    else if (city == "FRANCAVILLAALMARE")
    {
        city = "D763";
        finished = true;
    }
    else if (city == "FRANCAVILLAANGITOLA")
    {
        city = "D762";
        finished = true;
    }
    else if (city == "FRANCAVILLABISIO")
    {
        city = "D759";
        finished = true;
    }
    else if (city == "FRANCAVILLAD'ETE")
    {
        city = "D760";
        finished = true;
    }
    else if (city == "FRANCAVILLADISICILIA")
    {
        city = "D765";
        finished = true;
    }
    else if (city == "FRANCAVILLAFONTANA")
    {
        city = "D761";
        finished = true;
    }
    else if (city == "FRANCAVILLAINSINNI")
    {
        city = "D766";
        finished = true;
    }
    else if (city == "FRANCAVILLAMARITTIMA")
    {
        city = "D764";
        finished = true;
    }
    else if (city == "FRANCICA")
    {
        city = "D767";
        finished = true;
    }
    else if (city == "FRANCOFONTE")
    {
        city = "D768";
        finished = true;
    }
    else if (city == "FRANCOLISE")
    {
        city = "D769";
        finished = true;
    }
    else if (city == "FRASCARO")
    {
        city = "D770";
        finished = true;
    }
    else if (city == "FRASCAROLO")
    {
        city = "D771";
        finished = true;
    }
    else if (city == "FRASCATI")
    {
        city = "D773";
        finished = true;
    }
    else if (city == "FRASCINETO")
    {
        city = "D774";
        finished = true;
    }
    else if (city == "FRASSILONGO")
    {
        city = "D775";
        finished = true;
    }
    else if (city == "FRASSINELLEPOLESINE")
    {
        city = "D776";
        finished = true;
    }
    else if (city == "FRASSINELLOMONFERRATO")
    {
        city = "D777";
        finished = true;
    }
    else if (city == "FRASSINETOPO")
    {
        city = "D780";
        finished = true;
    }
    else if (city == "FRASSINETTO")
    {
        city = "D781";
        finished = true;
    }
    else if (city == "FRASSINO")
    {
        city = "D782";
        finished = true;
    }
    else if (city == "FRASSINORO")
    {
        city = "D783";
        finished = true;
    }
    else if (city == "FRASSOSABINO")
    {
        city = "D785";
        finished = true;
    }
    else if (city == "FRASSOTELESINO")
    {
        city = "D784";
        finished = true;
    }
    else if (city == "FRATTAPOLESINE")
    {
        city = "D788";
        finished = true;
    }
    else if (city == "FRATTATODINA")
    {
        city = "D787";
        finished = true;
    }
    else if (city == "FRATTAMAGGIORE")
    {
        city = "D789";
        finished = true;
    }
    else if (city == "FRATTAMINORE")
    {
        city = "D790";
        finished = true;
    }
    else if (city == "FRATTEROSA")
    {
        city = "D791";
        finished = true;
    }
    else if (city == "FRAZZANO'")
    {
        city = "D793";
        finished = true;
    }
    else if (city == "FREGONA")
    {
        city = "D794";
        finished = true;
    }
    else if (city == "FRESAGRANDINARIA")
    {
        city = "D796";
        finished = true;
    }
    else if (city == "FRESONARA")
    {
        city = "D797";
        finished = true;
    }
    else if (city == "FRIGENTO")
    {
        city = "D798";
        finished = true;
    }
    else if (city == "FRIGNANO")
    {
        city = "D799";
        finished = true;
    }
    else if (city == "FRINCO")
    {
        city = "D802";
        finished = true;
    }
    else if (city == "FRISA")
    {
        city = "D803";
        finished = true;
    }
    else if (city == "FRISANCO")
    {
        city = "D804";
        finished = true;
    }
    else if (city == "FRONT")
    {
        city = "D805";
        finished = true;
    }
    else if (city == "FRONTINO")
    {
        city = "D807";
        finished = true;
    }
    else if (city == "FRONTONE")
    {
        city = "D808";
        finished = true;
    }
    else if (city == "FROSINONE")
    {
        city = "D810";
        finished = true;
    }
    else if (city == "FROSOLONE")
    {
        city = "D811";
        finished = true;
    }
    else if (city == "FROSSASCO")
    {
        city = "D812";
        finished = true;
    }
    else if (city == "FRUGAROLO")
    {
        city = "D813";
        finished = true;
    }
    else if (city == "FUBINEMONFERRATO")
    {
        city = "D814";
        finished = true;
    }
    else if (city == "FUCECCHIO")
    {
        city = "D815";
        finished = true;
    }
    else if (city == "FUIPIANOVALLEIMAGNA")
    {
        city = "D817";
        finished = true;
    }
    else if (city == "FUMANE")
    {
        city = "D818";
        finished = true;
    }
    else if (city == "FUMONE")
    {
        city = "D819";
        finished = true;
    }
    else if (city == "FUNES.VILLNOESS.")
    {
        city = "D821";
        finished = true;
    }
    else if (city == "FURCI")
    {
        city = "D823";
        finished = true;
    }
    else if (city == "FURCISICULO")
    {
        city = "D824";
        finished = true;
    }
    else if (city == "FURNARI")
    {
        city = "D825";
        finished = true;
    }
    else if (city == "FURORE")
    {
        city = "D826";
        finished = true;
    }
    else if (city == "FURTEI")
    {
        city = "D827";
        finished = true;
    }
    else if (city == "FUSCALDO")
    {
        city = "D828";
        finished = true;
    }
    else if (city == "FUSIGNANO")
    {
        city = "D829";
        finished = true;
    }
    else if (city == "FUSINE")
    {
        city = "D830";
        finished = true;
    }
    else if (city == "FUTANI")
    {
        city = "D832";
        finished = true;
    }
    else if (city == "GABBIONETABINANUOVA")
    {
        city = "D834";
        finished = true;
    }
    else if (city == "GABIANO")
    {
        city = "D835";
        finished = true;
    }
    else if (city == "GABICCEMARE")
    {
        city = "D836";
        finished = true;
    }
    else if (city == "GABY")
    {
        city = "D839";
        finished = true;
    }
    else if (city == "GADESCOPIEVEDELMONA")
    {
        city = "D841";
        finished = true;
    }
    else if (city == "GADONI")
    {
        city = "D842";
        finished = true;
    }
    else if (city == "GAETA")
    {
        city = "D843";
        finished = true;
    }
    else if (city == "GAGGI")
    {
        city = "D844";
        finished = true;
    }
    else if (city == "GAGGIANO")
    {
        city = "D845";
        finished = true;
    }
    else if (city == "GAGGIOMONTANO")
    {
        city = "D847";
        finished = true;
    }
    else if (city == "GAGLIANICO")
    {
        city = "D848";
        finished = true;
    }
    else if (city == "GAGLIANOATERNO")
    {
        city = "D850";
        finished = true;
    }
    else if (city == "GAGLIANOCASTELFERRATO")
    {
        city = "D849";
        finished = true;
    }
    else if (city == "GAGLIANODELCAPO")
    {
        city = "D851";
        finished = true;
    }
    else if (city == "GAGLIATO")
    {
        city = "D852";
        finished = true;
    }
    else if (city == "GAGLIOLE")
    {
        city = "D853";
        finished = true;
    }
    else if (city == "GAIARINE")
    {
        city = "D854";
        finished = true;
    }
    else if (city == "GAIBA")
    {
        city = "D855";
        finished = true;
    }
    else if (city == "GAIOLA")
    {
        city = "D856";
        finished = true;
    }
    else if (city == "GAIOLEINCHIANTI")
    {
        city = "D858";
        finished = true;
    }
    else if (city == "GAIRO")
    {
        city = "D859";
        finished = true;
    }
    else if (city == "GAIS.GAIS.")
    {
        city = "D860";
        finished = true;
    }
    else if (city == "GALATIMAMERTINO")
    {
        city = "D861";
        finished = true;
    }
    else if (city == "GALATINA")
    {
        city = "D862";
        finished = true;
    }
    else if (city == "GALATONE")
    {
        city = "D863";
        finished = true;
    }
    else if (city == "GALATRO")
    {
        city = "D864";
        finished = true;
    }
    else if (city == "GALBIATE")
    {
        city = "D865";
        finished = true;
    }
    else if (city == "GALEATA")
    {
        city = "D867";
        finished = true;
    }
    else if (city == "GALGAGNANO")
    {
        city = "D868";
        finished = true;
    }
    else if (city == "GALLARATE")
    {
        city = "D869";
        finished = true;
    }
    else if (city == "GALLESE")
    {
        city = "D870";
        finished = true;
    }
    else if (city == "GALLIATE")
    {
        city = "D872";
        finished = true;
    }
    else if (city == "GALLIATELOMBARDO")
    {
        city = "D871";
        finished = true;
    }
    else if (city == "GALLIAVOLA")
    {
        city = "D873";
        finished = true;
    }
    else if (city == "GALLICANO")
    {
        city = "D874";
        finished = true;
    }
    else if (city == "GALLICANONELLAZIO")
    {
        city = "D875";
        finished = true;
    }
    else if (city == "GALLICCHIO")
    {
        city = "D876";
        finished = true;
    }
    else if (city == "GALLIERA")
    {
        city = "D878";
        finished = true;
    }
    else if (city == "GALLIERAVENETA")
    {
        city = "D879";
        finished = true;
    }
    else if (city == "GALLINARO")
    {
        city = "D881";
        finished = true;
    }
    else if (city == "GALLIO")
    {
        city = "D882";
        finished = true;
    }
    else if (city == "GALLIPOLI")
    {
        city = "D883";
        finished = true;
    }
    else if (city == "GALLOMATESE")
    {
        city = "D884";
        finished = true;
    }
    else if (city == "GALLODORO")
    {
        city = "D885";
        finished = true;
    }
    else if (city == "GALLUCCIO")
    {
        city = "D886";
        finished = true;
    }
    else if (city == "GALTELLI'")
    {
        city = "D888";
        finished = true;
    }
    else if (city == "GALZIGNANOTERME")
    {
        city = "D889";
        finished = true;
    }
    else if (city == "GAMALERO")
    {
        city = "D890";
        finished = true;
    }
    else if (city == "GAMBARA")
    {
        city = "D891";
        finished = true;
    }
    else if (city == "GAMBARANA")
    {
        city = "D892";
        finished = true;
    }
    else if (city == "GAMBASCA")
    {
        city = "D894";
        finished = true;
    }
    else if (city == "GAMBASSITERME")
    {
        city = "D895";
        finished = true;
    }
    else if (city == "GAMBATESA")
    {
        city = "D896";
        finished = true;
    }
    else if (city == "GAMBELLARA")
    {
        city = "D897";
        finished = true;
    }
    else if (city == "GAMBERALE")
    {
        city = "D898";
        finished = true;
    }
    else if (city == "GAMBETTOLA")
    {
        city = "D899";
        finished = true;
    }
    else if (city == "GAMBOLO'")
    {
        city = "D901";
        finished = true;
    }
    else if (city == "GAMBUGLIANO")
    {
        city = "D902";
        finished = true;
    }
    else if (city == "GANDELLINO")
    {
        city = "D903";
        finished = true;
    }
    else if (city == "GANDINO")
    {
        city = "D905";
        finished = true;
    }
    else if (city == "GANDOSSO")
    {
        city = "D906";
        finished = true;
    }
    else if (city == "GANGI")
    {
        city = "D907";
        finished = true;
    }
    else if (city == "GARAGUSO")
    {
        city = "D909";
        finished = true;
    }
    else if (city == "GARBAGNA")
    {
        city = "D910";
        finished = true;
    }
    else if (city == "GARBAGNANOVARESE")
    {
        city = "D911";
        finished = true;
    }
    else if (city == "GARBAGNATEMILANESE")
    {
        city = "D912";
        finished = true;
    }
    else if (city == "GARBAGNATEMONASTERO")
    {
        city = "D913";
        finished = true;
    }
    else if (city == "GARDA")
    {
        city = "D915";
        finished = true;
    }
    else if (city == "GARDONERIVIERA")
    {
        city = "D917";
        finished = true;
    }
    else if (city == "GARDONEVALTROMPIA")
    {
        city = "D918";
        finished = true;
    }
    else if (city == "GARESSIO")
    {
        city = "D920";
        finished = true;
    }
    else if (city == "GARGALLO")
    {
        city = "D921";
        finished = true;
    }
    else if (city == "GARGAZZONE.GARGAZON.")
    {
        city = "D923";
        finished = true;
    }
    else if (city == "GARGNANO")
    {
        city = "D924";
        finished = true;
    }
    else if (city == "GARLASCO")
    {
        city = "D925";
        finished = true;
    }
    else if (city == "GARLATE")
    {
        city = "D926";
        finished = true;
    }
    else if (city == "GARLENDA")
    {
        city = "D927";
        finished = true;
    }
    else if (city == "GARNIGATERME")
    {
        city = "D928";
        finished = true;
    }
    else if (city == "GARZENO")
    {
        city = "D930";
        finished = true;
    }
    else if (city == "GARZIGLIANA")
    {
        city = "D931";
        finished = true;
    }
    else if (city == "GASPERINA")
    {
        city = "D932";
        finished = true;
    }
    else if (city == "GASSINOTORINESE")
    {
        city = "D933";
        finished = true;
    }
    else if (city == "GATTATICO")
    {
        city = "D934";
        finished = true;
    }
    else if (city == "GATTEO")
    {
        city = "D935";
        finished = true;
    }
    else if (city == "GATTICO")
    {
        city = "D937";
        finished = true;
    }
    else if (city == "GATTICO-VERUNO")
    {
        city = "M416";
        finished = true;
    }
    else if (city == "GATTINARA")
    {
        city = "D938";
        finished = true;
    }
    else if (city == "GAVARDO")
    {
        city = "D940";
        finished = true;
    }
    else if (city == "GAVAZZANA")
    {
        city = "D941";
        finished = true;
    }
    else if (city == "GAVELLO")
    {
        city = "D942";
        finished = true;
    }
    else if (city == "GAVERINATERME")
    {
        city = "D943";
        finished = true;
    }
    else if (city == "GAVI")
    {
        city = "D944";
        finished = true;
    }
    else if (city == "GAVIGNANO")
    {
        city = "D945";
        finished = true;
    }
    else if (city == "GAVIRATE")
    {
        city = "D946";
        finished = true;
    }
    else if (city == "GAVOI")
    {
        city = "D947";
        finished = true;
    }
    else if (city == "GAVORRANO")
    {
        city = "D948";
        finished = true;
    }
    else if (city == "GAZOLDODEGLIIPPOLITI")
    {
        city = "D949";
        finished = true;
    }
    else if (city == "GAZZADASCHIANNO")
    {
        city = "D951";
        finished = true;
    }
    else if (city == "GAZZANIGA")
    {
        city = "D952";
        finished = true;
    }
    else if (city == "GAZZO")
    {
        city = "D956";
        finished = true;
    }
    else if (city == "GAZZOVERONESE")
    {
        city = "D957";
        finished = true;
    }
    else if (city == "GAZZOLA")
    {
        city = "D958";
        finished = true;
    }
    else if (city == "GAZZUOLO")
    {
        city = "D959";
        finished = true;
    }
    else if (city == "GELA")
    {
        city = "D960";
        finished = true;
    }
    else if (city == "GEMMANO")
    {
        city = "D961";
        finished = true;
    }
    else if (city == "GEMONADELFRIULI")
    {
        city = "D962";
        finished = true;
    }
    else if (city == "GEMONIO")
    {
        city = "D963";
        finished = true;
    }
    else if (city == "GENAZZANO")
    {
        city = "D964";
        finished = true;
    }
    else if (city == "GENGA")
    {
        city = "D965";
        finished = true;
    }
    else if (city == "GENIVOLTA")
    {
        city = "D966";
        finished = true;
    }
    else if (city == "GENOLA")
    {
        city = "D967";
        finished = true;
    }
    else if (city == "GENONI")
    {
        city = "D968";
        finished = true;
    }
    else if (city == "GENOVA")
    {
        city = "D969";
        finished = true;
    }
    else if (city == "GENURI")
    {
        city = "D970";
        finished = true;
    }
    else if (city == "GENZANODILUCANIA")
    {
        city = "D971";
        finished = true;
    }
    else if (city == "GENZANODIROMA")
    {
        city = "D972";
        finished = true;
    }
    else if (city == "GENZONE")
    {
        city = "D973";
        finished = true;
    }
    else if (city == "GERALARIO")
    {
        city = "D974";
        finished = true;
    }
    else if (city == "GERACE")
    {
        city = "D975";
        finished = true;
    }
    else if (city == "GERACISICULO")
    {
        city = "D977";
        finished = true;
    }
    else if (city == "GERANO")
    {
        city = "D978";
        finished = true;
    }
    else if (city == "GERENZAGO")
    {
        city = "D980";
        finished = true;
    }
    else if (city == "GERENZANO")
    {
        city = "D981";
        finished = true;
    }
    else if (city == "GERGEI")
    {
        city = "D982";
        finished = true;
    }
    else if (city == "GERMAGNANO")
    {
        city = "D983";
        finished = true;
    }
    else if (city == "GERMAGNO")
    {
        city = "D984";
        finished = true;
    }
    else if (city == "GERMASINO")
    {
        city = "D986";
        finished = true;
    }
    else if (city == "GERMIGNAGA")
    {
        city = "D987";
        finished = true;
    }
    else if (city == "GEROCARNE")
    {
        city = "D988";
        finished = true;
    }
    else if (city == "GEROLAALTA")
    {
        city = "D990";
        finished = true;
    }
    else if (city == "GEROSA")
    {
        city = "D991";
        finished = true;
    }
    else if (city == "GERREDE'CAPRIOLI")
    {
        city = "D993";
        finished = true;
    }
    else if (city == "GESICO")
    {
        city = "D994";
        finished = true;
    }
    else if (city == "GESSATE")
    {
        city = "D995";
        finished = true;
    }
    else if (city == "GESSOPALENA")
    {
        city = "D996";
        finished = true;
    }
    else if (city == "GESTURI")
    {
        city = "D997";
        finished = true;
    }
    else if (city == "GESUALDO")
    {
        city = "D998";
        finished = true;
    }
    else if (city == "GHEDI")
    {
        city = "D999";
        finished = true;
    }
    else if (city == "GHEMME")
    {
        city = "E001";
        finished = true;
    }
    else if (city == "GHelse ifFA")
    {
        city = "E003";
        finished = true;
    }
    else if (city == "GHILARZA")
    {
        city = "E004";
        finished = true;
    }
    else if (city == "GHISALBA")
    {
        city = "E006";
        finished = true;
    }
    else if (city == "GHISLARENGO")
    {
        city = "E007";
        finished = true;
    }
    else if (city == "GIACCIANOCONBARUCHELLA")
    {
        city = "E008";
        finished = true;
    }
    else if (city == "GIAGLIONE")
    {
        city = "E009";
        finished = true;
    }
    else if (city == "GIANICO")
    {
        city = "E010";
        finished = true;
    }
    else if (city == "GIANODELL'UMBRIA")
    {
        city = "E012";
        finished = true;
    }
    else if (city == "GIANOVETUSTO")
    {
        city = "E011";
        finished = true;
    }
    else if (city == "GIARDINELLO")
    {
        city = "E013";
        finished = true;
    }
    else if (city == "GIARDINI-NAXOS")
    {
        city = "E014";
        finished = true;
    }
    else if (city == "GIAROLE")
    {
        city = "E015";
        finished = true;
    }
    else if (city == "GIARRATANA")
    {
        city = "E016";
        finished = true;
    }
    else if (city == "GIARRE")
    {
        city = "E017";
        finished = true;
    }
    else if (city == "GIAVE")
    {
        city = "E019";
        finished = true;
    }
    else if (city == "GIAVENO")
    {
        city = "E020";
        finished = true;
    }
    else if (city == "GIAVERADELMONTELLO")
    {
        city = "E021";
        finished = true;
    }
    else if (city == "GIBA")
    {
        city = "E022";
        finished = true;
    }
    else if (city == "GIBELLINA")
    {
        city = "E023";
        finished = true;
    }
    else if (city == "Gelse ifFLENGA")
    {
        city = "E024";
        finished = true;
    }
    else if (city == "Gelse ifFONE")
    {
        city = "E025";
        finished = true;
    }
    else if (city == "Gelse ifFONISEICASALI")
    {
        city = "E026";
        finished = true;
    }
    else if (city == "Gelse ifFONIVALLEPIANA")
    {
        city = "E027";
        finished = true;
    }
    else if (city == "GIGNESE")
    {
        city = "E028";
        finished = true;
    }
    else if (city == "GIGNOD")
    {
        city = "E029";
        finished = true;
    }
    else if (city == "GILDONE")
    {
        city = "E030";
        finished = true;
    }
    else if (city == "GIMIGLIANO")
    {
        city = "E031";
        finished = true;
    }
    else if (city == "GINESTRA")
    {
        city = "E033";
        finished = true;
    }
    else if (city == "GINESTRADEGLISCHIAVONI")
    {
        city = "E034";
        finished = true;
    }
    else if (city == "GINOSA")
    {
        city = "E036";
        finished = true;
    }
    else if (city == "GIOI")
    {
        city = "E037";
        finished = true;
    }
    else if (city == "GIOIADEIMARSI")
    {
        city = "E040";
        finished = true;
    }
    else if (city == "GIOIADELCOLLE")
    {
        city = "E038";
        finished = true;
    }
    else if (city == "GIOIASANNITICA")
    {
        city = "E039";
        finished = true;
    }
    else if (city == "GIOIATAURO")
    {
        city = "E041";
        finished = true;
    }
    else if (city == "GIOIOSAIONICA")
    {
        city = "E044";
        finished = true;
    }
    else if (city == "GIOIOSAMAREA")
    {
        city = "E043";
        finished = true;
    }
    else if (city == "GIOVE")
    {
        city = "E045";
        finished = true;
    }
    else if (city == "GIOVINAZZO")
    {
        city = "E047";
        finished = true;
    }
    else if (city == "GIOVO")
    {
        city = "E048";
        finished = true;
    }
    else if (city == "GIRASOLE")
    {
        city = "E049";
        finished = true;
    }
    else if (city == "GIRelse ifALCO")
    {
        city = "E050";
        finished = true;
    }
    else if (city == "GIRONICO")
    {
        city = "E051";
        finished = true;
    }
    else if (city == "GISSI")
    {
        city = "E052";
        finished = true;
    }
    else if (city == "GIUGGIANELLO")
    {
        city = "E053";
        finished = true;
    }
    else if (city == "GIUGLIANOINCAMPANIA")
    {
        city = "E054";
        finished = true;
    }
    else if (city == "GIULIANA")
    {
        city = "E055";
        finished = true;
    }
    else if (city == "GIULIANODIROMA")
    {
        city = "E057";
        finished = true;
    }
    else if (city == "GIULIANOTEATINO")
    {
        city = "E056";
        finished = true;
    }
    else if (city == "GIULIANOVA")
    {
        city = "E058";
        finished = true;
    }
    else if (city == "GIUNCUGNANO")
    {
        city = "E059";
        finished = true;
    }
    else if (city == "GIUNGANO")
    {
        city = "E060";
        finished = true;
    }
    else if (city == "GIURDIGNANO")
    {
        city = "E061";
        finished = true;
    }
    else if (city == "GIUSSAGO")
    {
        city = "E062";
        finished = true;
    }
    else if (city == "GIUSSANO")
    {
        city = "E063";
        finished = true;
    }
    else if (city == "GIUSTENICE")
    {
        city = "E064";
        finished = true;
    }
    else if (city == "GIUSTINO")
    {
        city = "E065";
        finished = true;
    }
    else if (city == "GIUSVALLA")
    {
        city = "E066";
        finished = true;
    }
    else if (city == "GIVOLETTO")
    {
        city = "E067";
        finished = true;
    }
    else if (city == "GIZZERIA")
    {
        city = "E068";
        finished = true;
    }
    else if (city == "GLORENZA.GLURNS.")
    {
        city = "E069";
        finished = true;
    }
    else if (city == "GODEGADISANT'URBANO")
    {
        city = "E071";
        finished = true;
    }
    else if (city == "GODIASCOSALICETERME")
    {
        city = "E072";
        finished = true;
    }
    else if (city == "GODRANO")
    {
        city = "E074";
        finished = true;
    }
    else if (city == "GOITO")
    {
        city = "E078";
        finished = true;
    }
    else if (city == "GOLASECCA")
    {
        city = "E079";
        finished = true;
    }
    else if (city == "GOLFERENZO")
    {
        city = "E081";
        finished = true;
    }
    else if (city == "GOLFOARANCI")
    {
        city = "M274";
        finished = true;
    }
    else if (city == "GOMBITO")
    {
        city = "E082";
        finished = true;
    }
    else if (city == "GONARS")
    {
        city = "E083";
        finished = true;
    }
    else if (city == "GONI")
    {
        city = "E084";
        finished = true;
    }
    else if (city == "GONNESA")
    {
        city = "E086";
        finished = true;
    }
    else if (city == "GONNOSCODINA")
    {
        city = "E087";
        finished = true;
    }
    else if (city == "GONNOSFANADIGA")
    {
        city = "E085";
        finished = true;
    }
    else if (city == "GONNOSNO'")
    {
        city = "D585";
        finished = true;
    }
    else if (city == "GONNOSTRAMATZA")
    {
        city = "E088";
        finished = true;
    }
    else if (city == "GONZAGA")
    {
        city = "E089";
        finished = true;
    }
    else if (city == "GORDONA")
    {
        city = "E090";
        finished = true;
    }
    else if (city == "GORGA")
    {
        city = "E091";
        finished = true;
    }
    else if (city == "GORGOALMONTICANO")
    {
        city = "E092";
        finished = true;
    }
    else if (city == "GORGOGLIONE")
    {
        city = "E093";
        finished = true;
    }
    else if (city == "GORGONZOLA")
    {
        city = "E094";
        finished = true;
    }
    else if (city == "GORIANOSICOLI")
    {
        city = "E096";
        finished = true;
    }
    else if (city == "GORIZIA")
    {
        city = "E098";
        finished = true;
    }
    else if (city == "GORLAMAGGIORE")
    {
        city = "E101";
        finished = true;
    }
    else if (city == "GORLAMINORE")
    {
        city = "E102";
        finished = true;
    }
    else if (city == "GORLAGO")
    {
        city = "E100";
        finished = true;
    }
    else if (city == "GORLE")
    {
        city = "E103";
        finished = true;
    }
    else if (city == "GORNATE-OLONA")
    {
        city = "E104";
        finished = true;
    }
    else if (city == "GORNO")
    {
        city = "E106";
        finished = true;
    }
    else if (city == "GORO")
    {
        city = "E107";
        finished = true;
    }
    else if (city == "GORRETO")
    {
        city = "E109";
        finished = true;
    }
    else if (city == "GORZEGNO")
    {
        city = "E111";
        finished = true;
    }
    else if (city == "GOSALDO")
    {
        city = "E113";
        finished = true;
    }
    else if (city == "GOSSOLENGO")
    {
        city = "E114";
        finished = true;
    }
    else if (city == "GOTTASECCA")
    {
        city = "E115";
        finished = true;
    }
    else if (city == "GOTTOLENGO")
    {
        city = "E116";
        finished = true;
    }
    else if (city == "GOVONE")
    {
        city = "E118";
        finished = true;
    }
    else if (city == "GOZZANO")
    {
        city = "E120";
        finished = true;
    }
    else if (city == "GRADARA")
    {
        city = "E122";
        finished = true;
    }
    else if (city == "GRADISCAD'ISONZO")
    {
        city = "E124";
        finished = true;
    }
    else if (city == "GRADO")
    {
        city = "E125";
        finished = true;
    }
    else if (city == "GRADOLI")
    {
        city = "E126";
        finished = true;
    }
    else if (city == "GRAFFIGNANA")
    {
        city = "E127";
        finished = true;
    }
    else if (city == "GRAFFIGNANO")
    {
        city = "E128";
        finished = true;
    }
    else if (city == "GRAGLIA")
    {
        city = "E130";
        finished = true;
    }
    else if (city == "GRAGNANO")
    {
        city = "E131";
        finished = true;
    }
    else if (city == "GRAGNANOTREBBIENSE")
    {
        city = "E132";
        finished = true;
    }
    else if (city == "GRAMMICHELE")
    {
        city = "E133";
        finished = true;
    }
    else if (city == "GRANA")
    {
        city = "E134";
        finished = true;
    }
    else if (city == "GRANAGLIONE")
    {
        city = "E135";
        finished = true;
    }
    else if (city == "GRANAROLODELL'EMILIA")
    {
        city = "E136";
        finished = true;
    }
    else if (city == "GRANCONA")
    {
        city = "E138";
        finished = true;
    }
    else if (city == "GRANDATE")
    {
        city = "E139";
        finished = true;
    }
    else if (city == "GRANDOLAEDUNITI")
    {
        city = "E141";
        finished = true;
    }
    else if (city == "GRANITI")
    {
        city = "E142";
        finished = true;
    }
    else if (city == "GRANOZZOCONMONTICELLO")
    {
        city = "E143";
        finished = true;
    }
    else if (city == "GRANTOLA")
    {
        city = "E144";
        finished = true;
    }
    else if (city == "GRANTORTO")
    {
        city = "E145";
        finished = true;
    }
    else if (city == "GRANZE")
    {
        city = "E146";
        finished = true;
    }
    else if (city == "GRASSANO")
    {
        city = "E147";
        finished = true;
    }
    else if (city == "GRASSOBBIO")
    {
        city = "E148";
        finished = true;
    }
    else if (city == "GRATTERI")
    {
        city = "E149";
        finished = true;
    }
    else if (city == "GRAUNO")
    {
        city = "E150";
        finished = true;
    }
    else if (city == "GRAVEDONA")
    {
        city = "E151";
        finished = true;
    }
    else if (city == "GRAVEDONAEDUNITI")
    {
        city = "M315";
        finished = true;
    }
    else if (city == "GRAVELLONALOMELLINA")
    {
        city = "E152";
        finished = true;
    }
    else if (city == "GRAVELLONATOCE")
    {
        city = "E153";
        finished = true;
    }
    else if (city == "GRAVERE")
    {
        city = "E154";
        finished = true;
    }
    else if (city == "GRAVINADICATANIA")
    {
        city = "E156";
        finished = true;
    }
    else if (city == "GRAVINAINPUGLIA")
    {
        city = "E155";
        finished = true;
    }
    else if (city == "GRAZZANISE")
    {
        city = "E158";
        finished = true;
    }
    else if (city == "GRAZZANOBADOGLIO")
    {
        city = "E159";
        finished = true;
    }
    else if (city == "GRECCIO")
    {
        city = "E160";
        finished = true;
    }
    else if (city == "GRECI")
    {
        city = "E161";
        finished = true;
    }
    else if (city == "GREGGIO")
    {
        city = "E163";
        finished = true;
    }
    else if (city == "GREMIASCO")
    {
        city = "E164";
        finished = true;
    }
    else if (city == "GRESSAN")
    {
        city = "E165";
        finished = true;
    }
    else if (city == "GRESSONEY-LA-TRINITE'")
    {
        city = "E167";
        finished = true;
    }
    else if (city == "GRESSONEY-SAINT-JEAN")
    {
        city = "E168";
        finished = true;
    }
    else if (city == "GREVEINCHIANTI")
    {
        city = "E169";
        finished = true;
    }
    else if (city == "GREZZAGO")
    {
        city = "E170";
        finished = true;
    }
    else if (city == "GREZZANA")
    {
        city = "E171";
        finished = true;
    }
    else if (city == "GRIANTE")
    {
        city = "E172";
        finished = true;
    }
    else if (city == "GRICIGNANODIAVERSA")
    {
        city = "E173";
        finished = true;
    }
    else if (city == "GRIGNASCO")
    {
        city = "E177";
        finished = true;
    }
    else if (city == "GRIGNO")
    {
        city = "E178";
        finished = true;
    }
    else if (city == "GRIMACCO")
    {
        city = "E179";
        finished = true;
    }
    else if (city == "GRIMALDI")
    {
        city = "E180";
        finished = true;
    }
    else if (city == "GRINZANECAVOUR")
    {
        city = "E182";
        finished = true;
    }
    else if (city == "GRISIGNANODIZOCCO")
    {
        city = "E184";
        finished = true;
    }
    else if (city == "GRISOLIA")
    {
        city = "E185";
        finished = true;
    }
    else if (city == "GRIZZANAMORANDI")
    {
        city = "E187";
        finished = true;
    }
    else if (city == "GROGNARDO")
    {
        city = "E188";
        finished = true;
    }
    else if (city == "GROMO")
    {
        city = "E189";
        finished = true;
    }
    else if (city == "GRONDONA")
    {
        city = "E191";
        finished = true;
    }
    else if (city == "GRONE")
    {
        city = "E192";
        finished = true;
    }
    else if (city == "GRONTARDO")
    {
        city = "E193";
        finished = true;
    }
    else if (city == "GROPELLOCAIROLI")
    {
        city = "E195";
        finished = true;
    }
    else if (city == "GROPPARELLO")
    {
        city = "E196";
        finished = true;
    }
    else if (city == "GROSCAVALLO")
    {
        city = "E199";
        finished = true;
    }
    else if (city == "GROSIO")
    {
        city = "E200";
        finished = true;
    }
    else if (city == "GROSOTTO")
    {
        city = "E201";
        finished = true;
    }
    else if (city == "GROSSETO")
    {
        city = "E202";
        finished = true;
    }
    else if (city == "GROSSO")
    {
        city = "E203";
        finished = true;
    }
    else if (city == "GROTTAFERRATA")
    {
        city = "E204";
        finished = true;
    }
    else if (city == "GROTTAGLIE")
    {
        city = "E205";
        finished = true;
    }
    else if (city == "GROTTAMINARDA")
    {
        city = "E206";
        finished = true;
    }
    else if (city == "GROTTAMMARE")
    {
        city = "E207";
        finished = true;
    }
    else if (city == "GROTTAZZOLINA")
    {
        city = "E208";
        finished = true;
    }
    else if (city == "GROTTE")
    {
        city = "E209";
        finished = true;
    }
    else if (city == "GROTTEDICASTRO")
    {
        city = "E210";
        finished = true;
    }
    else if (city == "GROTTERIA")
    {
        city = "E212";
        finished = true;
    }
    else if (city == "GROTTOLE")
    {
        city = "E213";
        finished = true;
    }
    else if (city == "GROTTOLELLA")
    {
        city = "E214";
        finished = true;
    }
    else if (city == "GRUARO")
    {
        city = "E215";
        finished = true;
    }
    else if (city == "GRUGLIASCO")
    {
        city = "E216";
        finished = true;
    }
    else if (city == "GRUMELLOCREMONESEEDUNITI")
    {
        city = "E217";
        finished = true;
    }
    else if (city == "GRUMELLODELMONTE")
    {
        city = "E219";
        finished = true;
    }
    else if (city == "GRUMENTONOVA")
    {
        city = "E221";
        finished = true;
    }
    else if (city == "GRUMES")
    {
        city = "E222";
        finished = true;
    }
    else if (city == "GRUMOAPPULA")
    {
        city = "E223";
        finished = true;
    }
    else if (city == "GRUMONEVANO")
    {
        city = "E224";
        finished = true;
    }
    else if (city == "GRUMOLODELLEABBADESSE")
    {
        city = "E226";
        finished = true;
    }
    else if (city == "GUAGNANO")
    {
        city = "E227";
        finished = true;
    }
    else if (city == "GUALDO")
    {
        city = "E228";
        finished = true;
    }
    else if (city == "GUALDOCATTANEO")
    {
        city = "E229";
        finished = true;
    }
    else if (city == "GUALDOTADINO")
    {
        city = "E230";
        finished = true;
    }
    else if (city == "GUALTIERI")
    {
        city = "E232";
        finished = true;
    }
    else if (city == "GUALTIERISICAMINO'")
    {
        city = "E233";
        finished = true;
    }
    else if (city == "GUAMAGGIORE")
    {
        city = "E234";
        finished = true;
    }
    else if (city == "GUANZATE")
    {
        city = "E235";
        finished = true;
    }
    else if (city == "GUARCINO")
    {
        city = "E236";
        finished = true;
    }
    else if (city == "GUARDAVENETA")
    {
        city = "E240";
        finished = true;
    }
    else if (city == "GUARDABOSONE")
    {
        city = "E237";
        finished = true;
    }
    else if (city == "GUARDAMIGLIO")
    {
        city = "E238";
        finished = true;
    }
    else if (city == "GUARDAVALLE")
    {
        city = "E239";
        finished = true;
    }
    else if (city == "GUARDEA")
    {
        city = "E241";
        finished = true;
    }
    else if (city == "GUARDIALOMBARDI")
    {
        city = "E245";
        finished = true;
    }
    else if (city == "GUARDIAPERTICARA")
    {
        city = "E246";
        finished = true;
    }
    else if (city == "GUARDIAPIEMONTESE")
    {
        city = "E242";
        finished = true;
    }
    else if (city == "GUARDIASANFRAMONDI")
    {
        city = "E249";
        finished = true;
    }
    else if (city == "GUARDIAGRELE")
    {
        city = "E243";
        finished = true;
    }
    else if (city == "GUARDIALFIERA")
    {
        city = "E244";
        finished = true;
    }
    else if (city == "GUARDIAREGIA")
    {
        city = "E248";
        finished = true;
    }
    else if (city == "GUARDISTALLO")
    {
        city = "E250";
        finished = true;
    }
    else if (city == "GUARENE")
    {
        city = "E251";
        finished = true;
    }
    else if (city == "GUASILA")
    {
        city = "E252";
        finished = true;
    }
    else if (city == "GUASTALLA")
    {
        city = "E253";
        finished = true;
    }
    else if (city == "GUAZZORA")
    {
        city = "E255";
        finished = true;
    }
    else if (city == "GUBBIO")
    {
        city = "E256";
        finished = true;
    }
    else if (city == "GUDOVISCONTI")
    {
        city = "E258";
        finished = true;
    }
    else if (city == "GUGLIONESI")
    {
        city = "E259";
        finished = true;
    }
    else if (city == "GUIDIZZOLO")
    {
        city = "E261";
        finished = true;
    }
    else if (city == "GUIDONIAMONTECELIO")
    {
        city = "E263";
        finished = true;
    }
    else if (city == "GUIGLIA")
    {
        city = "E264";
        finished = true;
    }
    else if (city == "GUILMI")
    {
        city = "E266";
        finished = true;
    }
    else if (city == "GURRO")
    {
        city = "E269";
        finished = true;
    }
    else if (city == "GUSPINI")
    {
        city = "E270";
        finished = true;
    }
    else if (city == "GUSSAGO")
    {
        city = "E271";
        finished = true;
    }
    else if (city == "GUSSOLA")
    {
        city = "E272";
        finished = true;
    }
    else if (city == "HONE")
    {
        city = "E273";
        finished = true;
    }
    else if (city == "IDRO")
    {
        city = "E280";
        finished = true;
    }
    else if (city == "IGLESIAS")
    {
        city = "E281";
        finished = true;
    }
    else if (city == "IGLIANO")
    {
        city = "E282";
        finished = true;
    }
    else if (city == "ILBONO")
    {
        city = "E283";
        finished = true;
    }
    else if (city == "ILLASI")
    {
        city = "E284";
        finished = true;
    }
    else if (city == "ILLORAI")
    {
        city = "E285";
        finished = true;
    }
    else if (city == "IMBERSAGO")
    {
        city = "E287";
        finished = true;
    }
    else if (city == "IMER")
    {
        city = "E288";
        finished = true;
    }
    else if (city == "IMOLA")
    {
        city = "E289";
        finished = true;
    }
    else if (city == "IMPERIA")
    {
        city = "E290";
        finished = true;
    }
    else if (city == "IMPRUNETA")
    {
        city = "E291";
        finished = true;
    }
    else if (city == "INARZO")
    {
        city = "E292";
        finished = true;
    }
    else if (city == "INCISAINVALD'ARNO")
    {
        city = "E296";
        finished = true;
    }
    else if (city == "INCISASCAPACCINO")
    {
        city = "E295";
        finished = true;
    }
    else if (city == "INCUDINE")
    {
        city = "E297";
        finished = true;
    }
    else if (city == "INDUNOOLONA")
    {
        city = "E299";
        finished = true;
    }
    else if (city == "INGRIA")
    {
        city = "E301";
        finished = true;
    }
    else if (city == "INTRAGNA")
    {
        city = "E304";
        finished = true;
    }
    else if (city == "INTROBIO")
    {
        city = "E305";
        finished = true;
    }
    else if (city == "INTROD")
    {
        city = "E306";
        finished = true;
    }
    else if (city == "INTRODACQUA")
    {
        city = "E307";
        finished = true;
    }
    else if (city == "INTROZZO")
    {
        city = "E308";
        finished = true;
    }
    else if (city == "INVERIGO")
    {
        city = "E309";
        finished = true;
    }
    else if (city == "INVERNOEMONTELEONE")
    {
        city = "E310";
        finished = true;
    }
    else if (city == "INVERSOPINASCA")
    {
        city = "E311";
        finished = true;
    }
    else if (city == "INVERUNO")
    {
        city = "E313";
        finished = true;
    }
    else if (city == "INVORIO")
    {
        city = "E314";
        finished = true;
    }
    else if (city == "INZAGO")
    {
        city = "E317";
        finished = true;
    }
    else if (city == "IONADI")
    {
        city = "E321";
        finished = true;
    }
    else if (city == "IRGOLI")
    {
        city = "E323";
        finished = true;
    }
    else if (city == "IRMA")
    {
        city = "E325";
        finished = true;
    }
    else if (city == "IRSINA")
    {
        city = "E326";
        finished = true;
    }
    else if (city == "ISASCA")
    {
        city = "E327";
        finished = true;
    }
    else if (city == "ISCASULLOIONIO")
    {
        city = "E328";
        finished = true;
    }
    else if (city == "ISCHIA")
    {
        city = "E329";
        finished = true;
    }
    else if (city == "ISCHIADICASTRO")
    {
        city = "E330";
        finished = true;
    }
    else if (city == "ISCHITELLA")
    {
        city = "E332";
        finished = true;
    }
    else if (city == "ISEO")
    {
        city = "E333";
        finished = true;
    }
    else if (city == "ISERA")
    {
        city = "E334";
        finished = true;
    }
    else if (city == "ISERNIA")
    {
        city = "E335";
        finished = true;
    }
    else if (city == "ISILI")
    {
        city = "E336";
        finished = true;
    }
    else if (city == "ISNELLO")
    {
        city = "E337";
        finished = true;
    }
    else if (city == "ISOLAD'ASTI")
    {
        city = "E338";
        finished = true;
    }
    else if (city == "ISOLADELCANTONE")
    {
        city = "E341";
        finished = true;
    }
    else if (city == "ISOLADELGIGLIO")
    {
        city = "E348";
        finished = true;
    }
    else if (city == "ISOLADELGRANSASSOD'ITALIA")
    {
        city = "E343";
        finished = true;
    }
    else if (city == "ISOLADELLIRI")
    {
        city = "E340";
        finished = true;
    }
    else if (city == "ISOLADELPIANO")
    {
        city = "E351";
        finished = true;
    }
    else if (city == "ISOLADELLASCALA")
    {
        city = "E349";
        finished = true;
    }
    else if (city == "ISOLADELLEFEMMINE")
    {
        city = "E350";
        finished = true;
    }
    else if (city == "ISOLADICAPORIZZUTO")
    {
        city = "E339";
        finished = true;
    }
    else if (city == "ISOLADelse ifONDRA")
    {
        city = "E353";
        finished = true;
    }
    else if (city == "ISOLADOVARESE")
    {
        city = "E356";
        finished = true;
    }
    else if (city == "ISOLARIZZA")
    {
        city = "E358";
        finished = true;
    }
    else if (city == "ISOLASANT'ANTONIO")
    {
        city = "E360";
        finished = true;
    }
    else if (city == "ISOLAVICENTINA")
    {
        city = "E354";
        finished = true;
    }
    else if (city == "ISOLABELLA")
    {
        city = "E345";
        finished = true;
    }
    else if (city == "ISOLABONA")
    {
        city = "E346";
        finished = true;
    }
    else if (city == "ISOLETREMITI")
    {
        city = "E363";
        finished = true;
    }
    else if (city == "ISORELLA")
    {
        city = "E364";
        finished = true;
    }
    else if (city == "ISPANI")
    {
        city = "E365";
        finished = true;
    }
    else if (city == "ISPICA")
    {
        city = "E366";
        finished = true;
    }
    else if (city == "ISPRA")
    {
        city = "E367";
        finished = true;
    }
    else if (city == "ISSIGLIO")
    {
        city = "E368";
        finished = true;
    }
    else if (city == "ISSIME")
    {
        city = "E369";
        finished = true;
    }
    else if (city == "ISSO")
    {
        city = "E370";
        finished = true;
    }
    else if (city == "ISSOGNE")
    {
        city = "E371";
        finished = true;
    }
    else if (city == "ISTRANA")
    {
        city = "E373";
        finished = true;
    }
    else if (city == "ITALA")
    {
        city = "E374";
        finished = true;
    }
    else if (city == "ITRI")
    {
        city = "E375";
        finished = true;
    }
    else if (city == "ITTIREDDU")
    {
        city = "E376";
        finished = true;
    }
    else if (city == "ITTIRI")
    {
        city = "E377";
        finished = true;
    }
    else if (city == "IVANOFRACENA")
    {
        city = "E378";
        finished = true;
    }
    else if (city == "IVREA")
    {
        city = "E379";
        finished = true;
    }
    else if (city == "IZANO")
    {
        city = "E380";
        finished = true;
    }
    else if (city == "JACURSO")
    {
        city = "E274";
        finished = true;
    }
    else if (city == "JELSI")
    {
        city = "E381";
        finished = true;
    }
    else if (city == "JENNE")
    {
        city = "E382";
        finished = true;
    }
    else if (city == "JERAGOCONORAGO")
    {
        city = "E386";
        finished = true;
    }
    else if (city == "JERZU")
    {
        city = "E387";
        finished = true;
    }
    else if (city == "JESI")
    {
        city = "E388";
        finished = true;
    }
    else if (city == "JESOLO")
    {
        city = "C388";
        finished = true;
    }
    else if (city == "JOLANDADISAVOIA")
    {
        city = "E320";
        finished = true;
    }
    else if (city == "JOPPOLO")
    {
        city = "E389";
        finished = true;
    }
    else if (city == "JOPPOLOGIANCAXIO")
    {
        city = "E390";
        finished = true;
    }
    else if (city == "JOVENCAN")
    {
        city = "E391";
        finished = true;
    }
    else if (city == "LACASSA")
    {
        city = "E394";
        finished = true;
    }
    else if (city == "LALOGGIA")
    {
        city = "E423";
        finished = true;
    }
    else if (city == "LAMADDALENA")
    {
        city = "E425";
        finished = true;
    }
    else if (city == "LAMAGDELEINE")
    {
        city = "A308";
        finished = true;
    }
    else if (city == "LAMORRA")
    {
        city = "E430";
        finished = true;
    }
    else if (city == "LASALLE")
    {
        city = "E458";
        finished = true;
    }
    else if (city == "LASPEZIA")
    {
        city = "E463";
        finished = true;
    }
    else if (city == "LATHUILE")
    {
        city = "E470";
        finished = true;
    }
    else if (city == "LAVALLEAGORDINA")
    {
        city = "E490";
        finished = true;
    }
    else if (city == "LAVALLE.WENGEN.")
    {
        city = "E491";
        finished = true;
    }
    else if (city == "LAVALLETTABRIANZA")
    {
        city = "M348";
        finished = true;
    }
    else if (city == "LABICO")
    {
        city = "E392";
        finished = true;
    }
    else if (city == "LABRO")
    {
        city = "E393";
        finished = true;
    }
    else if (city == "LACCHIARELLA")
    {
        city = "E395";
        finished = true;
    }
    else if (city == "LACCOAMENO")
    {
        city = "E396";
        finished = true;
    }
    else if (city == "LACEDONIA")
    {
        city = "E397";
        finished = true;
    }
    else if (city == "LACES.LATSCH.")
    {
        city = "E398";
        finished = true;
    }
    else if (city == "LACONI")
    {
        city = "E400";
        finished = true;
    }
    else if (city == "LADISPOLI")
    {
        city = "M212";
        finished = true;
    }
    else if (city == "LAERRU")
    {
        city = "E401";
        finished = true;
    }
    else if (city == "LAGANADI")
    {
        city = "E402";
        finished = true;
    }
    else if (city == "LAGHI")
    {
        city = "E403";
        finished = true;
    }
    else if (city == "LAGLIO")
    {
        city = "E405";
        finished = true;
    }
    else if (city == "LAGNASCO")
    {
        city = "E406";
        finished = true;
    }
    else if (city == "LAGO")
    {
        city = "E407";
        finished = true;
    }
    else if (city == "LAGONEGRO")
    {
        city = "E409";
        finished = true;
    }
    else if (city == "LAGOSANTO")
    {
        city = "E410";
        finished = true;
    }
    else if (city == "LAGUNDO.ALGUND.")
    {
        city = "E412";
        finished = true;
    }
    else if (city == "LAIGUEGLIA")
    {
        city = "E414";
        finished = true;
    }
    else if (city == "LAINATE")
    {
        city = "E415";
        finished = true;
    }
    else if (city == "LAINO")
    {
        city = "E416";
        finished = true;
    }
    else if (city == "LAINOBORGO")
    {
        city = "E417";
        finished = true;
    }
    else if (city == "LAINOCASTELLO")
    {
        city = "E419";
        finished = true;
    }
    else if (city == "LAION.LAJEN.")
    {
        city = "E420";
        finished = true;
    }
    else if (city == "LAIVES.LEelse ifERS.")
    {
        city = "E421";
        finished = true;
    }
    else if (city == "LAJATICO")
    {
        city = "E413";
        finished = true;
    }
    else if (city == "LALLIO")
    {
        city = "E422";
        finished = true;
    }
    else if (city == "LAMADEIPELIGNI")
    {
        city = "E424";
        finished = true;
    }
    else if (city == "LAMAMOCOGNO")
    {
        city = "E426";
        finished = true;
    }
    else if (city == "LAMBRUGO")
    {
        city = "E428";
        finished = true;
    }
    else if (city == "LAMEZIATERME")
    {
        city = "M208";
        finished = true;
    }
    else if (city == "LAMON")
    {
        city = "E429";
        finished = true;
    }
    else if (city == "LAMPEDUSAELINOSA")
    {
        city = "E431";
        finished = true;
    }
    else if (city == "LAMPORECCHIO")
    {
        city = "E432";
        finished = true;
    }
    else if (city == "LAMPORO")
    {
        city = "E433";
        finished = true;
    }
    else if (city == "LANA.LANA.")
    {
        city = "E434";
        finished = true;
    }
    else if (city == "LANCIANO")
    {
        city = "E435";
        finished = true;
    }
    else if (city == "LANDIONA")
    {
        city = "E436";
        finished = true;
    }
    else if (city == "LANDRIANO")
    {
        city = "E437";
        finished = true;
    }
    else if (city == "LANGHIRANO")
    {
        city = "E438";
        finished = true;
    }
    else if (city == "LANGOSCO")
    {
        city = "E439";
        finished = true;
    }
    else if (city == "LANUSEI")
    {
        city = "E441";
        finished = true;
    }
    else if (city == "LANUVIO")
    {
        city = "C767";
        finished = true;
    }
    else if (city == "LANZADA")
    {
        city = "E443";
        finished = true;
    }
    else if (city == "LANZOD'INTELVI")
    {
        city = "E444";
        finished = true;
    }
    else if (city == "LANZOTORINESE")
    {
        city = "E445";
        finished = true;
    }
    else if (city == "LAPEDONA")
    {
        city = "E447";
        finished = true;
    }
    else if (city == "LAPIO")
    {
        city = "E448";
        finished = true;
    }
    else if (city == "LAPPANO")
    {
        city = "E450";
        finished = true;
    }
    else if (city == "L'AQUILA")
    {
        city = "A345";
        finished = true;
    }
    else if (city == "LARCIANO")
    {
        city = "E451";
        finished = true;
    }
    else if (city == "LARDARO")
    {
        city = "E452";
        finished = true;
    }
    else if (city == "LARDIRAGO")
    {
        city = "E454";
        finished = true;
    }
    else if (city == "LARI")
    {
        city = "E455";
        finished = true;
    }
    else if (city == "LARIANO")
    {
        city = "M207";
        finished = true;
    }
    else if (city == "LARINO")
    {
        city = "E456";
        finished = true;
    }
    else if (city == "LASPLASSAS")
    {
        city = "E464";
        finished = true;
    }
    else if (city == "LASA.LAAS.")
    {
        city = "E457";
        finished = true;
    }
    else if (city == "LASCARI")
    {
        city = "E459";
        finished = true;
    }
    else if (city == "LASINO")
    {
        city = "E461";
        finished = true;
    }
    else if (city == "LASNIGO")
    {
        city = "E462";
        finished = true;
    }
    else if (city == "LASTEBASSE")
    {
        city = "E465";
        finished = true;
    }
    else if (city == "LASTRAASIGNA")
    {
        city = "E466";
        finished = true;
    }
    else if (city == "LATERA")
    {
        city = "E467";
        finished = true;
    }
    else if (city == "LATERINA")
    {
        city = "E468";
        finished = true;
    }
    else if (city == "LATERINAPERGINEVALDARNO")
    {
        city = "M392";
        finished = true;
    }
    else if (city == "LATERZA")
    {
        city = "E469";
        finished = true;
    }
    else if (city == "LATIANO")
    {
        city = "E471";
        finished = true;
    }
    else if (city == "LATINA")
    {
        city = "E472";
        finished = true;
    }
    else if (city == "LATISANA")
    {
        city = "E473";
        finished = true;
    }
    else if (city == "LATRONICO")
    {
        city = "E474";
        finished = true;
    }
    else if (city == "LATTARICO")
    {
        city = "E475";
        finished = true;
    }
    else if (city == "LAUCO")
    {
        city = "E476";
        finished = true;
    }
    else if (city == "LAUREANACILENTO")
    {
        city = "E480";
        finished = true;
    }
    else if (city == "LAUREANADIBORRELLO")
    {
        city = "E479";
        finished = true;
    }
    else if (city == "LAUREGNO.LAUREIN.")
    {
        city = "E481";
        finished = true;
    }
    else if (city == "LAURENZANA")
    {
        city = "E482";
        finished = true;
    }
    else if (city == "LAURIA")
    {
        city = "E483";
        finished = true;
    }
    else if (city == "LAURIANO")
    {
        city = "E484";
        finished = true;
    }
    else if (city == "LAURINO")
    {
        city = "E485";
        finished = true;
    }
    else if (city == "LAURITO")
    {
        city = "E486";
        finished = true;
    }
    else if (city == "LAURO")
    {
        city = "E487";
        finished = true;
    }
    else if (city == "LAVAGNA")
    {
        city = "E488";
        finished = true;
    }
    else if (city == "LAVAGNO")
    {
        city = "E489";
        finished = true;
    }
    else if (city == "LAVARONE")
    {
        city = "E492";
        finished = true;
    }
    else if (city == "LAVELLO")
    {
        city = "E493";
        finished = true;
    }
    else if (city == "LAVENAPONTETRESA")
    {
        city = "E494";
        finished = true;
    }
    else if (city == "LAVENO-MOMBELLO")
    {
        city = "E496";
        finished = true;
    }
    else if (city == "LAVENONE")
    {
        city = "E497";
        finished = true;
    }
    else if (city == "LAVIANO")
    {
        city = "E498";
        finished = true;
    }
    else if (city == "LAVIS")
    {
        city = "E500";
        finished = true;
    }
    else if (city == "LAZISE")
    {
        city = "E502";
        finished = true;
    }
    else if (city == "LAZZATE")
    {
        city = "E504";
        finished = true;
    }
    else if (city == "LECCE")
    {
        city = "E506";
        finished = true;
    }
    else if (city == "LECCENEIMARSI")
    {
        city = "E505";
        finished = true;
    }
    else if (city == "LECCO")
    {
        city = "E507";
        finished = true;
    }
    else if (city == "LEDRO")
    {
        city = "M313";
        finished = true;
    }
    else if (city == "LEFFE")
    {
        city = "E509";
        finished = true;
    }
    else if (city == "LEGGIUNO")
    {
        city = "E510";
        finished = true;
    }
    else if (city == "LEGNAGO")
    {
        city = "E512";
        finished = true;
    }
    else if (city == "LEGNANO")
    {
        city = "E514";
        finished = true;
    }
    else if (city == "LEGNARO")
    {
        city = "E515";
        finished = true;
    }
    else if (city == "LEI")
    {
        city = "E517";
        finished = true;
    }
    else if (city == "LEINI")
    {
        city = "E518";
        finished = true;
    }
    else if (city == "LEIVI")
    {
        city = "E519";
        finished = true;
    }
    else if (city == "LEMIE")
    {
        city = "E520";
        finished = true;
    }
    else if (city == "LENDINARA")
    {
        city = "E522";
        finished = true;
    }
    else if (city == "LENI")
    {
        city = "E523";
        finished = true;
    }
    else if (city == "LENNA")
    {
        city = "E524";
        finished = true;
    }
    else if (city == "LENNO")
    {
        city = "E525";
        finished = true;
    }
    else if (city == "LENO")
    {
        city = "E526";
        finished = true;
    }
    else if (city == "LENOLA")
    {
        city = "E527";
        finished = true;
    }
    else if (city == "LENTA")
    {
        city = "E528";
        finished = true;
    }
    else if (city == "LENTATESULSEVESO")
    {
        city = "E530";
        finished = true;
    }
    else if (city == "LENTELLA")
    {
        city = "E531";
        finished = true;
    }
    else if (city == "LENTIAI")
    {
        city = "C562";
        finished = true;
    }
    else if (city == "LENTINI")
    {
        city = "E532";
        finished = true;
    }
    else if (city == "LEONESSA")
    {
        city = "E535";
        finished = true;
    }
    else if (city == "LEONFORTE")
    {
        city = "E536";
        finished = true;
    }
    else if (city == "LEPORANO")
    {
        city = "E537";
        finished = true;
    }
    else if (city == "LEQUILE")
    {
        city = "E538";
        finished = true;
    }
    else if (city == "LEQUIOBERRIA")
    {
        city = "E540";
        finished = true;
    }
    else if (city == "LEQUIOTANARO")
    {
        city = "E539";
        finished = true;
    }
    else if (city == "LERCARAFRIDDI")
    {
        city = "E541";
        finished = true;
    }
    else if (city == "LERICI")
    {
        city = "E542";
        finished = true;
    }
    else if (city == "LERMA")
    {
        city = "E543";
        finished = true;
    }
    else if (city == "LESA")
    {
        city = "E544";
        finished = true;
    }
    else if (city == "LESEGNO")
    {
        city = "E546";
        finished = true;
    }
    else if (city == "LESIGNANODE'BAGNI")
    {
        city = "E547";
        finished = true;
    }
    else if (city == "LESINA")
    {
        city = "E549";
        finished = true;
    }
    else if (city == "LESMO")
    {
        city = "E550";
        finished = true;
    }
    else if (city == "LESSOLO")
    {
        city = "E551";
        finished = true;
    }
    else if (city == "LESSONA")
    {
        city = "E552";
        finished = true;
    }
    else if (city == "LESSONA")
    {
        city = "M371";
        finished = true;
    }
    else if (city == "LESTIZZA")
    {
        city = "E553";
        finished = true;
    }
    else if (city == "LETINO")
    {
        city = "E554";
        finished = true;
    }
    else if (city == "LETOJANNI")
    {
        city = "E555";
        finished = true;
    }
    else if (city == "LETTERE")
    {
        city = "E557";
        finished = true;
    }
    else if (city == "LETTOMANOPPELLO")
    {
        city = "E558";
        finished = true;
    }
    else if (city == "LETTOPALENA")
    {
        city = "E559";
        finished = true;
    }
    else if (city == "LEVANTO")
    {
        city = "E560";
        finished = true;
    }
    else if (city == "LEVATE")
    {
        city = "E562";
        finished = true;
    }
    else if (city == "LEVERANO")
    {
        city = "E563";
        finished = true;
    }
    else if (city == "LEVICE")
    {
        city = "E564";
        finished = true;
    }
    else if (city == "LEVICOTERME")
    {
        city = "E565";
        finished = true;
    }
    else if (city == "LEVONE")
    {
        city = "E566";
        finished = true;
    }
    else if (city == "LEZZENO")
    {
        city = "E569";
        finished = true;
    }
    else if (city == "LIBERI")
    {
        city = "E570";
        finished = true;
    }
    else if (city == "LIBRIZZI")
    {
        city = "E571";
        finished = true;
    }
    else if (city == "LICATA")
    {
        city = "E573";
        finished = true;
    }
    else if (city == "LICCIANANARDI")
    {
        city = "E574";
        finished = true;
    }
    else if (city == "LICENZA")
    {
        city = "E576";
        finished = true;
    }
    else if (city == "LICODIAEUBEA")
    {
        city = "E578";
        finished = true;
    }
    else if (city == "LIERNA")
    {
        city = "E581";
        finished = true;
    }
    else if (city == "LIGNANA")
    {
        city = "E583";
        finished = true;
    }
    else if (city == "LIGNANOSABBIADORO")
    {
        city = "E584";
        finished = true;
    }
    else if (city == "LIGONCHIO")
    {
        city = "E585";
        finished = true;
    }
    else if (city == "LIGOSULLO")
    {
        city = "E586";
        finished = true;
    }
    else if (city == "LILLIANES")
    {
        city = "E587";
        finished = true;
    }
    else if (city == "LIMANA")
    {
        city = "E588";
        finished = true;
    }
    else if (city == "LIMATOLA")
    {
        city = "E589";
        finished = true;
    }
    else if (city == "LIMBADI")
    {
        city = "E590";
        finished = true;
    }
    else if (city == "LIMBIATE")
    {
        city = "E591";
        finished = true;
    }
    else if (city == "LIMENA")
    {
        city = "E592";
        finished = true;
    }
    else if (city == "LIMIDOCOMASCO")
    {
        city = "E593";
        finished = true;
    }
    else if (city == "LIMINA")
    {
        city = "E594";
        finished = true;
    }
    else if (city == "LIMONEPIEMONTE")
    {
        city = "E597";
        finished = true;
    }
    else if (city == "LIMONESULGARDA")
    {
        city = "E596";
        finished = true;
    }
    else if (city == "LIMOSANO")
    {
        city = "E599";
        finished = true;
    }
    else if (city == "LINAROLO")
    {
        city = "E600";
        finished = true;
    }
    else if (city == "LINGUAGLOSSA")
    {
        city = "E602";
        finished = true;
    }
    else if (city == "LIONI")
    {
        city = "E605";
        finished = true;
    }
    else if (city == "LIPARI")
    {
        city = "E606";
        finished = true;
    }
    else if (city == "LIPOMO")
    {
        city = "E607";
        finished = true;
    }
    else if (city == "LIRIO")
    {
        city = "E608";
        finished = true;
    }
    else if (city == "LISCATE")
    {
        city = "E610";
        finished = true;
    }
    else if (city == "LISCIA")
    {
        city = "E611";
        finished = true;
    }
    else if (city == "LISCIANONICCONE")
    {
        city = "E613";
        finished = true;
    }
    else if (city == "LISIGNAGO")
    {
        city = "E614";
        finished = true;
    }
    else if (city == "LISIO")
    {
        city = "E615";
        finished = true;
    }
    else if (city == "LISSONE")
    {
        city = "E617";
        finished = true;
    }
    else if (city == "LIVERI")
    {
        city = "E620";
        finished = true;
    }
    else if (city == "LIVIGNO")
    {
        city = "E621";
        finished = true;
    }
    else if (city == "LIVINALLONGODELCOLDILANA")
    {
        city = "E622";
        finished = true;
    }
    else if (city == "LIVO")
    {
        city = "E624";
        finished = true;
    }
    else if (city == "LIVO")
    {
        city = "E623";
        finished = true;
    }
    else if (city == "LIVORNO")
    {
        city = "E625";
        finished = true;
    }
    else if (city == "LIVORNOFERRARIS")
    {
        city = "E626";
        finished = true;
    }
    else if (city == "LIVRAGA")
    {
        city = "E627";
        finished = true;
    }
    else if (city == "LIZZANELLO")
    {
        city = "E629";
        finished = true;
    }
    else if (city == "LIZZANO")
    {
        city = "E630";
        finished = true;
    }
    else if (city == "LIZZANOINBELVEDERE")
    {
        city = "A771";
        finished = true;
    }
    else if (city == "LOANO")
    {
        city = "E632";
        finished = true;
    }
    else if (city == "LOAZZOLO")
    {
        city = "E633";
        finished = true;
    }
    else if (city == "LOCANA")
    {
        city = "E635";
        finished = true;
    }
    else if (city == "LOCATEDITRIULZI")
    {
        city = "E639";
        finished = true;
    }
    else if (city == "LOCATEVARESINO")
    {
        city = "E638";
        finished = true;
    }
    else if (city == "LOCATELLO")
    {
        city = "E640";
        finished = true;
    }
    else if (city == "LOCERI")
    {
        city = "E644";
        finished = true;
    }
    else if (city == "LOCOROTONDO")
    {
        city = "E645";
        finished = true;
    }
    else if (city == "LOCRI")
    {
        city = "D976";
        finished = true;
    }
    else if (city == "LOCULI")
    {
        city = "E646";
        finished = true;
    }
    else if (city == "LODE'")
    {
        city = "E647";
        finished = true;
    }
    else if (city == "LODI")
    {
        city = "E648";
        finished = true;
    }
    else if (city == "LODIVECCHIO")
    {
        city = "E651";
        finished = true;
    }
    else if (city == "LODINE")
    {
        city = "E649";
        finished = true;
    }
    else if (city == "LODRINO")
    {
        city = "E652";
        finished = true;
    }
    else if (city == "LOGRATO")
    {
        city = "E654";
        finished = true;
    }
    else if (city == "LOIANO")
    {
        city = "E655";
        finished = true;
    }
    else if (city == "LOIRIPORTOSANPAOLO")
    {
        city = "M275";
        finished = true;
    }
    else if (city == "LOMAGNA")
    {
        city = "E656";
        finished = true;
    }
    else if (city == "LOMASO")
    {
        city = "E658";
        finished = true;
    }
    else if (city == "LOMAZZO")
    {
        city = "E659";
        finished = true;
    }
    else if (city == "LOMBARDORE")
    {
        city = "E660";
        finished = true;
    }
    else if (city == "LOMBRIASCO")
    {
        city = "E661";
        finished = true;
    }
    else if (city == "LOMELLO")
    {
        city = "E662";
        finished = true;
    }
    else if (city == "LONALASES")
    {
        city = "E664";
        finished = true;
    }
    else if (city == "LONATECEPPINO")
    {
        city = "E665";
        finished = true;
    }
    else if (city == "LONATEPOZZOLO")
    {
        city = "E666";
        finished = true;
    }
    else if (city == "LONATO")
    {
        city = "E667";
        finished = true;
    }
    else if (city == "LONATODELGARDA")
    {
        city = "M312";
        finished = true;
    }
    else if (city == "LONDA")
    {
        city = "E668";
        finished = true;
    }
    else if (city == "LONGANO")
    {
        city = "E669";
        finished = true;
    }
    else if (city == "LONGARE")
    {
        city = "E671";
        finished = true;
    }
    else if (city == "LONGARONE")
    {
        city = "E672";
        finished = true;
    }
    else if (city == "LONGARONE")
    {
        city = "M342";
        finished = true;
    }
    else if (city == "LONGHENA")
    {
        city = "E673";
        finished = true;
    }
    else if (city == "LONGI")
    {
        city = "E674";
        finished = true;
    }
    else if (city == "LONGIANO")
    {
        city = "E675";
        finished = true;
    }
    else if (city == "LONGOBARDI")
    {
        city = "E677";
        finished = true;
    }
    else if (city == "LONGOBUCCO")
    {
        city = "E678";
        finished = true;
    }
    else if (city == "LONGONEALSEGRINO")
    {
        city = "E679";
        finished = true;
    }
    else if (city == "LONGONESABINO")
    {
        city = "E681";
        finished = true;
    }
    else if (city == "LONIGO")
    {
        city = "E682";
        finished = true;
    }
    else if (city == "LORANZE'")
    {
        city = "E683";
        finished = true;
    }
    else if (city == "LOREGGIA")
    {
        city = "E684";
        finished = true;
    }
    else if (city == "LOREGLIA")
    {
        city = "E685";
        finished = true;
    }
    else if (city == "LORENZAGODICADORE")
    {
        city = "E687";
        finished = true;
    }
    else if (city == "LORENZANA")
    {
        city = "E688";
        finished = true;
    }
    else if (city == "LOREO")
    {
        city = "E689";
        finished = true;
    }
    else if (city == "LORETO")
    {
        city = "E690";
        finished = true;
    }
    else if (city == "LORETOAPRUTINO")
    {
        city = "E691";
        finished = true;
    }
    else if (city == "LORIA")
    {
        city = "E692";
        finished = true;
    }
    else if (city == "LOROCIUFFENNA")
    {
        city = "E693";
        finished = true;
    }
    else if (city == "LOROPICENO")
    {
        city = "E694";
        finished = true;
    }
    else if (city == "LORSICA")
    {
        city = "E695";
        finished = true;
    }
    else if (city == "LOSINE")
    {
        city = "E698";
        finished = true;
    }
    else if (city == "LOTZORAI")
    {
        city = "E700";
        finished = true;
    }
    else if (city == "LOVERE")
    {
        city = "E704";
        finished = true;
    }
    else if (city == "LOVERO")
    {
        city = "E705";
        finished = true;
    }
    else if (city == "LOZIO")
    {
        city = "E706";
        finished = true;
    }
    else if (city == "LOZZA")
    {
        city = "E707";
        finished = true;
    }
    else if (city == "LOZZOATESTINO")
    {
        city = "E709";
        finished = true;
    }
    else if (city == "LOZZODICADORE")
    {
        city = "E708";
        finished = true;
    }
    else if (city == "LOZZOLO")
    {
        city = "E711";
        finished = true;
    }
    else if (city == "LU")
    {
        city = "E712";
        finished = true;
    }
    else if (city == "LUECUCCAROMONFERRATO")
    {
        city = "M420";
        finished = true;
    }
    else if (city == "LUBRIANO")
    {
        city = "E713";
        finished = true;
    }
    else if (city == "LUCCA")
    {
        city = "E715";
        finished = true;
    }
    else if (city == "LUCCASICULA")
    {
        city = "E714";
        finished = true;
    }
    else if (city == "LUCERA")
    {
        city = "E716";
        finished = true;
    }
    else if (city == "LUCIGNANO")
    {
        city = "E718";
        finished = true;
    }
    else if (city == "LUCINASCO")
    {
        city = "E719";
        finished = true;
    }
    else if (city == "LUCITO")
    {
        city = "E722";
        finished = true;
    }
    else if (city == "LUCODEIMARSI")
    {
        city = "E723";
        finished = true;
    }
    else if (city == "LUCOLI")
    {
        city = "E724";
        finished = true;
    }
    else if (city == "LUGAGNANOVALD'ARDA")
    {
        city = "E726";
        finished = true;
    }
    else if (city == "LUGNACCO")
    {
        city = "E727";
        finished = true;
    }
    else if (city == "LUGNANOINTEVERINA")
    {
        city = "E729";
        finished = true;
    }
    else if (city == "LUGO")
    {
        city = "E730";
        finished = true;
    }
    else if (city == "LUGODIVICENZA")
    {
        city = "E731";
        finished = true;
    }
    else if (city == "LUINO")
    {
        city = "E734";
        finished = true;
    }
    else if (city == "LUISAGO")
    {
        city = "E735";
        finished = true;
    }
    else if (city == "LULA")
    {
        city = "E736";
        finished = true;
    }
    else if (city == "LUMARZO")
    {
        city = "E737";
        finished = true;
    }
    else if (city == "LUMEZZANE")
    {
        city = "E738";
        finished = true;
    }
    else if (city == "LUNAMATRONA")
    {
        city = "E742";
        finished = true;
    }
    else if (city == "LUNANO")
    {
        city = "E743";
        finished = true;
    }
    else if (city == "LUNGAVILLA")
    {
        city = "B387";
        finished = true;
    }
    else if (city == "LUNGRO")
    {
        city = "E745";
        finished = true;
    }
    else if (city == "LUNI")
    {
        city = "G143";
        finished = true;
    }
    else if (city == "LUOGOSANO")
    {
        city = "E746";
        finished = true;
    }
    else if (city == "LUOGOSANTO")
    {
        city = "E747";
        finished = true;
    }
    else if (city == "LUPARA")
    {
        city = "E748";
        finished = true;
    }
    else if (city == "LURAGOD'ERBA")
    {
        city = "E749";
        finished = true;
    }
    else if (city == "LURAGOMARINONE")
    {
        city = "E750";
        finished = true;
    }
    else if (city == "LURANO")
    {
        city = "E751";
        finished = true;
    }
    else if (city == "LURAS")
    {
        city = "E752";
        finished = true;
    }
    else if (city == "LURATECACCIVIO")
    {
        city = "E753";
        finished = true;
    }
    else if (city == "LUSCIANO")
    {
        city = "E754";
        finished = true;
    }
    else if (city == "LUSERNA")
    {
        city = "E757";
        finished = true;
    }
    else if (city == "LUSERNASANGIOVANNI")
    {
        city = "E758";
        finished = true;
    }
    else if (city == "LUSERNETTA")
    {
        city = "E759";
        finished = true;
    }
    else if (city == "LUSEVERA")
    {
        city = "E760";
        finished = true;
    }
    else if (city == "LUSIA")
    {
        city = "E761";
        finished = true;
    }
    else if (city == "LUSIANA")
    {
        city = "E762";
        finished = true;
    }
    else if (city == "LUSIANACONCO")
    {
        city = "M427";
        finished = true;
    }
    else if (city == "LUSIGLIE'")
    {
        city = "E763";
        finished = true;
    }
    else if (city == "LUSON.LUESEN.")
    {
        city = "E764";
        finished = true;
    }
    else if (city == "LUSTRA")
    {
        city = "E767";
        finished = true;
    }
    else if (city == "LUVINATE")
    {
        city = "E769";
        finished = true;
    }
    else if (city == "LUZZANA")
    {
        city = "E770";
        finished = true;
    }
    else if (city == "LUZZARA")
    {
        city = "E772";
        finished = true;
    }
    else if (city == "LUZZI")
    {
        city = "E773";
        finished = true;
    }
    else if (city == "MACCAGNO")
    {
        city = "E775";
        finished = true;
    }
    else if (city == "MACCAGNOCONPINOEVEDDASCA")
    {
        city = "M339";
        finished = true;
    }
    else if (city == "MACCASTORNA")
    {
        city = "E777";
        finished = true;
    }
    else if (city == "MACCHIAD'ISERNIA")
    {
        city = "E778";
        finished = true;
    }
    else if (city == "MACCHIAVALFORTORE")
    {
        city = "E780";
        finished = true;
    }
    else if (city == "MACCHIAGODENA")
    {
        city = "E779";
        finished = true;
    }
    else if (city == "MACELLO")
    {
        city = "E782";
        finished = true;
    }
    else if (city == "MACERATA")
    {
        city = "E783";
        finished = true;
    }
    else if (city == "MACERATACAMPANIA")
    {
        city = "E784";
        finished = true;
    }
    else if (city == "MACERATAFELTRIA")
    {
        city = "E785";
        finished = true;
    }
    else if (city == "MACHERIO")
    {
        city = "E786";
        finished = true;
    }
    else if (city == "MACLODIO")
    {
        city = "E787";
        finished = true;
    }
    else if (city == "MACOMER")
    {
        city = "E788";
        finished = true;
    }
    else if (city == "MACRA")
    {
        city = "E789";
        finished = true;
    }
    else if (city == "MACUGNAGA")
    {
        city = "E790";
        finished = true;
    }
    else if (city == "MADDALONI")
    {
        city = "E791";
        finished = true;
    }
    else if (city == "MADESIMO")
    {
        city = "E342";
        finished = true;
    }
    else if (city == "MADIGNANO")
    {
        city = "E793";
        finished = true;
    }
    else if (city == "MADONE")
    {
        city = "E794";
        finished = true;
    }
    else if (city == "MADONNADELSASSO")
    {
        city = "E795";
        finished = true;
    }
    else if (city == "MADRUZZO")
    {
        city = "M357";
        finished = true;
    }
    else if (city == "MAENZA")
    {
        city = "E798";
        finished = true;
    }
    else if (city == "MAFALDA")
    {
        city = "E799";
        finished = true;
    }
    else if (city == "MAGASA")
    {
        city = "E800";
        finished = true;
    }
    else if (city == "MAGENTA")
    {
        city = "E801";
        finished = true;
    }
    else if (city == "MAGGIORA")
    {
        city = "E803";
        finished = true;
    }
    else if (city == "MAGHERNO")
    {
        city = "E804";
        finished = true;
    }
    else if (city == "MAGIONE")
    {
        city = "E805";
        finished = true;
    }
    else if (city == "MAGISANO")
    {
        city = "E806";
        finished = true;
    }
    else if (city == "MAGLIANOALFIERI")
    {
        city = "E809";
        finished = true;
    }
    else if (city == "MAGLIANOALPI")
    {
        city = "E808";
        finished = true;
    }
    else if (city == "MAGLIANODE'MARSI")
    {
        city = "E811";
        finished = true;
    }
    else if (city == "MAGLIANODITENNA")
    {
        city = "E807";
        finished = true;
    }
    else if (city == "MAGLIANOINTOSCANA")
    {
        city = "E810";
        finished = true;
    }
    else if (city == "MAGLIANOROMANO")
    {
        city = "E813";
        finished = true;
    }
    else if (city == "MAGLIANOSABINA")
    {
        city = "E812";
        finished = true;
    }
    else if (city == "MAGLIANOVETERE")
    {
        city = "E814";
        finished = true;
    }
    else if (city == "MAGLIE")
    {
        city = "E815";
        finished = true;
    }
    else if (city == "MAGLIOLO")
    {
        city = "E816";
        finished = true;
    }
    else if (city == "MAGLIONE")
    {
        city = "E817";
        finished = true;
    }
    else if (city == "MAGNACAVALLO")
    {
        city = "E818";
        finished = true;
    }
    else if (city == "MAGNAGO")
    {
        city = "E819";
        finished = true;
    }
    else if (city == "MAGNANO")
    {
        city = "E821";
        finished = true;
    }
    else if (city == "MAGNANOINRIVIERA")
    {
        city = "E820";
        finished = true;
    }
    else if (city == "MAGOMADAS")
    {
        city = "E825";
        finished = true;
    }
    else if (city == "MAGRE'SULLASTRADADELVINO.MARGREIDANDE.")
    {
        city = "E829";
        finished = true;
    }
    else if (city == "MAGREGLIO")
    {
        city = "E830";
        finished = true;
    }
    else if (city == "MAIDA")
    {
        city = "E834";
        finished = true;
    }
    else if (city == "MAIERA'")
    {
        city = "E835";
        finished = true;
    }
    else if (city == "MAIERATO")
    {
        city = "E836";
        finished = true;
    }
    else if (city == "MAIOLATISPONTINI")
    {
        city = "E837";
        finished = true;
    }
    else if (city == "MAIOLO")
    {
        city = "E838";
        finished = true;
    }
    else if (city == "MAIORI")
    {
        city = "E839";
        finished = true;
    }
    else if (city == "MAIRAGO")
    {
        city = "E840";
        finished = true;
    }
    else if (city == "MAIRANO")
    {
        city = "E841";
        finished = true;
    }
    else if (city == "MAISSANA")
    {
        city = "E842";
        finished = true;
    }
    else if (city == "MAJANO")
    {
        city = "E833";
        finished = true;
    }
    else if (city == "MALAGNINO")
    {
        city = "E843";
        finished = true;
    }
    else if (city == "MALALBERGO")
    {
        city = "E844";
        finished = true;
    }
    else if (city == "MALBORGHETTO-VALBRUNA")
    {
        city = "E847";
        finished = true;
    }
    else if (city == "MALCESINE")
    {
        city = "E848";
        finished = true;
    }
    else if (city == "MALE'")
    {
        city = "E850";
        finished = true;
    }
    else if (city == "MALEGNO")
    {
        city = "E851";
        finished = true;
    }
    else if (city == "MALEO")
    {
        city = "E852";
        finished = true;
    }
    else if (city == "MALESCO")
    {
        city = "E853";
        finished = true;
    }
    else if (city == "MALETTO")
    {
        city = "E854";
        finished = true;
    }
    else if (city == "MALFA")
    {
        city = "E855";
        finished = true;
    }
    else if (city == "MALGESSO")
    {
        city = "E856";
        finished = true;
    }
    else if (city == "MALGRATE")
    {
        city = "E858";
        finished = true;
    }
    else if (city == "MALITO")
    {
        city = "E859";
        finished = true;
    }
    else if (city == "MALLARE")
    {
        city = "E860";
        finished = true;
    }
    else if (city == "MALLESVENOSTA.MALS.")
    {
        city = "E862";
        finished = true;
    }
    else if (city == "MALNATE")
    {
        city = "E863";
        finished = true;
    }
    else if (city == "MALO")
    {
        city = "E864";
        finished = true;
    }
    else if (city == "MALONNO")
    {
        city = "E865";
        finished = true;
    }
    else if (city == "MALOSCO")
    {
        city = "E866";
        finished = true;
    }
    else if (city == "MALTIGNANO")
    {
        city = "E868";
        finished = true;
    }
    else if (city == "MALVAGNA")
    {
        city = "E869";
        finished = true;
    }
    else if (city == "MALVICINO")
    {
        city = "E870";
        finished = true;
    }
    else if (city == "MALVITO")
    {
        city = "E872";
        finished = true;
    }
    else if (city == "MAMMOLA")
    {
        city = "E873";
        finished = true;
    }
    else if (city == "MAMOIADA")
    {
        city = "E874";
        finished = true;
    }
    else if (city == "MANCIANO")
    {
        city = "E875";
        finished = true;
    }
    else if (city == "MANDANICI")
    {
        city = "E876";
        finished = true;
    }
    else if (city == "MANDAS")
    {
        city = "E877";
        finished = true;
    }
    else if (city == "MANDATORICCIO")
    {
        city = "E878";
        finished = true;
    }
    else if (city == "MANDELA")
    {
        city = "B632";
        finished = true;
    }
    else if (city == "MANDELLODELLARIO")
    {
        city = "E879";
        finished = true;
    }
    else if (city == "MANDELLOVITTA")
    {
        city = "E880";
        finished = true;
    }
    else if (city == "MANDURIA")
    {
        city = "E882";
        finished = true;
    }
    else if (city == "MANERBADELGARDA")
    {
        city = "E883";
        finished = true;
    }
    else if (city == "MANERBIO")
    {
        city = "E884";
        finished = true;
    }
    else if (city == "MANFREDONIA")
    {
        city = "E885";
        finished = true;
    }
    else if (city == "MANGO")
    {
        city = "E887";
        finished = true;
    }
    else if (city == "MANGONE")
    {
        city = "E888";
        finished = true;
    }
    else if (city == "MANIACE")
    {
        city = "M283";
        finished = true;
    }
    else if (city == "MANIAGO")
    {
        city = "E889";
        finished = true;
    }
    else if (city == "MANOCALZATI")
    {
        city = "E891";
        finished = true;
    }
    else if (city == "MANOPPELLO")
    {
        city = "E892";
        finished = true;
    }
    else if (city == "MANSUE'")
    {
        city = "E893";
        finished = true;
    }
    else if (city == "MANTA")
    {
        city = "E894";
        finished = true;
    }
    else if (city == "MANTELLO")
    {
        city = "E896";
        finished = true;
    }
    else if (city == "MANTOVA")
    {
        city = "E897";
        finished = true;
    }
    else if (city == "MANZANO")
    {
        city = "E899";
        finished = true;
    }
    else if (city == "MANZIANA")
    {
        city = "E900";
        finished = true;
    }
    else if (city == "MAPELLO")
    {
        city = "E901";
        finished = true;
    }
    else if (city == "MAPPANO")
    {
        city = "M316";
        finished = true;
    }
    else if (city == "MARA")
    {
        city = "E902";
        finished = true;
    }
    else if (city == "MARACALAGONIS")
    {
        city = "E903";
        finished = true;
    }
    else if (city == "MARANELLO")
    {
        city = "E904";
        finished = true;
    }
    else if (city == "MARANODINAPOLI")
    {
        city = "E906";
        finished = true;
    }
    else if (city == "MARANODIVALPOLICELLA")
    {
        city = "E911";
        finished = true;
    }
    else if (city == "MARANOEQUO")
    {
        city = "E908";
        finished = true;
    }
    else if (city == "MARANOLAGUNARE")
    {
        city = "E910";
        finished = true;
    }
    else if (city == "MARANOMARCHESATO")
    {
        city = "E914";
        finished = true;
    }
    else if (city == "MARANOPRINCIPATO")
    {
        city = "E915";
        finished = true;
    }
    else if (city == "MARANOSULPANARO")
    {
        city = "E905";
        finished = true;
    }
    else if (city == "MARANOTICINO")
    {
        city = "E907";
        finished = true;
    }
    else if (city == "MARANOVICENTINO")
    {
        city = "E912";
        finished = true;
    }
    else if (city == "MARANZANA")
    {
        city = "E917";
        finished = true;
    }
    else if (city == "MARATEA")
    {
        city = "E919";
        finished = true;
    }
    else if (city == "MARCALLOCONCASONE")
    {
        city = "E921";
        finished = true;
    }
    else if (city == "MARCARIA")
    {
        city = "E922";
        finished = true;
    }
    else if (city == "MARCEDUSA")
    {
        city = "E923";
        finished = true;
    }
    else if (city == "MARCELLINA")
    {
        city = "E924";
        finished = true;
    }
    else if (city == "MARCELLINARA")
    {
        city = "E925";
        finished = true;
    }
    else if (city == "MARCETELLI")
    {
        city = "E927";
        finished = true;
    }
    else if (city == "MARCHENO")
    {
        city = "E928";
        finished = true;
    }
    else if (city == "MARCHIROLO")
    {
        city = "E929";
        finished = true;
    }
    else if (city == "MARCIANA")
    {
        city = "E930";
        finished = true;
    }
    else if (city == "MARCIANAMARINA")
    {
        city = "E931";
        finished = true;
    }
    else if (city == "MARCIANISE")
    {
        city = "E932";
        finished = true;
    }
    else if (city == "MARCIANODELLACHIANA")
    {
        city = "E933";
        finished = true;
    }
    else if (city == "MARCIGNAGO")
    {
        city = "E934";
        finished = true;
    }
    else if (city == "MARCON")
    {
        city = "E936";
        finished = true;
    }
    else if (city == "MAREBBE.ENNEBERG.")
    {
        city = "E938";
        finished = true;
    }
    else if (city == "MARENE")
    {
        city = "E939";
        finished = true;
    }
    else if (city == "MARENODIPIAVE")
    {
        city = "E940";
        finished = true;
    }
    else if (city == "MARENTINO")
    {
        city = "E941";
        finished = true;
    }
    else if (city == "MARETTO")
    {
        city = "E944";
        finished = true;
    }
    else if (city == "MARGARITA")
    {
        city = "E945";
        finished = true;
    }
    else if (city == "MARGHERITADISAVOIA")
    {
        city = "E946";
        finished = true;
    }
    else if (city == "MARGNO")
    {
        city = "E947";
        finished = true;
    }
    else if (city == "MARIANAMANTOVANA")
    {
        city = "E949";
        finished = true;
    }
    else if (city == "MARIANOCOMENSE")
    {
        city = "E951";
        finished = true;
    }
    else if (city == "MARIANODELFRIULI")
    {
        city = "E952";
        finished = true;
    }
    else if (city == "MARIANOPOLI")
    {
        city = "E953";
        finished = true;
    }
    else if (city == "MARIGLIANELLA")
    {
        city = "E954";
        finished = true;
    }
    else if (city == "MARIGLIANO")
    {
        city = "E955";
        finished = true;
    }
    else if (city == "MARINADIGIOIOSAIONICA")
    {
        city = "E956";
        finished = true;
    }
    else if (city == "MARINEO")
    {
        city = "E957";
        finished = true;
    }
    else if (city == "MARINO")
    {
        city = "E958";
        finished = true;
    }
    else if (city == "MARLENGO.MARLING.")
    {
        city = "E959";
        finished = true;
    }
    else if (city == "MARLIANA")
    {
        city = "E960";
        finished = true;
    }
    else if (city == "MARMENTINO")
    {
        city = "E961";
        finished = true;
    }
    else if (city == "MARMIROLO")
    {
        city = "E962";
        finished = true;
    }
    else if (city == "MARMORA")
    {
        city = "E963";
        finished = true;
    }
    else if (city == "MARNATE")
    {
        city = "E965";
        finished = true;
    }
    else if (city == "MARONE")
    {
        city = "E967";
        finished = true;
    }
    else if (city == "MAROPATI")
    {
        city = "E968";
        finished = true;
    }
    else if (city == "MAROSTICA")
    {
        city = "E970";
        finished = true;
    }
    else if (city == "MARRADI")
    {
        city = "E971";
        finished = true;
    }
    else if (city == "MARRUBIU")
    {
        city = "E972";
        finished = true;
    }
    else if (city == "MARSAGLIA")
    {
        city = "E973";
        finished = true;
    }
    else if (city == "MARSALA")
    {
        city = "E974";
        finished = true;
    }
    else if (city == "MARSCIANO")
    {
        city = "E975";
        finished = true;
    }
    else if (city == "MARSICONUOVO")
    {
        city = "E976";
        finished = true;
    }
    else if (city == "MARSICOVETERE")
    {
        city = "E977";
        finished = true;
    }
    else if (city == "MARTA")
    {
        city = "E978";
        finished = true;
    }
    else if (city == "MARTANO")
    {
        city = "E979";
        finished = true;
    }
    else if (city == "MARTELLAGO")
    {
        city = "E980";
        finished = true;
    }
    else if (city == "MARTELLO.MARTELL.")
    {
        city = "E981";
        finished = true;
    }
    else if (city == "MARTIGNACCO")
    {
        city = "E982";
        finished = true;
    }
    else if (city == "MARTIGNANADIPO")
    {
        city = "E983";
        finished = true;
    }
    else if (city == "MARTIGNANO")
    {
        city = "E984";
        finished = true;
    }
    else if (city == "MARTINAFRANCA")
    {
        city = "E986";
        finished = true;
    }
    else if (city == "MARTINENGO")
    {
        city = "E987";
        finished = true;
    }
    else if (city == "MARTINIANAPO")
    {
        city = "E988";
        finished = true;
    }
    else if (city == "MARTINSICURO")
    {
        city = "E989";
        finished = true;
    }
    else if (city == "MARTIRANO")
    {
        city = "E990";
        finished = true;
    }
    else if (city == "MARTIRANOLOMBARDO")
    {
        city = "E991";
        finished = true;
    }
    else if (city == "MARTIS")
    {
        city = "E992";
        finished = true;
    }
    else if (city == "MARTONE")
    {
        city = "E993";
        finished = true;
    }
    else if (city == "MARUDO")
    {
        city = "E994";
        finished = true;
    }
    else if (city == "MARUGGIO")
    {
        city = "E995";
        finished = true;
    }
    else if (city == "MARZABOTTO")
    {
        city = "B689";
        finished = true;
    }
    else if (city == "MARZANO")
    {
        city = "E999";
        finished = true;
    }
    else if (city == "MARZANOAPPIO")
    {
        city = "E998";
        finished = true;
    }
    else if (city == "MARZANODINOLA")
    {
        city = "E997";
        finished = true;
    }
    else if (city == "MARZI")
    {
        city = "F001";
        finished = true;
    }
    else if (city == "MARZIO")
    {
        city = "F002";
        finished = true;
    }
    else if (city == "MASAINAS")
    {
        city = "M270";
        finished = true;
    }
    else if (city == "MASATE")
    {
        city = "F003";
        finished = true;
    }
    else if (city == "MASCALI")
    {
        city = "F004";
        finished = true;
    }
    else if (city == "MASCALUCIA")
    {
        city = "F005";
        finished = true;
    }
    else if (city == "MASCHITO")
    {
        city = "F006";
        finished = true;
    }
    else if (city == "MASCIAGOPRIMO")
    {
        city = "F007";
        finished = true;
    }
    else if (city == "MASER")
    {
        city = "F009";
        finished = true;
    }
    else if (city == "MASERA")
    {
        city = "F010";
        finished = true;
    }
    else if (city == "MASERA'DIPADOVA")
    {
        city = "F011";
        finished = true;
    }
    else if (city == "MASERADASULPIAVE")
    {
        city = "F012";
        finished = true;
    }
    else if (city == "MASI")
    {
        city = "F013";
        finished = true;
    }
    else if (city == "MASITORELLO")
    {
        city = "F016";
        finished = true;
    }
    else if (city == "MASIO")
    {
        city = "F015";
        finished = true;
    }
    else if (city == "MASLIANICO")
    {
        city = "F017";
        finished = true;
    }
    else if (city == "MASONVICENTINO")
    {
        city = "F019";
        finished = true;
    }
    else if (city == "MASONE")
    {
        city = "F020";
        finished = true;
    }
    else if (city == "MASSA")
    {
        city = "F023";
        finished = true;
    }
    else if (city == "MASSAD'ALBE")
    {
        city = "F022";
        finished = true;
    }
    else if (city == "MASSADISOMMA")
    {
        city = "M289";
        finished = true;
    }
    else if (city == "MASSAECOZZILE")
    {
        city = "F025";
        finished = true;
    }
    else if (city == "MASSAFERMANA")
    {
        city = "F021";
        finished = true;
    }
    else if (city == "MASSAFISCAGLIA")
    {
        city = "F026";
        finished = true;
    }
    else if (city == "MASSALOMBARDA")
    {
        city = "F029";
        finished = true;
    }
    else if (city == "MASSALUBRENSE")
    {
        city = "F030";
        finished = true;
    }
    else if (city == "MASSAMARITTIMA")
    {
        city = "F032";
        finished = true;
    }
    else if (city == "MASSAMARTANA")
    {
        city = "F024";
        finished = true;
    }
    else if (city == "MASSAFRA")
    {
        city = "F027";
        finished = true;
    }
    else if (city == "MASSALENGO")
    {
        city = "F028";
        finished = true;
    }
    else if (city == "MASSANZAGO")
    {
        city = "F033";
        finished = true;
    }
    else if (city == "MASSAROSA")
    {
        city = "F035";
        finished = true;
    }
    else if (city == "MASSAZZA")
    {
        city = "F037";
        finished = true;
    }
    else if (city == "MASSELLO")
    {
        city = "F041";
        finished = true;
    }
    else if (city == "MASSERANO")
    {
        city = "F042";
        finished = true;
    }
    else if (city == "MASSIGNANO")
    {
        city = "F044";
        finished = true;
    }
    else if (city == "MASSIMENO")
    {
        city = "F045";
        finished = true;
    }
    else if (city == "MASSIMINO")
    {
        city = "F046";
        finished = true;
    }
    else if (city == "MASSINOVISCONTI")
    {
        city = "F047";
        finished = true;
    }
    else if (city == "MASSIOLA")
    {
        city = "F048";
        finished = true;
    }
    else if (city == "MASULLAS")
    {
        city = "F050";
        finished = true;
    }
    else if (city == "MATELICA")
    {
        city = "F051";
        finished = true;
    }
    else if (city == "MATERA")
    {
        city = "F052";
        finished = true;
    }
    else if (city == "MATHI")
    {
        city = "F053";
        finished = true;
    }
    else if (city == "MATINO")
    {
        city = "F054";
        finished = true;
    }
    else if (city == "MATRICE")
    {
        city = "F055";
        finished = true;
    }
    else if (city == "MATTIE")
    {
        city = "F058";
        finished = true;
    }
    else if (city == "MATTINATA")
    {
        city = "F059";
        finished = true;
    }
    else if (city == "MAZARADELVALLO")
    {
        city = "F061";
        finished = true;
    }
    else if (city == "MAZZANO")
    {
        city = "F063";
        finished = true;
    }
    else if (city == "MAZZANOROMANO")
    {
        city = "F064";
        finished = true;
    }
    else if (city == "MAZZARINO")
    {
        city = "F065";
        finished = true;
    }
    else if (city == "MAZZARRA'SANT'ANDREA")
    {
        city = "F066";
        finished = true;
    }
    else if (city == "MAZZARRONE")
    {
        city = "M271";
        finished = true;
    }
    else if (city == "MAZZE'")
    {
        city = "F067";
        finished = true;
    }
    else if (city == "MAZZIN")
    {
        city = "F068";
        finished = true;
    }
    else if (city == "MAZZODIVALTELLINA")
    {
        city = "F070";
        finished = true;
    }
    else if (city == "MEANADISUSA")
    {
        city = "F074";
        finished = true;
    }
    else if (city == "MEANASARDO")
    {
        city = "F073";
        finished = true;
    }
    else if (city == "MEDA")
    {
        city = "F078";
        finished = true;
    }
    else if (city == "MEDE")
    {
        city = "F080";
        finished = true;
    }
    else if (city == "MEDEA")
    {
        city = "F081";
        finished = true;
    }
    else if (city == "MEDESANO")
    {
        city = "F082";
        finished = true;
    }
    else if (city == "MEDICINA")
    {
        city = "F083";
        finished = true;
    }
    else if (city == "MEDIGLIA")
    {
        city = "F084";
        finished = true;
    }
    else if (city == "MEDOLAGO")
    {
        city = "F085";
        finished = true;
    }
    else if (city == "MEDOLE")
    {
        city = "F086";
        finished = true;
    }
    else if (city == "MEDOLLA")
    {
        city = "F087";
        finished = true;
    }
    else if (city == "MEDUNADILIVENZA")
    {
        city = "F088";
        finished = true;
    }
    else if (city == "MEDUNO")
    {
        city = "F089";
        finished = true;
    }
    else if (city == "MEGLIADINOSANFIDENZIO")
    {
        city = "F091";
        finished = true;
    }
    else if (city == "MEGLIADINOSANVITALE")
    {
        city = "F092";
        finished = true;
    }
    else if (city == "MEINA")
    {
        city = "F093";
        finished = true;
    }
    else if (city == "MEL")
    {
        city = "F094";
        finished = true;
    }
    else if (city == "MELARA")
    {
        city = "F095";
        finished = true;
    }
    else if (city == "MELAZZO")
    {
        city = "F096";
        finished = true;
    }
    else if (city == "MELDOLA")
    {
        city = "F097";
        finished = true;
    }
    else if (city == "MELE")
    {
        city = "F098";
        finished = true;
    }
    else if (city == "MELEGNANO")
    {
        city = "F100";
        finished = true;
    }
    else if (city == "MELENDUGNO")
    {
        city = "F101";
        finished = true;
    }
    else if (city == "MELETI")
    {
        city = "F102";
        finished = true;
    }
    else if (city == "MELFI")
    {
        city = "F104";
        finished = true;
    }
    else if (city == "MELICUCCA'")
    {
        city = "F105";
        finished = true;
    }
    else if (city == "MELICUCCO")
    {
        city = "F106";
        finished = true;
    }
    else if (city == "MELILLI")
    {
        city = "F107";
        finished = true;
    }
    else if (city == "MELISSA")
    {
        city = "F108";
        finished = true;
    }
    else if (city == "MELISSANO")
    {
        city = "F109";
        finished = true;
    }
    else if (city == "MELITODINAPOLI")
    {
        city = "F111";
        finished = true;
    }
    else if (city == "MELITODIPORTOSALVO")
    {
        city = "F112";
        finished = true;
    }
    else if (city == "MELITOIRPINO")
    {
        city = "F110";
        finished = true;
    }
    else if (city == "MELIZZANO")
    {
        city = "F113";
        finished = true;
    }
    else if (city == "MELLE")
    {
        city = "F114";
        finished = true;
    }
    else if (city == "MELLO")
    {
        city = "F115";
        finished = true;
    }
    else if (city == "MELPIGNANO")
    {
        city = "F117";
        finished = true;
    }
    else if (city == "MELTINA.MOELTEN.")
    {
        city = "F118";
        finished = true;
    }
    else if (city == "MELZO")
    {
        city = "F119";
        finished = true;
    }
    else if (city == "MENAGGIO")
    {
        city = "F120";
        finished = true;
    }
    else if (city == "MENAROLA")
    {
        city = "F121";
        finished = true;
    }
    else if (city == "MENCONICO")
    {
        city = "F122";
        finished = true;
    }
    else if (city == "MENDATICA")
    {
        city = "F123";
        finished = true;
    }
    else if (city == "MENDICINO")
    {
        city = "F125";
        finished = true;
    }
    else if (city == "MENFI")
    {
        city = "F126";
        finished = true;
    }
    else if (city == "MENTANA")
    {
        city = "F127";
        finished = true;
    }
    else if (city == "MEOLO")
    {
        city = "F130";
        finished = true;
    }
    else if (city == "MERANA")
    {
        city = "F131";
        finished = true;
    }
    else if (city == "MERANO.MERAN.")
    {
        city = "F132";
        finished = true;
    }
    else if (city == "MERATE")
    {
        city = "F133";
        finished = true;
    }
    else if (city == "MERCALLO")
    {
        city = "F134";
        finished = true;
    }
    else if (city == "MERCATELLOSULMETAURO")
    {
        city = "F135";
        finished = true;
    }
    else if (city == "MERCATINOCONCA")
    {
        city = "F136";
        finished = true;
    }
    else if (city == "MERCATOSANSEVERINO")
    {
        city = "F138";
        finished = true;
    }
    else if (city == "MERCATOSARACENO")
    {
        city = "F139";
        finished = true;
    }
    else if (city == "MERCENASCO")
    {
        city = "F140";
        finished = true;
    }
    else if (city == "MERCOGLIANO")
    {
        city = "F141";
        finished = true;
    }
    else if (city == "MERETODITOMBA")
    {
        city = "F144";
        finished = true;
    }
    else if (city == "MERGO")
    {
        city = "F145";
        finished = true;
    }
    else if (city == "MERGOZZO")
    {
        city = "F146";
        finished = true;
    }
    else if (city == "MERI'")
    {
        city = "F147";
        finished = true;
    }
    else if (city == "MERLARA")
    {
        city = "F148";
        finished = true;
    }
    else if (city == "MERLINO")
    {
        city = "F149";
        finished = true;
    }
    else if (city == "MERONE")
    {
        city = "F151";
        finished = true;
    }
    else if (city == "MESAGNE")
    {
        city = "F152";
        finished = true;
    }
    else if (city == "MESE")
    {
        city = "F153";
        finished = true;
    }
    else if (city == "MESENZANA")
    {
        city = "F154";
        finished = true;
    }
    else if (city == "MESERO")
    {
        city = "F155";
        finished = true;
    }
    else if (city == "MESOLA")
    {
        city = "F156";
        finished = true;
    }
    else if (city == "MESORACA")
    {
        city = "F157";
        finished = true;
    }
    else if (city == "MESSINA")
    {
        city = "F158";
        finished = true;
    }
    else if (city == "MESTRINO")
    {
        city = "F161";
        finished = true;
    }
    else if (city == "META")
    {
        city = "F162";
        finished = true;
    }
    else if (city == "MEUGLIANO")
    {
        city = "F164";
        finished = true;
    }
    else if (city == "MEZZAGO")
    {
        city = "F165";
        finished = true;
    }
    else if (city == "MEZZANA")
    {
        city = "F168";
        finished = true;
    }
    else if (city == "MEZZANABIGLI")
    {
        city = "F170";
        finished = true;
    }
    else if (city == "MEZZANAMORTIGLIENGO")
    {
        city = "F167";
        finished = true;
    }
    else if (city == "MEZZANARABATTONE")
    {
        city = "F171";
        finished = true;
    }
    else if (city == "MEZZANEDISOTTO")
    {
        city = "F172";
        finished = true;
    }
    else if (city == "MEZZANEGO")
    {
        city = "F173";
        finished = true;
    }
    else if (city == "MEZZANI")
    {
        city = "F174";
        finished = true;
    }
    else if (city == "MEZZANINO")
    {
        city = "F175";
        finished = true;
    }
    else if (city == "MEZZANO")
    {
        city = "F176";
        finished = true;
    }
    else if (city == "MEZZEGRA")
    {
        city = "F181";
        finished = true;
    }
    else if (city == "MEZZENILE")
    {
        city = "F182";
        finished = true;
    }
    else if (city == "MEZZOCORONA")
    {
        city = "F183";
        finished = true;
    }
    else if (city == "MEZZOJUSO")
    {
        city = "F184";
        finished = true;
    }
    else if (city == "MEZZOLDO")
    {
        city = "F186";
        finished = true;
    }
    else if (city == "MEZZOLOMBARDO")
    {
        city = "F187";
        finished = true;
    }
    else if (city == "MEZZOMERICO")
    {
        city = "F188";
        finished = true;
    }
    else if (city == "MIAGLIANO")
    {
        city = "F189";
        finished = true;
    }
    else if (city == "MIANE")
    {
        city = "F190";
        finished = true;
    }
    else if (city == "MIASINO")
    {
        city = "F191";
        finished = true;
    }
    else if (city == "MIAZZINA")
    {
        city = "F192";
        finished = true;
    }
    else if (city == "MICIGLIANO")
    {
        city = "F193";
        finished = true;
    }
    else if (city == "MIGGIANO")
    {
        city = "F194";
        finished = true;
    }
    else if (city == "MIGLIANICO")
    {
        city = "F196";
        finished = true;
    }
    else if (city == "MIGLIARINO")
    {
        city = "F198";
        finished = true;
    }
    else if (city == "MIGLIARO")
    {
        city = "F199";
        finished = true;
    }
    else if (city == "MIGLIERINA")
    {
        city = "F200";
        finished = true;
    }
    else if (city == "MIGLIONICO")
    {
        city = "F201";
        finished = true;
    }
    else if (city == "MIGNANEGO")
    {
        city = "F202";
        finished = true;
    }
    else if (city == "MIGNANOMONTELUNGO")
    {
        city = "F203";
        finished = true;
    }
    else if (city == "MILANO")
    {
        city = "F205";
        finished = true;
    }
    else if (city == "MILAZZO")
    {
        city = "F206";
        finished = true;
    }
    else if (city == "MILENA")
    {
        city = "E618";
        finished = true;
    }
    else if (city == "MILETO")
    {
        city = "F207";
        finished = true;
    }
    else if (city == "MILIS")
    {
        city = "F208";
        finished = true;
    }
    else if (city == "MILITELLOINVALDICATANIA")
    {
        city = "F209";
        finished = true;
    }
    else if (city == "MILITELLOROSMARINO")
    {
        city = "F210";
        finished = true;
    }
    else if (city == "MILLESIMO")
    {
        city = "F213";
        finished = true;
    }
    else if (city == "MILO")
    {
        city = "F214";
        finished = true;
    }
    else if (city == "MILZANO")
    {
        city = "F216";
        finished = true;
    }
    else if (city == "MINEO")
    {
        city = "F217";
        finished = true;
    }
    else if (city == "MINERBE")
    {
        city = "F218";
        finished = true;
    }
    else if (city == "MINERBIO")
    {
        city = "F219";
        finished = true;
    }
    else if (city == "MINERVINODILECCE")
    {
        city = "F221";
        finished = true;
    }
    else if (city == "MINERVINOMURGE")
    {
        city = "F220";
        finished = true;
    }
    else if (city == "MINORI")
    {
        city = "F223";
        finished = true;
    }
    else if (city == "MINTURNO")
    {
        city = "F224";
        finished = true;
    }
    else if (city == "MINUCCIANO")
    {
        city = "F225";
        finished = true;
    }
    else if (city == "MIOGLIA")
    {
        city = "F226";
        finished = true;
    }
    else if (city == "MIRA")
    {
        city = "F229";
        finished = true;
    }
    else if (city == "MIRABELLAECLANO")
    {
        city = "F230";
        finished = true;
    }
    else if (city == "MIRABELLAIMBACCARI")
    {
        city = "F231";
        finished = true;
    }
    else if (city == "MIRABELLO")
    {
        city = "F235";
        finished = true;
    }
    else if (city == "MIRABELLOMONFERRATO")
    {
        city = "F232";
        finished = true;
    }
    else if (city == "MIRABELLOSANNITICO")
    {
        city = "F233";
        finished = true;
    }
    else if (city == "MIRADOLOTERME")
    {
        city = "F238";
        finished = true;
    }
    else if (city == "MIRANDA")
    {
        city = "F239";
        finished = true;
    }
    else if (city == "MIRANDOLA")
    {
        city = "F240";
        finished = true;
    }
    else if (city == "MIRANO")
    {
        city = "F241";
        finished = true;
    }
    else if (city == "MIRTO")
    {
        city = "F242";
        finished = true;
    }
    else if (city == "MISANOADRIATICO")
    {
        city = "F244";
        finished = true;
    }
    else if (city == "MISANODIGERAD'ADDA")
    {
        city = "F243";
        finished = true;
    }
    else if (city == "MISILISCEMI")
    {
        city = "M432";
        finished = true;
    }
    else if (city == "MISILMERI")
    {
        city = "F246";
        finished = true;
    }
    else if (city == "MISINTO")
    {
        city = "F247";
        finished = true;
    }
    else if (city == "MISSAGLIA")
    {
        city = "F248";
        finished = true;
    }
    else if (city == "MISSANELLO")
    {
        city = "F249";
        finished = true;
    }
    else if (city == "MISTERBIANCO")
    {
        city = "F250";
        finished = true;
    }
    else if (city == "MISTRETTA")
    {
        city = "F251";
        finished = true;
    }
    else if (city == "MOASCA")
    {
        city = "F254";
        finished = true;
    }
    else if (city == "MOCONESI")
    {
        city = "F256";
        finished = true;
    }
    else if (city == "MODENA")
    {
        city = "F257";
        finished = true;
    }
    else if (city == "MODICA")
    {
        city = "F258";
        finished = true;
    }
    else if (city == "MODIGLIANA")
    {
        city = "F259";
        finished = true;
    }
    else if (city == "MODOLO")
    {
        city = "F261";
        finished = true;
    }
    else if (city == "MODUGNO")
    {
        city = "F262";
        finished = true;
    }
    else if (city == "MOENA")
    {
        city = "F263";
        finished = true;
    }
    else if (city == "MOGGIO")
    {
        city = "F265";
        finished = true;
    }
    else if (city == "MOGGIOUDINESE")
    {
        city = "F266";
        finished = true;
    }
    else if (city == "MOGLIA")
    {
        city = "F267";
        finished = true;
    }
    else if (city == "MOGLIANO")
    {
        city = "F268";
        finished = true;
    }
    else if (city == "MOGLIANOVENETO")
    {
        city = "F269";
        finished = true;
    }
    else if (city == "MOGORELLA")
    {
        city = "F270";
        finished = true;
    }
    else if (city == "MOGORO")
    {
        city = "F272";
        finished = true;
    }
    else if (city == "MOIANO")
    {
        city = "F274";
        finished = true;
    }
    else if (city == "MOIMACCO")
    {
        city = "F275";
        finished = true;
    }
    else if (city == "MOIOALCANTARA")
    {
        city = "F277";
        finished = true;
    }
    else if (city == "MOIODE'CALVI")
    {
        city = "F276";
        finished = true;
    }
    else if (city == "MOIODELLACIVITELLA")
    {
        city = "F278";
        finished = true;
    }
    else if (city == "MOIOLA")
    {
        city = "F279";
        finished = true;
    }
    else if (city == "MOLADIBARI")
    {
        city = "F280";
        finished = true;
    }
    else if (city == "MOLARE")
    {
        city = "F281";
        finished = true;
    }
    else if (city == "MOLAZZANA")
    {
        city = "F283";
        finished = true;
    }
    else if (city == "MOLFETTA")
    {
        city = "F284";
        finished = true;
    }
    else if (city == "MOLINAATERNO")
    {
        city = "M255";
        finished = true;
    }
    else if (city == "MOLINADILEDRO")
    {
        city = "F286";
        finished = true;
    }
    else if (city == "MOLINARA")
    {
        city = "F287";
        finished = true;
    }
    else if (city == "MOLINELLA")
    {
        city = "F288";
        finished = true;
    }
    else if (city == "MOLINIDITRIORA")
    {
        city = "F290";
        finished = true;
    }
    else if (city == "MOLINODEITORTI")
    {
        city = "F293";
        finished = true;
    }
    else if (city == "MOLISE")
    {
        city = "F294";
        finished = true;
    }
    else if (city == "MOLITERNO")
    {
        city = "F295";
        finished = true;
    }
    else if (city == "MOLLIA")
    {
        city = "F297";
        finished = true;
    }
    else if (city == "MOLOCHIO")
    {
        city = "F301";
        finished = true;
    }
    else if (city == "MOLTENO")
    {
        city = "F304";
        finished = true;
    }
    else if (city == "MOLTRASIO")
    {
        city = "F305";
        finished = true;
    }
    else if (city == "MOLVENA")
    {
        city = "F306";
        finished = true;
    }
    else if (city == "MOLVENO")
    {
        city = "F307";
        finished = true;
    }
    else if (city == "MOMBALDONE")
    {
        city = "F308";
        finished = true;
    }
    else if (city == "MOMBARCARO")
    {
        city = "F309";
        finished = true;
    }
    else if (city == "MOMBAROCCIO")
    {
        city = "F310";
        finished = true;
    }
    else if (city == "MOMBARUZZO")
    {
        city = "F311";
        finished = true;
    }
    else if (city == "MOMBASIGLIO")
    {
        city = "F312";
        finished = true;
    }
    else if (city == "MOMBELLODITORINO")
    {
        city = "F315";
        finished = true;
    }
    else if (city == "MOMBELLOMONFERRATO")
    {
        city = "F313";
        finished = true;
    }
    else if (city == "MOMBERCELLI")
    {
        city = "F316";
        finished = true;
    }
    else if (city == "MOMO")
    {
        city = "F317";
        finished = true;
    }
    else if (city == "MOMPANTERO")
    {
        city = "F318";
        finished = true;
    }
    else if (city == "MOMPEO")
    {
        city = "F319";
        finished = true;
    }
    else if (city == "MOMPERONE")
    {
        city = "F320";
        finished = true;
    }
    else if (city == "MONACILIONI")
    {
        city = "F322";
        finished = true;
    }
    else if (city == "MONALE")
    {
        city = "F323";
        finished = true;
    }
    else if (city == "MONASTERACE")
    {
        city = "F324";
        finished = true;
    }
    else if (city == "MONASTEROBORMIDA")
    {
        city = "F325";
        finished = true;
    }
    else if (city == "MONASTERODILANZO")
    {
        city = "F327";
        finished = true;
    }
    else if (city == "MONASTERODIVASCO")
    {
        city = "F326";
        finished = true;
    }
    else if (city == "MONASTEROLOCASOTTO")
    {
        city = "F329";
        finished = true;
    }
    else if (city == "MONASTEROLODELCASTELLO")
    {
        city = "F328";
        finished = true;
    }
    else if (city == "MONASTEROLODISAVIGLIANO")
    {
        city = "F330";
        finished = true;
    }
    else if (city == "MONASTIERDITREVISO")
    {
        city = "F332";
        finished = true;
    }
    else if (city == "MONASTIR")
    {
        city = "F333";
        finished = true;
    }
    else if (city == "MONCALIERI")
    {
        city = "F335";
        finished = true;
    }
    else if (city == "MONCALVO")
    {
        city = "F336";
        finished = true;
    }
    else if (city == "MONCENISIO")
    {
        city = "D553";
        finished = true;
    }
    else if (city == "MONCESTINO")
    {
        city = "F337";
        finished = true;
    }
    else if (city == "MONCHIERO")
    {
        city = "F338";
        finished = true;
    }
    else if (city == "MONCHIODELLECORTI")
    {
        city = "F340";
        finished = true;
    }
    else if (city == "MONCLASSICO")
    {
        city = "F341";
        finished = true;
    }
    else if (city == "MONCRIVELLO")
    {
        city = "F342";
        finished = true;
    }
    else if (city == "MONCUCCOTORINESE")
    {
        city = "F343";
        finished = true;
    }
    else if (city == "MONDAINO")
    {
        city = "F346";
        finished = true;
    }
    else if (city == "MONDAVIO")
    {
        city = "F347";
        finished = true;
    }
    else if (city == "MONDOLFO")
    {
        city = "F348";
        finished = true;
    }
    else if (city == "MONDOVI'")
    {
        city = "F351";
        finished = true;
    }
    else if (city == "MONDRAGONE")
    {
        city = "F352";
        finished = true;
    }
    else if (city == "MONEGLIA")
    {
        city = "F354";
        finished = true;
    }
    else if (city == "MONESIGLIO")
    {
        city = "F355";
        finished = true;
    }
    else if (city == "MONFALCONE")
    {
        city = "F356";
        finished = true;
    }
    else if (city == "MONFORTED'ALBA")
    {
        city = "F358";
        finished = true;
    }
    else if (city == "MONFORTESANGIORGIO")
    {
        city = "F359";
        finished = true;
    }
    else if (city == "MONFUMO")
    {
        city = "F360";
        finished = true;
    }
    else if (city == "MONGARDINO")
    {
        city = "F361";
        finished = true;
    }
    else if (city == "MONGHIDORO")
    {
        city = "F363";
        finished = true;
    }
    else if (city == "MONGIANA")
    {
        city = "F364";
        finished = true;
    }
    else if (city == "MONGIARDINOLIGURE")
    {
        city = "F365";
        finished = true;
    }
    else if (city == "MONGIUFFIMELIA")
    {
        city = "F368";
        finished = true;
    }
    else if (city == "MONGRANDO")
    {
        city = "F369";
        finished = true;
    }
    else if (city == "MONGRASSANO")
    {
        city = "F370";
        finished = true;
    }
    else if (city == "MONGUELFO-TESIDO.WELSBERG-TAISTEN.")
    {
        city = "F371";
        finished = true;
    }
    else if (city == "MONGUZZO")
    {
        city = "F372";
        finished = true;
    }
    else if (city == "MONIGADELGARDA")
    {
        city = "F373";
        finished = true;
    }
    else if (city == "MONLEALE")
    {
        city = "F374";
        finished = true;
    }
    else if (city == "MONNO")
    {
        city = "F375";
        finished = true;
    }
    else if (city == "MONOPOLI")
    {
        city = "F376";
        finished = true;
    }
    else if (city == "MONREALE")
    {
        city = "F377";
        finished = true;
    }
    else if (city == "MONRUPINO")
    {
        city = "F378";
        finished = true;
    }
    else if (city == "MONSAMPIETROMORICO")
    {
        city = "F379";
        finished = true;
    }
    else if (city == "MONSAMPOLODELTRONTO")
    {
        city = "F380";
        finished = true;
    }
    else if (city == "MONSANO")
    {
        city = "F381";
        finished = true;
    }
    else if (city == "MONSELICE")
    {
        city = "F382";
        finished = true;
    }
    else if (city == "MONSERRATO")
    {
        city = "F383";
        finished = true;
    }
    else if (city == "MONSUMMANOTERME")
    {
        city = "F384";
        finished = true;
    }
    else if (city == "MONTA'")
    {
        city = "F385";
        finished = true;
    }
    else if (city == "MONTABONE")
    {
        city = "F386";
        finished = true;
    }
    else if (city == "MONTACUTO")
    {
        city = "F387";
        finished = true;
    }
    else if (city == "MONTAFIA")
    {
        city = "F390";
        finished = true;
    }
    else if (city == "MONTAGANO")
    {
        city = "F391";
        finished = true;
    }
    else if (city == "MONTAGNAINVALTELLINA")
    {
        city = "F393";
        finished = true;
    }
    else if (city == "MONTAGNA.MONTAN.")
    {
        city = "F392";
        finished = true;
    }
    else if (city == "MONTAGNANA")
    {
        city = "F394";
        finished = true;
    }
    else if (city == "MONTAGNAREALE")
    {
        city = "F395";
        finished = true;
    }
    else if (city == "MONTAGNE")
    {
        city = "F396";
        finished = true;
    }
    else if (city == "MONTAGUTO")
    {
        city = "F397";
        finished = true;
    }
    else if (city == "MONTAIONE")
    {
        city = "F398";
        finished = true;
    }
    else if (city == "MONTALBANOELICONA")
    {
        city = "F400";
        finished = true;
    }
    else if (city == "MONTALBANOJONICO")
    {
        city = "F399";
        finished = true;
    }
    else if (city == "MONTALCINO")
    {
        city = "M378";
        finished = true;
    }
    else if (city == "MONTALCINO")
    {
        city = "F402";
        finished = true;
    }
    else if (city == "MONTALDEO")
    {
        city = "F403";
        finished = true;
    }
    else if (city == "MONTALDOBORMIDA")
    {
        city = "F404";
        finished = true;
    }
    else if (city == "MONTALDODIMONDOVI'")
    {
        city = "F405";
        finished = true;
    }
    else if (city == "MONTALDOROERO")
    {
        city = "F408";
        finished = true;
    }
    else if (city == "MONTALDOSCARAMPI")
    {
        city = "F409";
        finished = true;
    }
    else if (city == "MONTALDOTORINESE")
    {
        city = "F407";
        finished = true;
    }
    else if (city == "MONTALE")
    {
        city = "F410";
        finished = true;
    }
    else if (city == "MONTALENGHE")
    {
        city = "F411";
        finished = true;
    }
    else if (city == "MONTALLEGRO")
    {
        city = "F414";
        finished = true;
    }
    else if (city == "MONTALTOCARPASIO")
    {
        city = "M387";
        finished = true;
    }
    else if (city == "MONTALTODELLEMARCHE")
    {
        city = "F415";
        finished = true;
    }
    else if (city == "MONTALTODICASTRO")
    {
        city = "F419";
        finished = true;
    }
    else if (city == "MONTALTODORA")
    {
        city = "F420";
        finished = true;
    }
    else if (city == "MONTALTOLIGURE")
    {
        city = "F406";
        finished = true;
    }
    else if (city == "MONTALTOPAVESE")
    {
        city = "F417";
        finished = true;
    }
    else if (city == "MONTALTOUFFUGO")
    {
        city = "F416";
        finished = true;
    }
    else if (city == "MONTANARO")
    {
        city = "F422";
        finished = true;
    }
    else if (city == "MONTANASOLOMBARDO")
    {
        city = "F423";
        finished = true;
    }
    else if (city == "MONTANERA")
    {
        city = "F424";
        finished = true;
    }
    else if (city == "MONTANOANTILIA")
    {
        city = "F426";
        finished = true;
    }
    else if (city == "MONTANOLUCINO")
    {
        city = "F427";
        finished = true;
    }
    else if (city == "MONTAPPONE")
    {
        city = "F428";
        finished = true;
    }
    else if (city == "MONTAQUILA")
    {
        city = "F429";
        finished = true;
    }
    else if (city == "MONTASOLA")
    {
        city = "F430";
        finished = true;
    }
    else if (city == "MONTAURO")
    {
        city = "F432";
        finished = true;
    }
    else if (city == "MONTAZZOLI")
    {
        city = "F433";
        finished = true;
    }
    else if (city == "MONTEARGENTARIO")
    {
        city = "F437";
        finished = true;
    }
    else if (city == "MONTECASTELLODIVIBIO")
    {
        city = "F456";
        finished = true;
    }
    else if (city == "MONTECAVALLO")
    {
        city = "F460";
        finished = true;
    }
    else if (city == "MONTECERIGNONE")
    {
        city = "F467";
        finished = true;
    }
    else if (city == "MONTECOLOMBO")
    {
        city = "F476";
        finished = true;
    }
    else if (city == "MONTECOMPATRI")
    {
        city = "F477";
        finished = true;
    }
    else if (city == "MONTECREMASCO")
    {
        city = "F434";
        finished = true;
    }
    else if (city == "MONTEDIMALO")
    {
        city = "F486";
        finished = true;
    }
    else if (city == "MONTEDIPROCIDA")
    {
        city = "F488";
        finished = true;
    }
    else if (city == "MONTEGIBERTO")
    {
        city = "F517";
        finished = true;
    }
    else if (city == "MONTEGRIMANOTERME")
    {
        city = "F524";
        finished = true;
    }
    else if (city == "MONTEISOLA")
    {
        city = "F532";
        finished = true;
    }
    else if (city == "MONTEMARENZO")
    {
        city = "F561";
        finished = true;
    }
    else if (city == "MONTEPORZIO")
    {
        city = "F589";
        finished = true;
    }
    else if (city == "MONTEPORZIOCATONE")
    {
        city = "F590";
        finished = true;
    }
    else if (city == "MONTERINALDO")
    {
        city = "F599";
        finished = true;
    }
    else if (city == "MONTEROBERTO")
    {
        city = "F600";
        finished = true;
    }
    else if (city == "MONTEROMANO")
    {
        city = "F603";
        finished = true;
    }
    else if (city == "MONTESANBIAGIO")
    {
        city = "F616";
        finished = true;
    }
    else if (city == "MONTESANGIACOMO")
    {
        city = "F618";
        finished = true;
    }
    else if (city == "MONTESANGIOVANNICAMPANO")
    {
        city = "F620";
        finished = true;
    }
    else if (city == "MONTESANGIOVANNIINSABINA")
    {
        city = "F619";
        finished = true;
    }
    else if (city == "MONTESANGIUSTO")
    {
        city = "F621";
        finished = true;
    }
    else if (city == "MONTESANMARTINO")
    {
        city = "F622";
        finished = true;
    }
    else if (city == "MONTESANPIETRANGELI")
    {
        city = "F626";
        finished = true;
    }
    else if (city == "MONTESANPIETRO")
    {
        city = "F627";
        finished = true;
    }
    else if (city == "MONTESANSAVINO")
    {
        city = "F628";
        finished = true;
    }
    else if (city == "MONTESANVITO")
    {
        city = "F634";
        finished = true;
    }
    else if (city == "MONTESANTAMARIATIBERINA")
    {
        city = "F629";
        finished = true;
    }
    else if (city == "MONTESANT'ANGELO")
    {
        city = "F631";
        finished = true;
    }
    else if (city == "MONTEURANO")
    {
        city = "F653";
        finished = true;
    }
    else if (city == "MONTEVIDONCOMBATTE")
    {
        city = "F664";
        finished = true;
    }
    else if (city == "MONTEVIDONCORRADO")
    {
        city = "F665";
        finished = true;
    }
    else if (city == "MONTEBELLODELLABATTAGLIA")
    {
        city = "F440";
        finished = true;
    }
    else if (city == "MONTEBELLODIBERTONA")
    {
        city = "F441";
        finished = true;
    }
    else if (city == "MONTEBELLOJONICO")
    {
        city = "D746";
        finished = true;
    }
    else if (city == "MONTEBELLOSULSANGRO")
    {
        city = "B268";
        finished = true;
    }
    else if (city == "MONTEBELLOVICENTINO")
    {
        city = "F442";
        finished = true;
    }
    else if (city == "MONTEBELLUNA")
    {
        city = "F443";
        finished = true;
    }
    else if (city == "MONTEBRUNO")
    {
        city = "F445";
        finished = true;
    }
    else if (city == "MONTEBUONO")
    {
        city = "F446";
        finished = true;
    }
    else if (city == "MONTECALVOINFOGLIA")
    {
        city = "F450";
        finished = true;
    }
    else if (city == "MONTECALVOIRPINO")
    {
        city = "F448";
        finished = true;
    }
    else if (city == "MONTECALVOVERSIGGIA")
    {
        city = "F449";
        finished = true;
    }
    else if (city == "MONTECARLO")
    {
        city = "F452";
        finished = true;
    }
    else if (city == "MONTECAROTTO")
    {
        city = "F453";
        finished = true;
    }
    else if (city == "MONTECASSIANO")
    {
        city = "F454";
        finished = true;
    }
    else if (city == "MONTECASTELLO")
    {
        city = "F455";
        finished = true;
    }
    else if (city == "MONTECASTRILLI")
    {
        city = "F457";
        finished = true;
    }
    else if (city == "MONTECATINIVALDICECINA")
    {
        city = "F458";
        finished = true;
    }
    else if (city == "MONTECATINI-TERME")
    {
        city = "A561";
        finished = true;
    }
    else if (city == "MONTECCHIADICROSARA")
    {
        city = "F461";
        finished = true;
    }
    else if (city == "MONTECCHIO")
    {
        city = "F462";
        finished = true;
    }
    else if (city == "MONTECCHIOEMILIA")
    {
        city = "F463";
        finished = true;
    }
    else if (city == "MONTECCHIOMAGGIORE")
    {
        city = "F464";
        finished = true;
    }
    else if (city == "MONTECCHIOPRECALCINO")
    {
        city = "F465";
        finished = true;
    }
    else if (city == "MONTECHIAROD'ACQUI")
    {
        city = "F469";
        finished = true;
    }
    else if (city == "MONTECHIAROD'ASTI")
    {
        city = "F468";
        finished = true;
    }
    else if (city == "MONTECHIARUGOLO")
    {
        city = "F473";
        finished = true;
    }
    else if (city == "MONTECICCARDO")
    {
        city = "F474";
        finished = true;
    }
    else if (city == "MONTECILFONE")
    {
        city = "F475";
        finished = true;
    }
    else if (city == "MONTECOPIOLO")
    {
        city = "F478";
        finished = true;
    }
    else if (city == "MONTECORICE")
    {
        city = "F479";
        finished = true;
    }
    else if (city == "MONTECORVINOPUGLIANO")
    {
        city = "F480";
        finished = true;
    }
    else if (city == "MONTECORVINOROVELLA")
    {
        city = "F481";
        finished = true;
    }
    else if (city == "MONTECOSARO")
    {
        city = "F482";
        finished = true;
    }
    else if (city == "MONTECRESTESE")
    {
        city = "F483";
        finished = true;
    }
    else if (city == "MONTECRETO")
    {
        city = "F484";
        finished = true;
    }
    else if (city == "MONTEDINOVE")
    {
        city = "F487";
        finished = true;
    }
    else if (city == "MONTEDORO")
    {
        city = "F489";
        finished = true;
    }
    else if (city == "MONTEFALCIONE")
    {
        city = "F491";
        finished = true;
    }
    else if (city == "MONTEFALCO")
    {
        city = "F492";
        finished = true;
    }
    else if (city == "MONTEFALCONEAPPENNINO")
    {
        city = "F493";
        finished = true;
    }
    else if (city == "MONTEFALCONEDIVALFORTORE")
    {
        city = "F494";
        finished = true;
    }
    else if (city == "MONTEFALCONENELSANNIO")
    {
        city = "F495";
        finished = true;
    }
    else if (city == "MONTEFANO")
    {
        city = "F496";
        finished = true;
    }
    else if (city == "MONTEFELCINO")
    {
        city = "F497";
        finished = true;
    }
    else if (city == "MONTEFERRANTE")
    {
        city = "F498";
        finished = true;
    }
    else if (city == "MONTEFIASCONE")
    {
        city = "F499";
        finished = true;
    }
    else if (city == "MONTEFINO")
    {
        city = "F500";
        finished = true;
    }
    else if (city == "MONTEFIORECONCA")
    {
        city = "F502";
        finished = true;
    }
    else if (city == "MONTEFIOREDELL'ASO")
    {
        city = "F501";
        finished = true;
    }
    else if (city == "MONTEFIORINO")
    {
        city = "F503";
        finished = true;
    }
    else if (city == "MONTEFLAVIO")
    {
        city = "F504";
        finished = true;
    }
    else if (city == "MONTEFORTECILENTO")
    {
        city = "F507";
        finished = true;
    }
    else if (city == "MONTEFORTED'ALPONE")
    {
        city = "F508";
        finished = true;
    }
    else if (city == "MONTEFORTEIRPINO")
    {
        city = "F506";
        finished = true;
    }
    else if (city == "MONTEFORTINO")
    {
        city = "F509";
        finished = true;
    }
    else if (city == "MONTEFRANCO")
    {
        city = "F510";
        finished = true;
    }
    else if (city == "MONTEFREDANE")
    {
        city = "F511";
        finished = true;
    }
    else if (city == "MONTEFUSCO")
    {
        city = "F512";
        finished = true;
    }
    else if (city == "MONTEGABBIONE")
    {
        city = "F513";
        finished = true;
    }
    else if (city == "MONTEGALDA")
    {
        city = "F514";
        finished = true;
    }
    else if (city == "MONTEGALDELLA")
    {
        city = "F515";
        finished = true;
    }
    else if (city == "MONTEGALLO")
    {
        city = "F516";
        finished = true;
    }
    else if (city == "MONTEGIOCO")
    {
        city = "F518";
        finished = true;
    }
    else if (city == "MONTEGIORDANO")
    {
        city = "F519";
        finished = true;
    }
    else if (city == "MONTEGIORGIO")
    {
        city = "F520";
        finished = true;
    }
    else if (city == "MONTEGRANARO")
    {
        city = "F522";
        finished = true;
    }
    else if (city == "MONTEGRIDOLFO")
    {
        city = "F523";
        finished = true;
    }
    else if (city == "MONTEGRINOVALTRAVAGLIA")
    {
        city = "F526";
        finished = true;
    }
    else if (city == "MONTEGROSSOD'ASTI")
    {
        city = "F527";
        finished = true;
    }
    else if (city == "MONTEGROSSOPIANLATTE")
    {
        city = "F528";
        finished = true;
    }
    else if (city == "MONTEGROTTOTERME")
    {
        city = "F529";
        finished = true;
    }
    else if (city == "MONTEIASI")
    {
        city = "F531";
        finished = true;
    }
    else if (city == "MONTELABBATE")
    {
        city = "F533";
        finished = true;
    }
    else if (city == "MONTELANICO")
    {
        city = "F534";
        finished = true;
    }
    else if (city == "MONTELAPIANO")
    {
        city = "F535";
        finished = true;
    }
    else if (city == "MONTELEONEDelse ifERMO")
    {
        city = "F536";
        finished = true;
    }
    else if (city == "MONTELEONEDIPUGLIA")
    {
        city = "F538";
        finished = true;
    }
    else if (city == "MONTELEONEDISPOLETO")
    {
        city = "F540";
        finished = true;
    }
    else if (city == "MONTELEONED'ORVIETO")
    {
        city = "F543";
        finished = true;
    }
    else if (city == "MONTELEONEROCCADORIA")
    {
        city = "F542";
        finished = true;
    }
    else if (city == "MONTELEONESABINO")
    {
        city = "F541";
        finished = true;
    }
    else if (city == "MONTELEPRE")
    {
        city = "F544";
        finished = true;
    }
    else if (city == "MONTELIBRETTI")
    {
        city = "F545";
        finished = true;
    }
    else if (city == "MONTELLA")
    {
        city = "F546";
        finished = true;
    }
    else if (city == "MONTELLO")
    {
        city = "F547";
        finished = true;
    }
    else if (city == "MONTELONGO")
    {
        city = "F548";
        finished = true;
    }
    else if (city == "MONTELPARO")
    {
        city = "F549";
        finished = true;
    }
    else if (city == "MONTELUPOALBESE")
    {
        city = "F550";
        finished = true;
    }
    else if (city == "MONTELUPOFIORENTINO")
    {
        city = "F551";
        finished = true;
    }
    else if (city == "MONTELUPONE")
    {
        city = "F552";
        finished = true;
    }
    else if (city == "MONTEMAGGIOREALMETAURO")
    {
        city = "F555";
        finished = true;
    }
    else if (city == "MONTEMAGGIOREBELSITO")
    {
        city = "F553";
        finished = true;
    }
    else if (city == "MONTEMAGNO")
    {
        city = "F556";
        finished = true;
    }
    else if (city == "MONTEMALEDICUNEO")
    {
        city = "F558";
        finished = true;
    }
    else if (city == "MONTEMARANO")
    {
        city = "F559";
        finished = true;
    }
    else if (city == "MONTEMARCIANO")
    {
        city = "F560";
        finished = true;
    }
    else if (city == "MONTEMARZINO")
    {
        city = "F562";
        finished = true;
    }
    else if (city == "MONTEMESOLA")
    {
        city = "F563";
        finished = true;
    }
    else if (city == "MONTEMEZZO")
    {
        city = "F564";
        finished = true;
    }
    else if (city == "MONTEMIGNAIO")
    {
        city = "F565";
        finished = true;
    }
    else if (city == "MONTEMILETTO")
    {
        city = "F566";
        finished = true;
    }
    else if (city == "MONTEMILONE")
    {
        city = "F568";
        finished = true;
    }
    else if (city == "MONTEMITRO")
    {
        city = "F569";
        finished = true;
    }
    else if (city == "MONTEMONACO")
    {
        city = "F570";
        finished = true;
    }
    else if (city == "MONTEMURLO")
    {
        city = "F572";
        finished = true;
    }
    else if (city == "MONTEMURRO")
    {
        city = "F573";
        finished = true;
    }
    else if (city == "MONTENARS")
    {
        city = "F574";
        finished = true;
    }
    else if (city == "MONTENERODIBISACCIA")
    {
        city = "F576";
        finished = true;
    }
    else if (city == "MONTENEROSABINO")
    {
        city = "F579";
        finished = true;
    }
    else if (city == "MONTENEROVALCOCCHIARA")
    {
        city = "F580";
        finished = true;
    }
    else if (city == "MONTENERODOMO")
    {
        city = "F578";
        finished = true;
    }
    else if (city == "MONTEODORISIO")
    {
        city = "F582";
        finished = true;
    }
    else if (city == "MONTEPAONE")
    {
        city = "F586";
        finished = true;
    }
    else if (city == "MONTEPARANO")
    {
        city = "F587";
        finished = true;
    }
    else if (city == "MONTEPRANDONE")
    {
        city = "F591";
        finished = true;
    }
    else if (city == "MONTEPULCIANO")
    {
        city = "F592";
        finished = true;
    }
    else if (city == "MONTERADO")
    {
        city = "F593";
        finished = true;
    }
    else if (city == "MONTERCHI")
    {
        city = "F594";
        finished = true;
    }
    else if (city == "MONTEREALE")
    {
        city = "F595";
        finished = true;
    }
    else if (city == "MONTEREALEVALCELLINA")
    {
        city = "F596";
        finished = true;
    }
    else if (city == "MONTERENZIO")
    {
        city = "F597";
        finished = true;
    }
    else if (city == "MONTERIGGIONI")
    {
        city = "F598";
        finished = true;
    }
    else if (city == "MONTERODUNI")
    {
        city = "F601";
        finished = true;
    }
    else if (city == "MONTERONID'ARBIA")
    {
        city = "F605";
        finished = true;
    }
    else if (city == "MONTERONIDILECCE")
    {
        city = "F604";
        finished = true;
    }
    else if (city == "MONTEROSI")
    {
        city = "F606";
        finished = true;
    }
    else if (city == "MONTEROSSOALMARE")
    {
        city = "F609";
        finished = true;
    }
    else if (city == "MONTEROSSOALMO")
    {
        city = "F610";
        finished = true;
    }
    else if (city == "MONTEROSSOCALABRO")
    {
        city = "F607";
        finished = true;
    }
    else if (city == "MONTEROSSOGRANA")
    {
        city = "F608";
        finished = true;
    }
    else if (city == "MONTEROTONDO")
    {
        city = "F611";
        finished = true;
    }
    else if (city == "MONTEROTONDOMARITTIMO")
    {
        city = "F612";
        finished = true;
    }
    else if (city == "MONTERUBBIANO")
    {
        city = "F614";
        finished = true;
    }
    else if (city == "MONTESANOSALENTINO")
    {
        city = "F623";
        finished = true;
    }
    else if (city == "MONTESANOSULLAMARCELLANA")
    {
        city = "F625";
        finished = true;
    }
    else if (city == "MONTESARCHIO")
    {
        city = "F636";
        finished = true;
    }
    else if (city == "MONTESCAGLIOSO")
    {
        city = "F637";
        finished = true;
    }
    else if (city == "MONTESCANO")
    {
        city = "F638";
        finished = true;
    }
    else if (city == "MONTESCHENO")
    {
        city = "F639";
        finished = true;
    }
    else if (city == "MONTESCUDAIO")
    {
        city = "F640";
        finished = true;
    }
    else if (city == "MONTESCUDO")
    {
        city = "F641";
        finished = true;
    }
    else if (city == "MONTESCUDO-MONTECOLOMBO")
    {
        city = "M368";
        finished = true;
    }
    else if (city == "MONTESE")
    {
        city = "F642";
        finished = true;
    }
    else if (city == "MONTESEGALE")
    {
        city = "F644";
        finished = true;
    }
    else if (city == "MONTESILVANO")
    {
        city = "F646";
        finished = true;
    }
    else if (city == "MONTESPERTOLI")
    {
        city = "F648";
        finished = true;
    }
    else if (city == "MONTEUDAPO")
    {
        city = "F651";
        finished = true;
    }
    else if (city == "MONTEUROERO")
    {
        city = "F654";
        finished = true;
    }
    else if (city == "MONTEVAGO")
    {
        city = "F655";
        finished = true;
    }
    else if (city == "MONTEVARCHI")
    {
        city = "F656";
        finished = true;
    }
    else if (city == "MONTEVECCHIA")
    {
        city = "F657";
        finished = true;
    }
    else if (city == "MONTEVEGLIO")
    {
        city = "F659";
        finished = true;
    }
    else if (city == "MONTEVERDE")
    {
        city = "F660";
        finished = true;
    }
    else if (city == "MONTEVERDIMARITTIMO")
    {
        city = "F661";
        finished = true;
    }
    else if (city == "MONTEVIALE")
    {
        city = "F662";
        finished = true;
    }
    else if (city == "MONTEZEMOLO")
    {
        city = "F666";
        finished = true;
    }
    else if (city == "MONTI")
    {
        city = "F667";
        finished = true;
    }
    else if (city == "MONTIANO")
    {
        city = "F668";
        finished = true;
    }
    else if (city == "MONTICELLIBRUSATI")
    {
        city = "F672";
        finished = true;
    }
    else if (city == "MONTICELLID'ONGINA")
    {
        city = "F671";
        finished = true;
    }
    else if (city == "MONTICELLIPAVESE")
    {
        city = "F670";
        finished = true;
    }
    else if (city == "MONTICELLOBRIANZA")
    {
        city = "F674";
        finished = true;
    }
    else if (city == "MONTICELLOCONTEOTTO")
    {
        city = "F675";
        finished = true;
    }
    else if (city == "MONTICELLOD'ALBA")
    {
        city = "F669";
        finished = true;
    }
    else if (city == "MONTICHIARI")
    {
        city = "F471";
        finished = true;
    }
    else if (city == "MONTICIANO")
    {
        city = "F676";
        finished = true;
    }
    else if (city == "MONTIERI")
    {
        city = "F677";
        finished = true;
    }
    else if (city == "MONTIGLIOMONFERRATO")
    {
        city = "M302";
        finished = true;
    }
    else if (city == "MONTIGNOSO")
    {
        city = "F679";
        finished = true;
    }
    else if (city == "MONTIRONE")
    {
        city = "F680";
        finished = true;
    }
    else if (city == "MONTJOVET")
    {
        city = "F367";
        finished = true;
    }
    else if (city == "MONTODINE")
    {
        city = "F681";
        finished = true;
    }
    else if (city == "MONTOGGIO")
    {
        city = "F682";
        finished = true;
    }
    else if (city == "MONTONE")
    {
        city = "F685";
        finished = true;
    }
    else if (city == "MONTOPOLIDISABINA")
    {
        city = "F687";
        finished = true;
    }
    else if (city == "MONTOPOLIINVALD'ARNO")
    {
        city = "F686";
        finished = true;
    }
    else if (city == "MONTORFANO")
    {
        city = "F688";
        finished = true;
    }
    else if (city == "MONTORIOALVOMANO")
    {
        city = "F690";
        finished = true;
    }
    else if (city == "MONTORIONEelse ifRENTANI")
    {
        city = "F689";
        finished = true;
    }
    else if (city == "MONTORIOROMANO")
    {
        city = "F692";
        finished = true;
    }
    else if (city == "MONTORO")
    {
        city = "M330";
        finished = true;
    }
    else if (city == "MONTOROINFERIORE")
    {
        city = "F693";
        finished = true;
    }
    else if (city == "MONTOROSUPERIORE")
    {
        city = "F694";
        finished = true;
    }
    else if (city == "MONTORSOVICENTINO")
    {
        city = "F696";
        finished = true;
    }
    else if (city == "MONTOTTONE")
    {
        city = "F697";
        finished = true;
    }
    else if (city == "MONTRESTA")
    {
        city = "F698";
        finished = true;
    }
    else if (city == "MONTU'BECCARIA")
    {
        city = "F701";
        finished = true;
    }
    else if (city == "MONVALLE")
    {
        city = "F703";
        finished = true;
    }
    else if (city == "MONZA")
    {
        city = "F704";
        finished = true;
    }
    else if (city == "MONZAMBANO")
    {
        city = "F705";
        finished = true;
    }
    else if (city == "MONZUNO")
    {
        city = "F706";
        finished = true;
    }
    else if (city == "MORANOCALABRO")
    {
        city = "F708";
        finished = true;
    }
    else if (city == "MORANOSULPO")
    {
        city = "F707";
        finished = true;
    }
    else if (city == "MORANSENGO")
    {
        city = "F709";
        finished = true;
    }
    else if (city == "MORARO")
    {
        city = "F710";
        finished = true;
    }
    else if (city == "MORAZZONE")
    {
        city = "F711";
        finished = true;
    }
    else if (city == "MORBEGNO")
    {
        city = "F712";
        finished = true;
    }
    else if (city == "MORBELLO")
    {
        city = "F713";
        finished = true;
    }
    else if (city == "MORCIANODILEUCA")
    {
        city = "F716";
        finished = true;
    }
    else if (city == "MORCIANODIROMAGNA")
    {
        city = "F715";
        finished = true;
    }
    else if (city == "MORCONE")
    {
        city = "F717";
        finished = true;
    }
    else if (city == "MORDANO")
    {
        city = "F718";
        finished = true;
    }
    else if (city == "MORENGO")
    {
        city = "F720";
        finished = true;
    }
    else if (city == "MORES")
    {
        city = "F721";
        finished = true;
    }
    else if (city == "MORESCO")
    {
        city = "F722";
        finished = true;
    }
    else if (city == "MORETTA")
    {
        city = "F723";
        finished = true;
    }
    else if (city == "MORFASSO")
    {
        city = "F724";
        finished = true;
    }
    else if (city == "MORGANO")
    {
        city = "F725";
        finished = true;
    }
    else if (city == "MORGEX")
    {
        city = "F726";
        finished = true;
    }
    else if (city == "MORGONGIORI")
    {
        city = "F727";
        finished = true;
    }
    else if (city == "MORI")
    {
        city = "F728";
        finished = true;
    }
    else if (city == "MORIAGODELLABATTAGLIA")
    {
        city = "F729";
        finished = true;
    }
    else if (city == "MORICONE")
    {
        city = "F730";
        finished = true;
    }
    else if (city == "MORIGERATI")
    {
        city = "F731";
        finished = true;
    }
    else if (city == "MORIMONDO")
    {
        city = "D033";
        finished = true;
    }
    else if (city == "MORINO")
    {
        city = "F732";
        finished = true;
    }
    else if (city == "MORIONDOTORINESE")
    {
        city = "F733";
        finished = true;
    }
    else if (city == "MORLUPO")
    {
        city = "F734";
        finished = true;
    }
    else if (city == "MORMANNO")
    {
        city = "F735";
        finished = true;
    }
    else if (city == "MORNAGO")
    {
        city = "F736";
        finished = true;
    }
    else if (city == "MORNESE")
    {
        city = "F737";
        finished = true;
    }
    else if (city == "MORNICOALSERIO")
    {
        city = "F738";
        finished = true;
    }
    else if (city == "MORNICOLOSANA")
    {
        city = "F739";
        finished = true;
    }
    else if (city == "MOROLO")
    {
        city = "F740";
        finished = true;
    }
    else if (city == "MOROZZO")
    {
        city = "F743";
        finished = true;
    }
    else if (city == "MORRADESANCTIS")
    {
        city = "F744";
        finished = true;
    }
    else if (city == "MORROD'ALBA")
    {
        city = "F745";
        finished = true;
    }
    else if (city == "MORROD'ORO")
    {
        city = "F747";
        finished = true;
    }
    else if (city == "MORROREATINO")
    {
        city = "F746";
        finished = true;
    }
    else if (city == "MORRONEDELSANNIO")
    {
        city = "F748";
        finished = true;
    }
    else if (city == "MORROVALLE")
    {
        city = "F749";
        finished = true;
    }
    else if (city == "MORSANOALTAGLIAMENTO")
    {
        city = "F750";
        finished = true;
    }
    else if (city == "MORSASCO")
    {
        city = "F751";
        finished = true;
    }
    else if (city == "MORTARA")
    {
        city = "F754";
        finished = true;
    }
    else if (city == "MORTEGLIANO")
    {
        city = "F756";
        finished = true;
    }
    else if (city == "MORTERONE")
    {
        city = "F758";
        finished = true;
    }
    else if (city == "MORUZZO")
    {
        city = "F760";
        finished = true;
    }
    else if (city == "MOSCAZZANO")
    {
        city = "F761";
        finished = true;
    }
    else if (city == "MOSCHIANO")
    {
        city = "F762";
        finished = true;
    }
    else if (city == "MOSCIANOSANT'ANGELO")
    {
        city = "F764";
        finished = true;
    }
    else if (city == "MOSCUFO")
    {
        city = "F765";
        finished = true;
    }
    else if (city == "MOSOINPASSIRIA.MOOSINPASSEIER.")
    {
        city = "F766";
        finished = true;
    }
    else if (city == "MOSSA")
    {
        city = "F767";
        finished = true;
    }
    else if (city == "MOSSANO")
    {
        city = "F768";
        finished = true;
    }
    else if (city == "MOSSO")
    {
        city = "M304";
        finished = true;
    }
    else if (city == "MOTTABALUFFI")
    {
        city = "F771";
        finished = true;
    }
    else if (city == "MOTTACAMASTRA")
    {
        city = "F772";
        finished = true;
    }
    else if (city == "MOTTAD'AFFERMO")
    {
        city = "F773";
        finished = true;
    }
    else if (city == "MOTTADE'CONTI")
    {
        city = "F774";
        finished = true;
    }
    else if (city == "MOTTADILIVENZA")
    {
        city = "F770";
        finished = true;
    }
    else if (city == "MOTTAMONTECORVINO")
    {
        city = "F777";
        finished = true;
    }
    else if (city == "MOTTASANGIOVANNI")
    {
        city = "F779";
        finished = true;
    }
    else if (city == "MOTTASANTALUCIA")
    {
        city = "F780";
        finished = true;
    }
    else if (city == "MOTTASANT'ANASTASIA")
    {
        city = "F781";
        finished = true;
    }
    else if (city == "MOTTAVISCONTI")
    {
        city = "F783";
        finished = true;
    }
    else if (city == "MOTTAFOLLONE")
    {
        city = "F775";
        finished = true;
    }
    else if (city == "MOTTALCIATA")
    {
        city = "F776";
        finished = true;
    }
    else if (city == "MOTTEGGIANA")
    {
        city = "B012";
        finished = true;
    }
    else if (city == "MOTTOLA")
    {
        city = "F784";
        finished = true;
    }
    else if (city == "MOZZAGROGNA")
    {
        city = "F785";
        finished = true;
    }
    else if (city == "MOZZANICA")
    {
        city = "F786";
        finished = true;
    }
    else if (city == "MOZZATE")
    {
        city = "F788";
        finished = true;
    }
    else if (city == "MOZZECANE")
    {
        city = "F789";
        finished = true;
    }
    else if (city == "MOZZO")
    {
        city = "F791";
        finished = true;
    }
    else if (city == "MUCCIA")
    {
        city = "F793";
        finished = true;
    }
    else if (city == "MUGGIA")
    {
        city = "F795";
        finished = true;
    }
    else if (city == "MUGGIO'")
    {
        city = "F797";
        finished = true;
    }
    else if (city == "MUGNANODELCARDINALE")
    {
        city = "F798";
        finished = true;
    }
    else if (city == "MUGNANODINAPOLI")
    {
        city = "F799";
        finished = true;
    }
    else if (city == "MULAZZANO")
    {
        city = "F801";
        finished = true;
    }
    else if (city == "MULAZZO")
    {
        city = "F802";
        finished = true;
    }
    else if (city == "MURA")
    {
        city = "F806";
        finished = true;
    }
    else if (city == "MURAVERA")
    {
        city = "F808";
        finished = true;
    }
    else if (city == "MURAZZANO")
    {
        city = "F809";
        finished = true;
    }
    else if (city == "MURELLO")
    {
        city = "F811";
        finished = true;
    }
    else if (city == "MURIALDO")
    {
        city = "F813";
        finished = true;
    }
    else if (city == "MURISENGO")
    {
        city = "F814";
        finished = true;
    }
    else if (city == "MURLO")
    {
        city = "F815";
        finished = true;
    }
    else if (city == "MUROLECCESE")
    {
        city = "F816";
        finished = true;
    }
    else if (city == "MUROLUCANO")
    {
        city = "F817";
        finished = true;
    }
    else if (city == "MUROS")
    {
        city = "F818";
        finished = true;
    }
    else if (city == "MUSCOLINE")
    {
        city = "F820";
        finished = true;
    }
    else if (city == "MUSEI")
    {
        city = "F822";
        finished = true;
    }
    else if (city == "MUSILEDIPIAVE")
    {
        city = "F826";
        finished = true;
    }
    else if (city == "MUSSO")
    {
        city = "F828";
        finished = true;
    }
    else if (city == "MUSSOLENTE")
    {
        city = "F829";
        finished = true;
    }
    else if (city == "MUSSOMELI")
    {
        city = "F830";
        finished = true;
    }
    else if (city == "MUZZANADELTURGNANO")
    {
        city = "F832";
        finished = true;
    }
    else if (city == "MUZZANO")
    {
        city = "F833";
        finished = true;
    }
    else if (city == "NAGO-TORBOLE")
    {
        city = "F835";
        finished = true;
    }
    else if (city == "NALLES.NALS.")
    {
        city = "F836";
        finished = true;
    }
    else if (city == "NANNO")
    {
        city = "F837";
        finished = true;
    }
    else if (city == "NANTO")
    {
        city = "F838";
        finished = true;
    }
    else if (city == "NAPOLI")
    {
        city = "F839";
        finished = true;
    }
    else if (city == "NARBOLIA")
    {
        city = "F840";
        finished = true;
    }
    else if (city == "NARCAO")
    {
        city = "F841";
        finished = true;
    }
    else if (city == "NARDO'")
    {
        city = "F842";
        finished = true;
    }
    else if (city == "NARDODIPACE")
    {
        city = "F843";
        finished = true;
    }
    else if (city == "NARNI")
    {
        city = "F844";
        finished = true;
    }
    else if (city == "NARO")
    {
        city = "F845";
        finished = true;
    }
    else if (city == "NARZOLE")
    {
        city = "F846";
        finished = true;
    }
    else if (city == "NASINO")
    {
        city = "F847";
        finished = true;
    }
    else if (city == "NASO")
    {
        city = "F848";
        finished = true;
    }
    else if (city == "NATURNO.NATURNS.")
    {
        city = "F849";
        finished = true;
    }
    else if (city == "NAVE")
    {
        city = "F851";
        finished = true;
    }
    else if (city == "NAVESANROCCO")
    {
        city = "F853";
        finished = true;
    }
    else if (city == "NAVELLI")
    {
        city = "F852";
        finished = true;
    }
    else if (city == "NAZ-SCIAVES.NATZ-SCHABS.")
    {
        city = "F856";
        finished = true;
    }
    else if (city == "NAZZANO")
    {
        city = "F857";
        finished = true;
    }
    else if (city == "NE")
    {
        city = "F858";
        finished = true;
    }
    else if (city == "NEBBIUNO")
    {
        city = "F859";
        finished = true;
    }
    else if (city == "NEGRARDIVALPOLICELLA")
    {
        city = "F861";
        finished = true;
    }
    else if (city == "NEIRONE")
    {
        city = "F862";
        finished = true;
    }
    else if (city == "NEIVE")
    {
        city = "F863";
        finished = true;
    }
    else if (city == "NEMBRO")
    {
        city = "F864";
        finished = true;
    }
    else if (city == "NEMI")
    {
        city = "F865";
        finished = true;
    }
    else if (city == "NEMOLI")
    {
        city = "F866";
        finished = true;
    }
    else if (city == "NEONELI")
    {
        city = "F867";
        finished = true;
    }
    else if (city == "NEPI")
    {
        city = "F868";
        finished = true;
    }
    else if (city == "NERETO")
    {
        city = "F870";
        finished = true;
    }
    else if (city == "NEROLA")
    {
        city = "F871";
        finished = true;
    }
    else if (city == "NERVESADELLABATTAGLIA")
    {
        city = "F872";
        finished = true;
    }
    else if (city == "NERVIANO")
    {
        city = "F874";
        finished = true;
    }
    else if (city == "NESPOLO")
    {
        city = "F876";
        finished = true;
    }
    else if (city == "NESSO")
    {
        city = "F877";
        finished = true;
    }
    else if (city == "NETRO")
    {
        city = "F878";
        finished = true;
    }
    else if (city == "NETTUNO")
    {
        city = "F880";
        finished = true;
    }
    else if (city == "NEVIANO")
    {
        city = "F881";
        finished = true;
    }
    else if (city == "NEVIANODEGLIARDUINI")
    {
        city = "F882";
        finished = true;
    }
    else if (city == "NEVIGLIE")
    {
        city = "F883";
        finished = true;
    }
    else if (city == "NIARDO")
    {
        city = "F884";
        finished = true;
    }
    else if (city == "NIBBIANO")
    {
        city = "F885";
        finished = true;
    }
    else if (city == "NIBBIOLA")
    {
        city = "F886";
        finished = true;
    }
    else if (city == "NIBIONNO")
    {
        city = "F887";
        finished = true;
    }
    else if (city == "NICHELINO")
    {
        city = "F889";
        finished = true;
    }
    else if (city == "NICOLOSI")
    {
        city = "F890";
        finished = true;
    }
    else if (city == "NICORVO")
    {
        city = "F891";
        finished = true;
    }
    else if (city == "NICOSIA")
    {
        city = "F892";
        finished = true;
    }
    else if (city == "NICOTERA")
    {
        city = "F893";
        finished = true;
    }
    else if (city == "NIELLABELBO")
    {
        city = "F894";
        finished = true;
    }
    else if (city == "NIELLATANARO")
    {
        city = "F895";
        finished = true;
    }
    else if (city == "NIMIS")
    {
        city = "F898";
        finished = true;
    }
    else if (city == "NISCEMI")
    {
        city = "F899";
        finished = true;
    }
    else if (city == "NISSORIA")
    {
        city = "F900";
        finished = true;
    }
    else if (city == "NIZZADISICILIA")
    {
        city = "F901";
        finished = true;
    }
    else if (city == "NIZZAMONFERRATO")
    {
        city = "F902";
        finished = true;
    }
    else if (city == "NOALE")
    {
        city = "F904";
        finished = true;
    }
    else if (city == "NOASCA")
    {
        city = "F906";
        finished = true;
    }
    else if (city == "NOCARA")
    {
        city = "F907";
        finished = true;
    }
    else if (city == "NOCCIANO")
    {
        city = "F908";
        finished = true;
    }
    else if (city == "NOCERAINFERIORE")
    {
        city = "F912";
        finished = true;
    }
    else if (city == "NOCERASUPERIORE")
    {
        city = "F913";
        finished = true;
    }
    else if (city == "NOCERATERINESE")
    {
        city = "F910";
        finished = true;
    }
    else if (city == "NOCERAUMBRA")
    {
        city = "F911";
        finished = true;
    }
    else if (city == "NOCETO")
    {
        city = "F914";
        finished = true;
    }
    else if (city == "NOCI")
    {
        city = "F915";
        finished = true;
    }
    else if (city == "NOCIGLIA")
    {
        city = "F916";
        finished = true;
    }
    else if (city == "NOEPOLI")
    {
        city = "F917";
        finished = true;
    }
    else if (city == "NOGARA")
    {
        city = "F918";
        finished = true;
    }
    else if (city == "NOGAREDO")
    {
        city = "F920";
        finished = true;
    }
    else if (city == "NOGAROLEROCCA")
    {
        city = "F921";
        finished = true;
    }
    else if (city == "NOGAROLEVICENTINO")
    {
        city = "F922";
        finished = true;
    }
    else if (city == "NOICATTARO")
    {
        city = "F923";
        finished = true;
    }
    else if (city == "NOLA")
    {
        city = "F924";
        finished = true;
    }
    else if (city == "NOLE")
    {
        city = "F925";
        finished = true;
    }
    else if (city == "NOLI")
    {
        city = "F926";
        finished = true;
    }
    else if (city == "NOMAGLIO")
    {
        city = "F927";
        finished = true;
    }
    else if (city == "NOMI")
    {
        city = "F929";
        finished = true;
    }
    else if (city == "NONANTOLA")
    {
        city = "F930";
        finished = true;
    }
    else if (city == "NONE")
    {
        city = "F931";
        finished = true;
    }
    else if (city == "NONIO")
    {
        city = "F932";
        finished = true;
    }
    else if (city == "NORAGUGUME")
    {
        city = "F933";
        finished = true;
    }
    else if (city == "NORBELLO")
    {
        city = "F934";
        finished = true;
    }
    else if (city == "NORCIA")
    {
        city = "F935";
        finished = true;
    }
    else if (city == "NORMA")
    {
        city = "F937";
        finished = true;
    }
    else if (city == "NOSATE")
    {
        city = "F939";
        finished = true;
    }
    else if (city == "NOTARESCO")
    {
        city = "F942";
        finished = true;
    }
    else if (city == "NOTO")
    {
        city = "F943";
        finished = true;
    }
    else if (city == "NOVALEVANTE.WELSCHNOFEN.")
    {
        city = "F949";
        finished = true;
    }
    else if (city == "NOVAMILANESE")
    {
        city = "F944";
        finished = true;
    }
    else if (city == "NOVAPONENTE.DEUTSCHNOFEN.")
    {
        city = "F950";
        finished = true;
    }
    else if (city == "NOVASIRI")
    {
        city = "A942";
        finished = true;
    }
    else if (city == "NOVAFELTRIA")
    {
        city = "F137";
        finished = true;
    }
    else if (city == "NOVALEDO")
    {
        city = "F947";
        finished = true;
    }
    else if (city == "NOVALESA")
    {
        city = "F948";
        finished = true;
    }
    else if (city == "NOVARA")
    {
        city = "F952";
        finished = true;
    }
    else if (city == "NOVARADISICILIA")
    {
        city = "F951";
        finished = true;
    }
    else if (city == "NOVATEMEZZOLA")
    {
        city = "F956";
        finished = true;
    }
    else if (city == "NOVATEMILANESE")
    {
        city = "F955";
        finished = true;
    }
    else if (city == "NOVE")
    {
        city = "F957";
        finished = true;
    }
    else if (city == "NOVEDRATE")
    {
        city = "F958";
        finished = true;
    }
    else if (city == "NOVELLA")
    {
        city = "M430";
        finished = true;
    }
    else if (city == "NOVELLARA")
    {
        city = "F960";
        finished = true;
    }
    else if (city == "NOVELLO")
    {
        city = "F961";
        finished = true;
    }
    else if (city == "NOVENTADIPIAVE")
    {
        city = "F963";
        finished = true;
    }
    else if (city == "NOVENTAPADOVANA")
    {
        city = "F962";
        finished = true;
    }
    else if (city == "NOVENTAVICENTINA")
    {
        city = "F964";
        finished = true;
    }
    else if (city == "NOVIDIMODENA")
    {
        city = "F966";
        finished = true;
    }
    else if (city == "NOVILIGURE")
    {
        city = "F965";
        finished = true;
    }
    else if (city == "NOVIVELIA")
    {
        city = "F967";
        finished = true;
    }
    else if (city == "NOVIGLIO")
    {
        city = "F968";
        finished = true;
    }
    else if (city == "NOVOLI")
    {
        city = "F970";
        finished = true;
    }
    else if (city == "NUCETTO")
    {
        city = "F972";
        finished = true;
    }
    else if (city == "NUGHEDUSANNICOLO'")
    {
        city = "F975";
        finished = true;
    }
    else if (city == "NUGHEDUSANTAVITTORIA")
    {
        city = "F974";
        finished = true;
    }
    else if (city == "NULE")
    {
        city = "F976";
        finished = true;
    }
    else if (city == "NULVI")
    {
        city = "F977";
        finished = true;
    }
    else if (city == "NUMANA")
    {
        city = "F978";
        finished = true;
    }
    else if (city == "NUORO")
    {
        city = "F979";
        finished = true;
    }
    else if (city == "NURACHI")
    {
        city = "F980";
        finished = true;
    }
    else if (city == "NURAGUS")
    {
        city = "F981";
        finished = true;
    }
    else if (city == "NURALLAO")
    {
        city = "F982";
        finished = true;
    }
    else if (city == "NURAMINIS")
    {
        city = "F983";
        finished = true;
    }
    else if (city == "NURECI")
    {
        city = "F985";
        finished = true;
    }
    else if (city == "NURRI")
    {
        city = "F986";
        finished = true;
    }
    else if (city == "NUS")
    {
        city = "F987";
        finished = true;
    }
    else if (city == "NUSCO")
    {
        city = "F988";
        finished = true;
    }
    else if (city == "NUVOLENTO")
    {
        city = "F989";
        finished = true;
    }
    else if (city == "NUVOLERA")
    {
        city = "F990";
        finished = true;
    }
    else if (city == "NUXIS")
    {
        city = "F991";
        finished = true;
    }
    else if (city == "OCCHIEPPOINFERIORE")
    {
        city = "F992";
        finished = true;
    }
    else if (city == "OCCHIEPPOSUPERIORE")
    {
        city = "F993";
        finished = true;
    }
    else if (city == "OCCHIOBELLO")
    {
        city = "F994";
        finished = true;
    }
    else if (city == "OCCIMIANO")
    {
        city = "F995";
        finished = true;
    }
    else if (city == "OCRE")
    {
        city = "F996";
        finished = true;
    }
    else if (city == "ODALENGOGRANDE")
    {
        city = "F997";
        finished = true;
    }
    else if (city == "ODALENGOPICCOLO")
    {
        city = "F998";
        finished = true;
    }
    else if (city == "ODERZO")
    {
        city = "F999";
        finished = true;
    }
    else if (city == "ODOLO")
    {
        city = "G001";
        finished = true;
    }
    else if (city == "OFENA")
    {
        city = "G002";
        finished = true;
    }
    else if (city == "OFFAGNA")
    {
        city = "G003";
        finished = true;
    }
    else if (city == "OFFANENGO")
    {
        city = "G004";
        finished = true;
    }
    else if (city == "OFFIDA")
    {
        city = "G005";
        finished = true;
    }
    else if (city == "OFFLAGA")
    {
        city = "G006";
        finished = true;
    }
    else if (city == "OGGEBBIO")
    {
        city = "G007";
        finished = true;
    }
    else if (city == "OGGIONACONSANTOSTEFANO")
    {
        city = "G008";
        finished = true;
    }
    else if (city == "OGGIONO")
    {
        city = "G009";
        finished = true;
    }
    else if (city == "OGLIANICO")
    {
        city = "G010";
        finished = true;
    }
    else if (city == "OGLIASTROCILENTO")
    {
        city = "G011";
        finished = true;
    }
    else if (city == "OLBIA")
    {
        city = "G015";
        finished = true;
    }
    else if (city == "OLCENENGO")
    {
        city = "G016";
        finished = true;
    }
    else if (city == "OLDENICO")
    {
        city = "G018";
        finished = true;
    }
    else if (city == "OLEGGIO")
    {
        city = "G019";
        finished = true;
    }
    else if (city == "OLEGGIOCASTELLO")
    {
        city = "G020";
        finished = true;
    }
    else if (city == "OLEVANODILOMELLINA")
    {
        city = "G021";
        finished = true;
    }
    else if (city == "OLEVANOROMANO")
    {
        city = "G022";
        finished = true;
    }
    else if (city == "OLEVANOSULTUSCIANO")
    {
        city = "G023";
        finished = true;
    }
    else if (city == "OLGIATECOMASCO")
    {
        city = "G025";
        finished = true;
    }
    else if (city == "OLGIATEMOLGORA")
    {
        city = "G026";
        finished = true;
    }
    else if (city == "OLGIATEOLONA")
    {
        city = "G028";
        finished = true;
    }
    else if (city == "OLGINATE")
    {
        city = "G030";
        finished = true;
    }
    else if (city == "OLIENA")
    {
        city = "G031";
        finished = true;
    }
    else if (city == "OLIVAGESSI")
    {
        city = "G032";
        finished = true;
    }
    else if (city == "OLIVADI")
    {
        city = "G034";
        finished = true;
    }
    else if (city == "OLIVERI")
    {
        city = "G036";
        finished = true;
    }
    else if (city == "OLIVETOCITRA")
    {
        city = "G039";
        finished = true;
    }
    else if (city == "OLIVETOLARIO")
    {
        city = "G040";
        finished = true;
    }
    else if (city == "OLIVETOLUCANO")
    {
        city = "G037";
        finished = true;
    }
    else if (city == "OLIVETTASANMICHELE")
    {
        city = "G041";
        finished = true;
    }
    else if (city == "OLIVOLA")
    {
        city = "G042";
        finished = true;
    }
    else if (city == "OLLASTRA")
    {
        city = "G043";
        finished = true;
    }
    else if (city == "OLLOLAI")
    {
        city = "G044";
        finished = true;
    }
    else if (city == "OLLOMONT")
    {
        city = "G045";
        finished = true;
    }
    else if (city == "OLMEDO")
    {
        city = "G046";
        finished = true;
    }
    else if (city == "OLMENETA")
    {
        city = "G047";
        finished = true;
    }
    else if (city == "OLMOALBREMBO")
    {
        city = "G049";
        finished = true;
    }
    else if (city == "OLMOGENTILE")
    {
        city = "G048";
        finished = true;
    }
    else if (city == "OLTREILCOLLE")
    {
        city = "G050";
        finished = true;
    }
    else if (city == "OLTRESSENDAALTA")
    {
        city = "G054";
        finished = true;
    }
    else if (city == "OLTRONADISANMAMETTE")
    {
        city = "G056";
        finished = true;
    }
    else if (city == "OLZAI")
    {
        city = "G058";
        finished = true;
    }
    else if (city == "OME")
    {
        city = "G061";
        finished = true;
    }
    else if (city == "OMEGNA")
    {
        city = "G062";
        finished = true;
    }
    else if (city == "OMIGNANO")
    {
        city = "G063";
        finished = true;
    }
    else if (city == "ONANI'")
    {
        city = "G064";
        finished = true;
    }
    else if (city == "ONANO")
    {
        city = "G065";
        finished = true;
    }
    else if (city == "ONCINO")
    {
        city = "G066";
        finished = true;
    }
    else if (city == "ONETA")
    {
        city = "G068";
        finished = true;
    }
    else if (city == "ONelse ifAI")
    {
        city = "G070";
        finished = true;
    }
    else if (city == "ONelse ifERI")
    {
        city = "G071";
        finished = true;
    }
    else if (city == "ONOSANPIETRO")
    {
        city = "G074";
        finished = true;
    }
    else if (city == "ONORE")
    {
        city = "G075";
        finished = true;
    }
    else if (city == "ONZO")
    {
        city = "G076";
        finished = true;
    }
    else if (city == "OPERA")
    {
        city = "G078";
        finished = true;
    }
    else if (city == "OPI")
    {
        city = "G079";
        finished = true;
    }
    else if (city == "OPPEANO")
    {
        city = "G080";
        finished = true;
    }
    else if (city == "OPPIDOLUCANO")
    {
        city = "G081";
        finished = true;
    }
    else if (city == "OPPIDOMAMERTINA")
    {
        city = "G082";
        finished = true;
    }
    else if (city == "ORA.AUER.")
    {
        city = "G083";
        finished = true;
    }
    else if (city == "ORANI")
    {
        city = "G084";
        finished = true;
    }
    else if (city == "ORATINO")
    {
        city = "G086";
        finished = true;
    }
    else if (city == "ORBASSANO")
    {
        city = "G087";
        finished = true;
    }
    else if (city == "ORBETELLO")
    {
        city = "G088";
        finished = true;
    }
    else if (city == "ORCIANODIPESARO")
    {
        city = "G089";
        finished = true;
    }
    else if (city == "ORCIANOPISANO")
    {
        city = "G090";
        finished = true;
    }
    else if (city == "ORCOFEGLINO")
    {
        city = "D522";
        finished = true;
    }
    else if (city == "ORDONA")
    {
        city = "M266";
        finished = true;
    }
    else if (city == "ORERO")
    {
        city = "G093";
        finished = true;
    }
    else if (city == "ORGIANO")
    {
        city = "G095";
        finished = true;
    }
    else if (city == "ORGOSOLO")
    {
        city = "G097";
        finished = true;
    }
    else if (city == "ORIA")
    {
        city = "G098";
        finished = true;
    }
    else if (city == "ORICOLA")
    {
        city = "G102";
        finished = true;
    }
    else if (city == "ORIGGIO")
    {
        city = "G103";
        finished = true;
    }
    else if (city == "ORINO")
    {
        city = "G105";
        finished = true;
    }
    else if (city == "ORIOALSERIO")
    {
        city = "G108";
        finished = true;
    }
    else if (city == "ORIOCANAVESE")
    {
        city = "G109";
        finished = true;
    }
    else if (city == "ORIOLITTA")
    {
        city = "G107";
        finished = true;
    }
    else if (city == "ORIOLO")
    {
        city = "G110";
        finished = true;
    }
    else if (city == "ORIOLOROMANO")
    {
        city = "G111";
        finished = true;
    }
    else if (city == "ORISTANO")
    {
        city = "G113";
        finished = true;
    }
    else if (city == "ORMEA")
    {
        city = "G114";
        finished = true;
    }
    else if (city == "ORMELLE")
    {
        city = "G115";
        finished = true;
    }
    else if (city == "ORNAGO")
    {
        city = "G116";
        finished = true;
    }
    else if (city == "ORNAVASSO")
    {
        city = "G117";
        finished = true;
    }
    else if (city == "ORNICA")
    {
        city = "G118";
        finished = true;
    }
    else if (city == "OROSEI")
    {
        city = "G119";
        finished = true;
    }
    else if (city == "OROTELLI")
    {
        city = "G120";
        finished = true;
    }
    else if (city == "ORRIA")
    {
        city = "G121";
        finished = true;
    }
    else if (city == "ORROLI")
    {
        city = "G122";
        finished = true;
    }
    else if (city == "ORSAGO")
    {
        city = "G123";
        finished = true;
    }
    else if (city == "ORSARABORMIDA")
    {
        city = "G124";
        finished = true;
    }
    else if (city == "ORSARADIPUGLIA")
    {
        city = "G125";
        finished = true;
    }
    else if (city == "ORSENIGO")
    {
        city = "G126";
        finished = true;
    }
    else if (city == "ORSOGNA")
    {
        city = "G128";
        finished = true;
    }
    else if (city == "ORSOMARSO")
    {
        city = "G129";
        finished = true;
    }
    else if (city == "ORTADIATELLA")
    {
        city = "G130";
        finished = true;
    }
    else if (city == "ORTANOVA")
    {
        city = "G131";
        finished = true;
    }
    else if (city == "ORTASANGIULIO")
    {
        city = "G134";
        finished = true;
    }
    else if (city == "ORTACESUS")
    {
        city = "G133";
        finished = true;
    }
    else if (city == "ORTE")
    {
        city = "G135";
        finished = true;
    }
    else if (city == "ORTELLE")
    {
        city = "G136";
        finished = true;
    }
    else if (city == "ORTEZZANO")
    {
        city = "G137";
        finished = true;
    }
    else if (city == "ORTIGNANORAGGIOLO")
    {
        city = "G139";
        finished = true;
    }
    else if (city == "ORTISEI.STULRICH.")
    {
        city = "G140";
        finished = true;
    }
    else if (city == "ORTONA")
    {
        city = "G141";
        finished = true;
    }
    else if (city == "ORTONADEIMARSI")
    {
        city = "G142";
        finished = true;
    }
    else if (city == "ORTOVERO")
    {
        city = "G144";
        finished = true;
    }
    else if (city == "ORTUCCHIO")
    {
        city = "G145";
        finished = true;
    }
    else if (city == "ORTUERI")
    {
        city = "G146";
        finished = true;
    }
    else if (city == "ORUNE")
    {
        city = "G147";
        finished = true;
    }
    else if (city == "ORVIETO")
    {
        city = "G148";
        finished = true;
    }
    else if (city == "ORVINIO")
    {
        city = "B595";
        finished = true;
    }
    else if (city == "ORZINUOVI")
    {
        city = "G149";
        finished = true;
    }
    else if (city == "ORZIVECCHI")
    {
        city = "G150";
        finished = true;
    }
    else if (city == "OSASCO")
    {
        city = "G151";
        finished = true;
    }
    else if (city == "OSASIO")
    {
        city = "G152";
        finished = true;
    }
    else if (city == "OSCHIRI")
    {
        city = "G153";
        finished = true;
    }
    else if (city == "OSIDDA")
    {
        city = "G154";
        finished = true;
    }
    else if (city == "OSIGLIA")
    {
        city = "G155";
        finished = true;
    }
    else if (city == "OSILO")
    {
        city = "G156";
        finished = true;
    }
    else if (city == "OSIMO")
    {
        city = "G157";
        finished = true;
    }
    else if (city == "OSINI")
    {
        city = "G158";
        finished = true;
    }
    else if (city == "OSIOSOPRA")
    {
        city = "G159";
        finished = true;
    }
    else if (city == "OSIOSOTTO")
    {
        city = "G160";
        finished = true;
    }
    else if (city == "OSMATE")
    {
        city = "E529";
        finished = true;
    }
    else if (city == "OSNAGO")
    {
        city = "G161";
        finished = true;
    }
    else if (city == "OSOPPO")
    {
        city = "G163";
        finished = true;
    }
    else if (city == "OSPEDALETTI")
    {
        city = "G164";
        finished = true;
    }
    else if (city == "OSPEDALETTO")
    {
        city = "G168";
        finished = true;
    }
    else if (city == "OSPEDALETTOD'ALPINOLO")
    {
        city = "G165";
        finished = true;
    }
    else if (city == "OSPEDALETTOEUGANEO")
    {
        city = "G167";
        finished = true;
    }
    else if (city == "OSPEDALETTOLODIGIANO")
    {
        city = "G166";
        finished = true;
    }
    else if (city == "OSPITALEDICADORE")
    {
        city = "G169";
        finished = true;
    }
    else if (city == "OSPITALETTO")
    {
        city = "G170";
        finished = true;
    }
    else if (city == "OSSAGOLODIGIANO")
    {
        city = "G171";
        finished = true;
    }
    else if (city == "OSSANA")
    {
        city = "G173";
        finished = true;
    }
    else if (city == "OSSI")
    {
        city = "G178";
        finished = true;
    }
    else if (city == "OSSIMO")
    {
        city = "G179";
        finished = true;
    }
    else if (city == "OSSONA")
    {
        city = "G181";
        finished = true;
    }
    else if (city == "OSSUCCIO")
    {
        city = "G182";
        finished = true;
    }
    else if (city == "OSTANA")
    {
        city = "G183";
        finished = true;
    }
    else if (city == "OSTELLATO")
    {
        city = "G184";
        finished = true;
    }
    else if (city == "OSTIANO")
    {
        city = "G185";
        finished = true;
    }
    else if (city == "OSTIGLIA")
    {
        city = "G186";
        finished = true;
    }
    else if (city == "OSTRA")
    {
        city = "F401";
        finished = true;
    }
    else if (city == "OSTRAVETERE")
    {
        city = "F581";
        finished = true;
    }
    else if (city == "OSTUNI")
    {
        city = "G187";
        finished = true;
    }
    else if (city == "OTRANTO")
    {
        city = "G188";
        finished = true;
    }
    else if (city == "OTRICOLI")
    {
        city = "G189";
        finished = true;
    }
    else if (city == "OTTANA")
    {
        city = "G191";
        finished = true;
    }
    else if (city == "OTTATI")
    {
        city = "G192";
        finished = true;
    }
    else if (city == "OTTAVIANO")
    {
        city = "G190";
        finished = true;
    }
    else if (city == "OTTIGLIO")
    {
        city = "G193";
        finished = true;
    }
    else if (city == "OTTOBIANO")
    {
        city = "G194";
        finished = true;
    }
    else if (city == "OTTONE")
    {
        city = "G195";
        finished = true;
    }
    else if (city == "OULX")
    {
        city = "G196";
        finished = true;
    }
    else if (city == "OVADA")
    {
        city = "G197";
        finished = true;
    }
    else if (city == "OVARO")
    {
        city = "G198";
        finished = true;
    }
    else if (city == "OVIGLIO")
    {
        city = "G199";
        finished = true;
    }
    else if (city == "OVINDOLI")
    {
        city = "G200";
        finished = true;
    }
    else if (city == "OVODDA")
    {
        city = "G201";
        finished = true;
    }
    else if (city == "OYACE")
    {
        city = "G012";
        finished = true;
    }
    else if (city == "OZEGNA")
    {
        city = "G202";
        finished = true;
    }
    else if (city == "OZIERI")
    {
        city = "G203";
        finished = true;
    }
    else if (city == "OZZANODELL'EMILIA")
    {
        city = "G205";
        finished = true;
    }
    else if (city == "OZZANOMONFERRATO")
    {
        city = "G204";
        finished = true;
    }
    else if (city == "OZZERO")
    {
        city = "G206";
        finished = true;
    }
    else if (city == "PABILLONIS")
    {
        city = "G207";
        finished = true;
    }
    else if (city == "PACEDELMELA")
    {
        city = "G209";
        finished = true;
    }
    else if (city == "PACECO")
    {
        city = "G208";
        finished = true;
    }
    else if (city == "PACENTRO")
    {
        city = "G210";
        finished = true;
    }
    else if (city == "PACHINO")
    {
        city = "G211";
        finished = true;
    }
    else if (city == "PACIANO")
    {
        city = "G212";
        finished = true;
    }
    else if (city == "PADENGHESULGARDA")
    {
        city = "G213";
        finished = true;
    }
    else if (city == "PADERGNONE")
    {
        city = "G214";
        finished = true;
    }
    else if (city == "PADERNA")
    {
        city = "G215";
        finished = true;
    }
    else if (city == "PADERNOD'ADDA")
    {
        city = "G218";
        finished = true;
    }
    else if (city == "PADERNODELGRAPPA")
    {
        city = "G221";
        finished = true;
    }
    else if (city == "PADERNODUGNANO")
    {
        city = "G220";
        finished = true;
    }
    else if (city == "PADERNOFRANCIACORTA")
    {
        city = "G217";
        finished = true;
    }
    else if (city == "PADERNOPONCHIELLI")
    {
        city = "G222";
        finished = true;
    }
    else if (city == "PADOVA")
    {
        city = "G224";
        finished = true;
    }
    else if (city == "PADRIA")
    {
        city = "G225";
        finished = true;
    }
    else if (city == "PADRU")
    {
        city = "M301";
        finished = true;
    }
    else if (city == "PADULA")
    {
        city = "G226";
        finished = true;
    }
    else if (city == "PADULI")
    {
        city = "G227";
        finished = true;
    }
    else if (city == "PAESANA")
    {
        city = "G228";
        finished = true;
    }
    else if (city == "PAESE")
    {
        city = "G229";
        finished = true;
    }
    else if (city == "PAGANI")
    {
        city = "G230";
        finished = true;
    }
    else if (city == "PAGANICOSABINO")
    {
        city = "G232";
        finished = true;
    }
    else if (city == "PAGAZZANO")
    {
        city = "G233";
        finished = true;
    }
    else if (city == "PAGLIARA")
    {
        city = "G234";
        finished = true;
    }
    else if (city == "PAGLIETA")
    {
        city = "G237";
        finished = true;
    }
    else if (city == "PAGNACCO")
    {
        city = "G238";
        finished = true;
    }
    else if (city == "PAGNO")
    {
        city = "G240";
        finished = true;
    }
    else if (city == "PAGNONA")
    {
        city = "G241";
        finished = true;
    }
    else if (city == "PAGODELVALLODILAURO")
    {
        city = "G242";
        finished = true;
    }
    else if (city == "PAGOVEIANO")
    {
        city = "G243";
        finished = true;
    }
    else if (city == "PAISCOLOVENO")
    {
        city = "G247";
        finished = true;
    }
    else if (city == "PAITONE")
    {
        city = "G248";
        finished = true;
    }
    else if (city == "PALADINA")
    {
        city = "G249";
        finished = true;
    }
    else if (city == "PALAGANO")
    {
        city = "G250";
        finished = true;
    }
    else if (city == "PALAGIANELLO")
    {
        city = "G251";
        finished = true;
    }
    else if (city == "PALAGIANO")
    {
        city = "G252";
        finished = true;
    }
    else if (city == "PALAGONIA")
    {
        city = "G253";
        finished = true;
    }
    else if (city == "PALAIA")
    {
        city = "G254";
        finished = true;
    }
    else if (city == "PALANZANO")
    {
        city = "G255";
        finished = true;
    }
    else if (city == "PALATA")
    {
        city = "G257";
        finished = true;
    }
    else if (city == "PALAU")
    {
        city = "G258";
        finished = true;
    }
    else if (city == "PALAZZAGO")
    {
        city = "G259";
        finished = true;
    }
    else if (city == "PALAZZOADRIANO")
    {
        city = "G263";
        finished = true;
    }
    else if (city == "PALAZZOCANAVESE")
    {
        city = "G262";
        finished = true;
    }
    else if (city == "PALAZZOPIGNANO")
    {
        city = "G260";
        finished = true;
    }
    else if (city == "PALAZZOSANGERVASIO")
    {
        city = "G261";
        finished = true;
    }
    else if (city == "PALAZZOLOACREIDE")
    {
        city = "G267";
        finished = true;
    }
    else if (city == "PALAZZOLODELLOSTELLA")
    {
        city = "G268";
        finished = true;
    }
    else if (city == "PALAZZOLOSULL'OGLIO")
    {
        city = "G264";
        finished = true;
    }
    else if (city == "PALAZZOLOVERCELLESE")
    {
        city = "G266";
        finished = true;
    }
    else if (city == "PALAZZUOLOSULSENIO")
    {
        city = "G270";
        finished = true;
    }
    else if (city == "PALENA")
    {
        city = "G271";
        finished = true;
    }
    else if (city == "PALERMITI")
    {
        city = "G272";
        finished = true;
    }
    else if (city == "PALERMO")
    {
        city = "G273";
        finished = true;
    }
    else if (city == "PALESTRINA")
    {
        city = "G274";
        finished = true;
    }
    else if (city == "PALESTRO")
    {
        city = "G275";
        finished = true;
    }
    else if (city == "PALIANO")
    {
        city = "G276";
        finished = true;
    }
    else if (city == "PALIZZI")
    {
        city = "G277";
        finished = true;
    }
    else if (city == "PALLAGORIO")
    {
        city = "G278";
        finished = true;
    }
    else if (city == "PALLANZENO")
    {
        city = "G280";
        finished = true;
    }
    else if (city == "PALLARE")
    {
        city = "G281";
        finished = true;
    }
    else if (city == "PALMACAMPANIA")
    {
        city = "G283";
        finished = true;
    }
    else if (city == "PALMADIMONTECHIARO")
    {
        city = "G282";
        finished = true;
    }
    else if (city == "PALMANOVA")
    {
        city = "G284";
        finished = true;
    }
    else if (city == "PALMARIGGI")
    {
        city = "G285";
        finished = true;
    }
    else if (city == "PALMASARBOREA")
    {
        city = "G286";
        finished = true;
    }
    else if (city == "PALMI")
    {
        city = "G288";
        finished = true;
    }
    else if (city == "PALMIANO")
    {
        city = "G289";
        finished = true;
    }
    else if (city == "PALMOLI")
    {
        city = "G290";
        finished = true;
    }
    else if (city == "PALODELCOLLE")
    {
        city = "G291";
        finished = true;
    }
    else if (city == "PALOMBARASABINA")
    {
        city = "G293";
        finished = true;
    }
    else if (city == "PALOMBARO")
    {
        city = "G294";
        finished = true;
    }
    else if (city == "PALOMONTE")
    {
        city = "G292";
        finished = true;
    }
    else if (city == "PALOSCO")
    {
        city = "G295";
        finished = true;
    }
    else if (city == "PALU'")
    {
        city = "G297";
        finished = true;
    }
    else if (city == "PALU'DELFERSINA")
    {
        city = "G296";
        finished = true;
    }
    else if (city == "PALUDI")
    {
        city = "G298";
        finished = true;
    }
    else if (city == "PALUZZA")
    {
        city = "G300";
        finished = true;
    }
    else if (city == "PAMPARATO")
    {
        city = "G302";
        finished = true;
    }
    else if (city == "PANCALIERI")
    {
        city = "G303";
        finished = true;
    }
    else if (city == "PANCARANA")
    {
        city = "G304";
        finished = true;
    }
    else if (city == "PANCHIA'")
    {
        city = "G305";
        finished = true;
    }
    else if (city == "PANDINO")
    {
        city = "G306";
        finished = true;
    }
    else if (city == "PANETTIERI")
    {
        city = "G307";
        finished = true;
    }
    else if (city == "PANICALE")
    {
        city = "G308";
        finished = true;
    }
    else if (city == "PANNARANO")
    {
        city = "G311";
        finished = true;
    }
    else if (city == "PANNI")
    {
        city = "G312";
        finished = true;
    }
    else if (city == "PANTELLERIA")
    {
        city = "G315";
        finished = true;
    }
    else if (city == "PANTIGLIATE")
    {
        city = "G316";
        finished = true;
    }
    else if (city == "PAOLA")
    {
        city = "G317";
        finished = true;
    }
    else if (city == "PAOLISI")
    {
        city = "G318";
        finished = true;
    }
    else if (city == "PAPASIDERO")
    {
        city = "G320";
        finished = true;
    }
    else if (city == "PAPOZZE")
    {
        city = "G323";
        finished = true;
    }
    else if (city == "PARABIAGO")
    {
        city = "G324";
        finished = true;
    }
    else if (city == "PARABITA")
    {
        city = "G325";
        finished = true;
    }
    else if (city == "PARATICO")
    {
        city = "G327";
        finished = true;
    }
    else if (city == "PARCINES.PARTSCHINS.")
    {
        city = "G328";
        finished = true;
    }
    else if (city == "PARE'")
    {
        city = "G329";
        finished = true;
    }
    else if (city == "PARELLA")
    {
        city = "G330";
        finished = true;
    }
    else if (city == "PARENTI")
    {
        city = "G331";
        finished = true;
    }
    else if (city == "PARETE")
    {
        city = "G333";
        finished = true;
    }
    else if (city == "PARETO")
    {
        city = "G334";
        finished = true;
    }
    else if (city == "PARGHELIA")
    {
        city = "G335";
        finished = true;
    }
    else if (city == "PARLASCO")
    {
        city = "G336";
        finished = true;
    }
    else if (city == "PARMA")
    {
        city = "G337";
        finished = true;
    }
    else if (city == "PARODILIGURE")
    {
        city = "G338";
        finished = true;
    }
    else if (city == "PAROLDO")
    {
        city = "G339";
        finished = true;
    }
    else if (city == "PAROLISE")
    {
        city = "G340";
        finished = true;
    }
    else if (city == "PARONA")
    {
        city = "G342";
        finished = true;
    }
    else if (city == "PARRANO")
    {
        city = "G344";
        finished = true;
    }
    else if (city == "PARRE")
    {
        city = "G346";
        finished = true;
    }
    else if (city == "PARTANNA")
    {
        city = "G347";
        finished = true;
    }
    else if (city == "PARTINICO")
    {
        city = "G348";
        finished = true;
    }
    else if (city == "PARUZZARO")
    {
        city = "G349";
        finished = true;
    }
    else if (city == "PARZANICA")
    {
        city = "G350";
        finished = true;
    }
    else if (city == "PASIANDIPRATO")
    {
        city = "G352";
        finished = true;
    }
    else if (city == "PASIANODIPORDENONE")
    {
        city = "G353";
        finished = true;
    }
    else if (city == "PASPARDO")
    {
        city = "G354";
        finished = true;
    }
    else if (city == "PASSERANOMARMORITO")
    {
        city = "G358";
        finished = true;
    }
    else if (city == "PASSIGNANOSULTRASIMENO")
    {
        city = "G359";
        finished = true;
    }
    else if (city == "PASSIRANO")
    {
        city = "G361";
        finished = true;
    }
    else if (city == "PASTENA")
    {
        city = "G362";
        finished = true;
    }
    else if (city == "PASTORANO")
    {
        city = "G364";
        finished = true;
    }
    else if (city == "PASTRENGO")
    {
        city = "G365";
        finished = true;
    }
    else if (city == "PASTURANA")
    {
        city = "G367";
        finished = true;
    }
    else if (city == "PASTURO")
    {
        city = "G368";
        finished = true;
    }
    else if (city == "PATERNO'")
    {
        city = "G371";
        finished = true;
    }
    else if (city == "PATERNO")
    {
        city = "M269";
        finished = true;
    }
    else if (city == "PATERNOCALABRO")
    {
        city = "G372";
        finished = true;
    }
    else if (city == "PATERNOPOLI")
    {
        city = "G370";
        finished = true;
    }
    else if (city == "PATRICA")
    {
        city = "G374";
        finished = true;
    }
    else if (city == "PATTADA")
    {
        city = "G376";
        finished = true;
    }
    else if (city == "PATTI")
    {
        city = "G377";
        finished = true;
    }
    else if (city == "PATU'")
    {
        city = "G378";
        finished = true;
    }
    else if (city == "PAU")
    {
        city = "G379";
        finished = true;
    }
    else if (city == "PAULARO")
    {
        city = "G381";
        finished = true;
    }
    else if (city == "PAULIARBAREI")
    {
        city = "G382";
        finished = true;
    }
    else if (city == "PAULILATINO")
    {
        city = "G384";
        finished = true;
    }
    else if (city == "PAULLO")
    {
        city = "G385";
        finished = true;
    }
    else if (city == "PAUPISI")
    {
        city = "G386";
        finished = true;
    }
    else if (city == "PAVAROLO")
    {
        city = "G387";
        finished = true;
    }
    else if (city == "PAVIA")
    {
        city = "G388";
        finished = true;
    }
    else if (city == "PAVIADIUDINE")
    {
        city = "G389";
        finished = true;
    }
    else if (city == "PAVONECANAVESE")
    {
        city = "G392";
        finished = true;
    }
    else if (city == "PAVONEDELMELLA")
    {
        city = "G391";
        finished = true;
    }
    else if (city == "PAVULLONELFRIGNANO")
    {
        city = "G393";
        finished = true;
    }
    else if (city == "PAZZANO")
    {
        city = "G394";
        finished = true;
    }
    else if (city == "PECCIOLI")
    {
        city = "G395";
        finished = true;
    }
    else if (city == "PECCO")
    {
        city = "G396";
        finished = true;
    }
    else if (city == "PECETTODIVALENZA")
    {
        city = "G397";
        finished = true;
    }
    else if (city == "PECETTOTORINESE")
    {
        city = "G398";
        finished = true;
    }
    else if (city == "PECORARA")
    {
        city = "G399";
        finished = true;
    }
    else if (city == "PEDACE")
    {
        city = "G400";
        finished = true;
    }
    else if (city == "PEDARA")
    {
        city = "G402";
        finished = true;
    }
    else if (city == "PEDASO")
    {
        city = "G403";
        finished = true;
    }
    else if (city == "PEDAVENA")
    {
        city = "G404";
        finished = true;
    }
    else if (city == "PEDEMONTE")
    {
        city = "G406";
        finished = true;
    }
    else if (city == "PEDEROBBA")
    {
        city = "G408";
        finished = true;
    }
    else if (city == "PEDESINA")
    {
        city = "G410";
        finished = true;
    }
    else if (city == "PEDIVIGLIANO")
    {
        city = "G411";
        finished = true;
    }
    else if (city == "PEDRENGO")
    {
        city = "G412";
        finished = true;
    }
    else if (city == "PEGLIO")
    {
        city = "G415";
        finished = true;
    }
    else if (city == "PEGLIO")
    {
        city = "G416";
        finished = true;
    }
    else if (city == "PEGOGNAGA")
    {
        city = "G417";
        finished = true;
    }
    else if (city == "PEIA")
    {
        city = "G418";
        finished = true;
    }
    else if (city == "PEIO")
    {
        city = "G419";
        finished = true;
    }
    else if (city == "PELAGO")
    {
        city = "G420";
        finished = true;
    }
    else if (city == "PELLA")
    {
        city = "G421";
        finished = true;
    }
    else if (city == "PELLEGRINOPARMENSE")
    {
        city = "G424";
        finished = true;
    }
    else if (city == "PELLEZZANO")
    {
        city = "G426";
        finished = true;
    }
    else if (city == "PELLIOINTELVI")
    {
        city = "G427";
        finished = true;
    }
    else if (city == "PELLIZZANO")
    {
        city = "G428";
        finished = true;
    }
    else if (city == "PELUGO")
    {
        city = "G429";
        finished = true;
    }
    else if (city == "PENANGO")
    {
        city = "G430";
        finished = true;
    }
    else if (city == "PENNAINTEVERINA")
    {
        city = "G432";
        finished = true;
    }
    else if (city == "PENNASANGIOVANNI")
    {
        city = "G436";
        finished = true;
    }
    else if (city == "PENNASANT'ANDREA")
    {
        city = "G437";
        finished = true;
    }
    else if (city == "PENNABILLI")
    {
        city = "G433";
        finished = true;
    }
    else if (city == "PENNADOMO")
    {
        city = "G434";
        finished = true;
    }
    else if (city == "PENNAPIEDIMONTE")
    {
        city = "G435";
        finished = true;
    }
    else if (city == "PENNE")
    {
        city = "G438";
        finished = true;
    }
    else if (city == "PENTONE")
    {
        city = "G439";
        finished = true;
    }
    else if (city == "PERANO")
    {
        city = "G441";
        finished = true;
    }
    else if (city == "PERAROLODICADORE")
    {
        city = "G442";
        finished = true;
    }
    else if (city == "PERCA.PERCHA.")
    {
        city = "G443";
        finished = true;
    }
    else if (city == "PERCILE")
    {
        city = "G444";
        finished = true;
    }
    else if (city == "PERDASDEFOGU")
    {
        city = "G445";
        finished = true;
    }
    else if (city == "PERDAXIUS")
    {
        city = "G446";
        finished = true;
    }
    else if (city == "PERDelse ifUMO")
    {
        city = "G447";
        finished = true;
    }
    else if (city == "PEREGO")
    {
        city = "G448";
        finished = true;
    }
    else if (city == "PERETO")
    {
        city = "G449";
        finished = true;
    }
    else if (city == "PERFUGAS")
    {
        city = "G450";
        finished = true;
    }
    else if (city == "PERGINEVALDARNO")
    {
        city = "G451";
        finished = true;
    }
    else if (city == "PERGINEVALSUGANA")
    {
        city = "G452";
        finished = true;
    }
    else if (city == "PERGOLA")
    {
        city = "G453";
        finished = true;
    }
    else if (city == "PERINALDO")
    {
        city = "G454";
        finished = true;
    }
    else if (city == "PERITO")
    {
        city = "G455";
        finished = true;
    }
    else if (city == "PERLEDO")
    {
        city = "G456";
        finished = true;
    }
    else if (city == "PERLETTO")
    {
        city = "G457";
        finished = true;
    }
    else if (city == "PERLO")
    {
        city = "G458";
        finished = true;
    }
    else if (city == "PERLOZ")
    {
        city = "G459";
        finished = true;
    }
    else if (city == "PERNUMIA")
    {
        city = "G461";
        finished = true;
    }
    else if (city == "PERO")
    {
        city = "C013";
        finished = true;
    }
    else if (city == "PEROSAARGENTINA")
    {
        city = "G463";
        finished = true;
    }
    else if (city == "PEROSACANAVESE")
    {
        city = "G462";
        finished = true;
    }
    else if (city == "PERRERO")
    {
        city = "G465";
        finished = true;
    }
    else if (city == "PERSICODOSIMO")
    {
        city = "G469";
        finished = true;
    }
    else if (city == "PERTENGO")
    {
        city = "G471";
        finished = true;
    }
    else if (city == "PERTICAALTA")
    {
        city = "G474";
        finished = true;
    }
    else if (city == "PERTICABASSA")
    {
        city = "G475";
        finished = true;
    }
    else if (city == "PERTOSA")
    {
        city = "G476";
        finished = true;
    }
    else if (city == "PERTUSIO")
    {
        city = "G477";
        finished = true;
    }
    else if (city == "PERUGIA")
    {
        city = "G478";
        finished = true;
    }
    else if (city == "PESARO")
    {
        city = "G479";
        finished = true;
    }
    else if (city == "PESCAGLIA")
    {
        city = "G480";
        finished = true;
    }
    else if (city == "PESCANTINA")
    {
        city = "G481";
        finished = true;
    }
    else if (city == "PESCARA")
    {
        city = "G482";
        finished = true;
    }
    else if (city == "PESCAROLOEDUNITI")
    {
        city = "G483";
        finished = true;
    }
    else if (city == "PESCASSEROLI")
    {
        city = "G484";
        finished = true;
    }
    else if (city == "PESCATE")
    {
        city = "G485";
        finished = true;
    }
    else if (city == "PESCHE")
    {
        city = "G486";
        finished = true;
    }
    else if (city == "PESCHICI")
    {
        city = "G487";
        finished = true;
    }
    else if (city == "PESCHIERABORROMEO")
    {
        city = "G488";
        finished = true;
    }
    else if (city == "PESCHIERADELGARDA")
    {
        city = "G489";
        finished = true;
    }
    else if (city == "PESCIA")
    {
        city = "G491";
        finished = true;
    }
    else if (city == "PESCINA")
    {
        city = "G492";
        finished = true;
    }
    else if (city == "PESCOSANNITA")
    {
        city = "G494";
        finished = true;
    }
    else if (city == "PESCOCOSTANZO")
    {
        city = "G493";
        finished = true;
    }
    else if (city == "PESCOLANCIANO")
    {
        city = "G495";
        finished = true;
    }
    else if (city == "PESCOPAGANO")
    {
        city = "G496";
        finished = true;
    }
    else if (city == "PESCOPENNATARO")
    {
        city = "G497";
        finished = true;
    }
    else if (city == "PESCOROCCHIANO")
    {
        city = "G498";
        finished = true;
    }
    else if (city == "PESCOSANSONESCO")
    {
        city = "G499";
        finished = true;
    }
    else if (city == "PESCOSOLIDO")
    {
        city = "G500";
        finished = true;
    }
    else if (city == "PESSANOCONBORNAGO")
    {
        city = "G502";
        finished = true;
    }
    else if (city == "PESSINACREMONESE")
    {
        city = "G504";
        finished = true;
    }
    else if (city == "PESSINETTO")
    {
        city = "G505";
        finished = true;
    }
    else if (city == "PETACCIATO")
    {
        city = "G506";
        finished = true;
    }
    else if (city == "PETILIAPOLICASTRO")
    {
        city = "G508";
        finished = true;
    }
    else if (city == "PETINA")
    {
        city = "G509";
        finished = true;
    }
    else if (city == "PETRALIASOPRANA")
    {
        city = "G510";
        finished = true;
    }
    else if (city == "PETRALIASOTTANA")
    {
        city = "G511";
        finished = true;
    }
    else if (city == "PETRELLASALTO")
    {
        city = "G513";
        finished = true;
    }
    else if (city == "PETRELLATelse ifERNINA")
    {
        city = "G512";
        finished = true;
    }
    else if (city == "PETRIANO")
    {
        city = "G514";
        finished = true;
    }
    else if (city == "PETRIOLO")
    {
        city = "G515";
        finished = true;
    }
    else if (city == "PETRITOLI")
    {
        city = "G516";
        finished = true;
    }
    else if (city == "PETRIZZI")
    {
        city = "G517";
        finished = true;
    }
    else if (city == "PETRONA'")
    {
        city = "G518";
        finished = true;
    }
    else if (city == "PETROSINO")
    {
        city = "M281";
        finished = true;
    }
    else if (city == "PETRUROIRPINO")
    {
        city = "G519";
        finished = true;
    }
    else if (city == "PETTENASCO")
    {
        city = "G520";
        finished = true;
    }
    else if (city == "PETTINENGO")
    {
        city = "G521";
        finished = true;
    }
    else if (city == "PETTINEO")
    {
        city = "G522";
        finished = true;
    }
    else if (city == "PETTORANELLODELMOLISE")
    {
        city = "G523";
        finished = true;
    }
    else if (city == "PETTORANOSULGIZIO")
    {
        city = "G524";
        finished = true;
    }
    else if (city == "PETTORAZZAGRIMANI")
    {
        city = "G525";
        finished = true;
    }
    else if (city == "PEVERAGNO")
    {
        city = "G526";
        finished = true;
    }
    else if (city == "PEZZANA")
    {
        city = "G528";
        finished = true;
    }
    else if (city == "PEZZAZE")
    {
        city = "G529";
        finished = true;
    }
    else if (city == "PEZZOLOVALLEUZZONE")
    {
        city = "G532";
        finished = true;
    }
    else if (city == "PIACENZA")
    {
        city = "G535";
        finished = true;
    }
    else if (city == "PIACENZAD'ADIGE")
    {
        city = "G534";
        finished = true;
    }
    else if (city == "PIADENA")
    {
        city = "G536";
        finished = true;
    }
    else if (city == "PIADENADRIZZONA")
    {
        city = "M418";
        finished = true;
    }
    else if (city == "PIAGGE")
    {
        city = "G537";
        finished = true;
    }
    else if (city == "PIAGGINE")
    {
        city = "G538";
        finished = true;
    }
    else if (city == "PIANCAMUNO")
    {
        city = "G546";
        finished = true;
    }
    else if (city == "PIANDISCO")
    {
        city = "G552";
        finished = true;
    }
    else if (city == "PIANACRIXIA")
    {
        city = "G542";
        finished = true;
    }
    else if (city == "PIANADEGLIALBANESI")
    {
        city = "G543";
        finished = true;
    }
    else if (city == "PIANADIMONTEVERNA")
    {
        city = "G541";
        finished = true;
    }
    else if (city == "PIANCASTAGNAIO")
    {
        city = "G547";
        finished = true;
    }
    else if (city == "PIANCOGNO")
    {
        city = "G549";
        finished = true;
    }
    else if (city == "PIANDIMELETO")
    {
        city = "G551";
        finished = true;
    }
    else if (city == "PIANECRATI")
    {
        city = "G553";
        finished = true;
    }
    else if (city == "PIANELLA")
    {
        city = "G555";
        finished = true;
    }
    else if (city == "PIANELLODELLARIO")
    {
        city = "G556";
        finished = true;
    }
    else if (city == "PIANELLOVALTIDONE")
    {
        city = "G557";
        finished = true;
    }
    else if (city == "PIANENGO")
    {
        city = "G558";
        finished = true;
    }
    else if (city == "PIANEZZA")
    {
        city = "G559";
        finished = true;
    }
    else if (city == "PIANEZZE")
    {
        city = "G560";
        finished = true;
    }
    else if (city == "PIANFEI")
    {
        city = "G561";
        finished = true;
    }
    else if (city == "PIANICO")
    {
        city = "G564";
        finished = true;
    }
    else if (city == "PIANIGA")
    {
        city = "G565";
        finished = true;
    }
    else if (city == "PIANODISORRENTO")
    {
        city = "G568";
        finished = true;
    }
    else if (city == "PIANOPOLI")
    {
        city = "D546";
        finished = true;
    }
    else if (city == "PIANORO")
    {
        city = "G570";
        finished = true;
    }
    else if (city == "PIANSANO")
    {
        city = "G571";
        finished = true;
    }
    else if (city == "PIANTEDO")
    {
        city = "G572";
        finished = true;
    }
    else if (city == "PIARIO")
    {
        city = "G574";
        finished = true;
    }
    else if (city == "PIASCO")
    {
        city = "G575";
        finished = true;
    }
    else if (city == "PIATEDA")
    {
        city = "G576";
        finished = true;
    }
    else if (city == "PIATTO")
    {
        city = "G577";
        finished = true;
    }
    else if (city == "PIAZZAALSERCHIO")
    {
        city = "G582";
        finished = true;
    }
    else if (city == "PIAZZAARMERINA")
    {
        city = "G580";
        finished = true;
    }
    else if (city == "PIAZZABREMBANA")
    {
        city = "G579";
        finished = true;
    }
    else if (city == "PIAZZATORRE")
    {
        city = "G583";
        finished = true;
    }
    else if (city == "PIAZZOLASULBRENTA")
    {
        city = "G587";
        finished = true;
    }
    else if (city == "PIAZZOLO")
    {
        city = "G588";
        finished = true;
    }
    else if (city == "PICCIANO")
    {
        city = "G589";
        finished = true;
    }
    else if (city == "PICERNO")
    {
        city = "G590";
        finished = true;
    }
    else if (city == "PICINISCO")
    {
        city = "G591";
        finished = true;
    }
    else if (city == "PICO")
    {
        city = "G592";
        finished = true;
    }
    else if (city == "PIEA")
    {
        city = "G593";
        finished = true;
    }
    else if (city == "PIEDICAVALLO")
    {
        city = "G594";
        finished = true;
    }
    else if (city == "PIEDIMONTEETNEO")
    {
        city = "G597";
        finished = true;
    }
    else if (city == "PIEDIMONTEMATESE")
    {
        city = "G596";
        finished = true;
    }
    else if (city == "PIEDIMONTESANGERMANO")
    {
        city = "G598";
        finished = true;
    }
    else if (city == "PIEDIMULERA")
    {
        city = "G600";
        finished = true;
    }
    else if (city == "PIEGARO")
    {
        city = "G601";
        finished = true;
    }
    else if (city == "PIENZA")
    {
        city = "G602";
        finished = true;
    }
    else if (city == "PIERANICA")
    {
        city = "G603";
        finished = true;
    }
    else if (city == "PIETRADE'GIORGI")
    {
        city = "G612";
        finished = true;
    }
    else if (city == "PIETRALIGURE")
    {
        city = "G605";
        finished = true;
    }
    else if (city == "PIETRAMARAZZI")
    {
        city = "G619";
        finished = true;
    }
    else if (city == "PIETRABBONDANTE")
    {
        city = "G606";
        finished = true;
    }
    else if (city == "PIETRABRUNA")
    {
        city = "G607";
        finished = true;
    }
    else if (city == "PIETRACAMELA")
    {
        city = "G608";
        finished = true;
    }
    else if (city == "PIETRACATELLA")
    {
        city = "G609";
        finished = true;
    }
    else if (city == "PIETRACUPA")
    {
        city = "G610";
        finished = true;
    }
    else if (city == "PIETRADEFUSI")
    {
        city = "G611";
        finished = true;
    }
    else if (city == "PIETRAFERRAZZANA")
    {
        city = "G613";
        finished = true;
    }
    else if (city == "PIETRAFITTA")
    {
        city = "G615";
        finished = true;
    }
    else if (city == "PIETRAGALLA")
    {
        city = "G616";
        finished = true;
    }
    else if (city == "PIETRALUNGA")
    {
        city = "G618";
        finished = true;
    }
    else if (city == "PIETRAMELARA")
    {
        city = "G620";
        finished = true;
    }
    else if (city == "PIETRAMONTECORVINO")
    {
        city = "G604";
        finished = true;
    }
    else if (city == "PIETRANICO")
    {
        city = "G621";
        finished = true;
    }
    else if (city == "PIETRAPAOLA")
    {
        city = "G622";
        finished = true;
    }
    else if (city == "PIETRAPERTOSA")
    {
        city = "G623";
        finished = true;
    }
    else if (city == "PIETRAPERZIA")
    {
        city = "G624";
        finished = true;
    }
    else if (city == "PIETRAPORZIO")
    {
        city = "G625";
        finished = true;
    }
    else if (city == "PIETRAROJA")
    {
        city = "G626";
        finished = true;
    }
    else if (city == "PIETRARUBBIA")
    {
        city = "G627";
        finished = true;
    }
    else if (city == "PIETRASANTA")
    {
        city = "G628";
        finished = true;
    }
    else if (city == "PIETRASTORNINA")
    {
        city = "G629";
        finished = true;
    }
    else if (city == "PIETRAVAIRANO")
    {
        city = "G630";
        finished = true;
    }
    else if (city == "PIETRELCINA")
    {
        city = "G631";
        finished = true;
    }
    else if (city == "PIEVEANIEVOLE")
    {
        city = "G636";
        finished = true;
    }
    else if (city == "PIEVEALBIGNOLA")
    {
        city = "G635";
        finished = true;
    }
    else if (city == "PIEVED'ALPAGO")
    {
        city = "G638";
        finished = true;
    }
    else if (city == "PIEVEDELCAIRO")
    {
        city = "G639";
        finished = true;
    }
    else if (city == "PIEVEDELGRAPPA")
    {
        city = "M422";
        finished = true;
    }
    else if (city == "PIEVEDIBONO")
    {
        city = "G641";
        finished = true;
    }
    else if (city == "PIEVEDIBONO-PREZZO")
    {
        city = "M365";
        finished = true;
    }
    else if (city == "PIEVEDICADORE")
    {
        city = "G642";
        finished = true;
    }
    else if (city == "PIEVEDICENTO")
    {
        city = "G643";
        finished = true;
    }
    else if (city == "PIEVEDICORIANO")
    {
        city = "G633";
        finished = true;
    }
    else if (city == "PIEVEDILEDRO")
    {
        city = "G644";
        finished = true;
    }
    else if (city == "PIEVEDISOLIGO")
    {
        city = "G645";
        finished = true;
    }
    else if (city == "PIEVEDITECO")
    {
        city = "G632";
        finished = true;
    }
    else if (city == "PIEVED'OLMI")
    {
        city = "G647";
        finished = true;
    }
    else if (city == "PIEVEEMANUELE")
    {
        city = "G634";
        finished = true;
    }
    else if (city == "PIEVEFISSIRAGA")
    {
        city = "G096";
        finished = true;
    }
    else if (city == "PIEVEFOSCIANA")
    {
        city = "G648";
        finished = true;
    }
    else if (city == "PIEVELIGURE")
    {
        city = "G646";
        finished = true;
    }
    else if (city == "PIEVEPORTOMORONE")
    {
        city = "G650";
        finished = true;
    }
    else if (city == "PIEVESANGIACOMO")
    {
        city = "G651";
        finished = true;
    }
    else if (city == "PIEVESANTOSTEFANO")
    {
        city = "G653";
        finished = true;
    }
    else if (city == "PIEVETESINO")
    {
        city = "G656";
        finished = true;
    }
    else if (city == "PIEVETORINA")
    {
        city = "G657";
        finished = true;
    }
    else if (city == "PIEVEVERGONTE")
    {
        city = "G658";
        finished = true;
    }
    else if (city == "PIEVEBOVIGLIANA")
    {
        city = "G637";
        finished = true;
    }
    else if (city == "PIEVEPELAGO")
    {
        city = "G649";
        finished = true;
    }
    else if (city == "PIGLIO")
    {
        city = "G659";
        finished = true;
    }
    else if (city == "PIGNA")
    {
        city = "G660";
        finished = true;
    }
    else if (city == "PIGNATAROINTERAMNA")
    {
        city = "G662";
        finished = true;
    }
    else if (city == "PIGNATAROMAGGIORE")
    {
        city = "G661";
        finished = true;
    }
    else if (city == "PIGNOLA")
    {
        city = "G663";
        finished = true;
    }
    else if (city == "PIGNONE")
    {
        city = "G664";
        finished = true;
    }
    else if (city == "PIGRA")
    {
        city = "G665";
        finished = true;
    }
    else if (city == "PILA")
    {
        city = "G666";
        finished = true;
    }
    else if (city == "PIMENTEL")
    {
        city = "G669";
        finished = true;
    }
    else if (city == "PIMONTE")
    {
        city = "G670";
        finished = true;
    }
    else if (city == "PINAROLOPO")
    {
        city = "G671";
        finished = true;
    }
    else if (city == "PINASCA")
    {
        city = "G672";
        finished = true;
    }
    else if (city == "PINCARA")
    {
        city = "G673";
        finished = true;
    }
    else if (city == "PINEROLO")
    {
        city = "G674";
        finished = true;
    }
    else if (city == "PINETO")
    {
        city = "F831";
        finished = true;
    }
    else if (city == "PINOD'ASTI")
    {
        city = "G676";
        finished = true;
    }
    else if (city == "PINOSULLASPONDADELLAGOMAGGIORE")
    {
        city = "G677";
        finished = true;
    }
    else if (city == "PINOTORINESE")
    {
        city = "G678";
        finished = true;
    }
    else if (city == "PINZANOALTAGLIAMENTO")
    {
        city = "G680";
        finished = true;
    }
    else if (city == "PINZOLO")
    {
        city = "G681";
        finished = true;
    }
    else if (city == "PIOBBICO")
    {
        city = "G682";
        finished = true;
    }
    else if (city == "PIOBESID'ALBA")
    {
        city = "G683";
        finished = true;
    }
    else if (city == "PIOBESITORINESE")
    {
        city = "G684";
        finished = true;
    }
    else if (city == "PIODE")
    {
        city = "G685";
        finished = true;
    }
    else if (city == "PIOLTELLO")
    {
        city = "G686";
        finished = true;
    }
    else if (city == "PIOMBINO")
    {
        city = "G687";
        finished = true;
    }
    else if (city == "PIOMBINODESE")
    {
        city = "G688";
        finished = true;
    }
    else if (city == "PIORACO")
    {
        city = "G690";
        finished = true;
    }
    else if (city == "PIOSSASCO")
    {
        city = "G691";
        finished = true;
    }
    else if (city == "PIOVA'MASSAIA")
    {
        city = "G692";
        finished = true;
    }
    else if (city == "PIOVEDISACCO")
    {
        city = "G693";
        finished = true;
    }
    else if (city == "PIOVENEROCCHETTE")
    {
        city = "G694";
        finished = true;
    }
    else if (city == "PIOVERA")
    {
        city = "G695";
        finished = true;
    }
    else if (city == "PIOZZANO")
    {
        city = "G696";
        finished = true;
    }
    else if (city == "PIOZZO")
    {
        city = "G697";
        finished = true;
    }
    else if (city == "PIRAINO")
    {
        city = "G699";
        finished = true;
    }
    else if (city == "PISA")
    {
        city = "G702";
        finished = true;
    }
    else if (city == "PISANO")
    {
        city = "G703";
        finished = true;
    }
    else if (city == "PISCINA")
    {
        city = "G705";
        finished = true;
    }
    else if (city == "PISCINAS")
    {
        city = "M291";
        finished = true;
    }
    else if (city == "PISCIOTTA")
    {
        city = "G707";
        finished = true;
    }
    else if (city == "PISOGNE")
    {
        city = "G710";
        finished = true;
    }
    else if (city == "PISONIANO")
    {
        city = "G704";
        finished = true;
    }
    else if (city == "PISTICCI")
    {
        city = "G712";
        finished = true;
    }
    else if (city == "PISTOIA")
    {
        city = "G713";
        finished = true;
    }
    else if (city == "PITEGLIO")
    {
        city = "G715";
        finished = true;
    }
    else if (city == "PITIGLIANO")
    {
        city = "G716";
        finished = true;
    }
    else if (city == "PIUBEGA")
    {
        city = "G717";
        finished = true;
    }
    else if (city == "PIURO")
    {
        city = "G718";
        finished = true;
    }
    else if (city == "PIVERONE")
    {
        city = "G719";
        finished = true;
    }
    else if (city == "PIZZALE")
    {
        city = "G720";
        finished = true;
    }
    else if (city == "PIZZIGHETTONE")
    {
        city = "G721";
        finished = true;
    }
    else if (city == "PIZZO")
    {
        city = "G722";
        finished = true;
    }
    else if (city == "PIZZOFERRATO")
    {
        city = "G724";
        finished = true;
    }
    else if (city == "PIZZOLI")
    {
        city = "G726";
        finished = true;
    }
    else if (city == "PIZZONE")
    {
        city = "G727";
        finished = true;
    }
    else if (city == "PIZZONI")
    {
        city = "G728";
        finished = true;
    }
    else if (city == "PLACANICA")
    {
        city = "G729";
        finished = true;
    }
    else if (city == "PLATACI")
    {
        city = "G733";
        finished = true;
    }
    else if (city == "PLATANIA")
    {
        city = "G734";
        finished = true;
    }
    else if (city == "PLATI'")
    {
        city = "G735";
        finished = true;
    }
    else if (city == "PLAUS.PLAUS.")
    {
        city = "G299";
        finished = true;
    }
    else if (city == "PLESIO")
    {
        city = "G737";
        finished = true;
    }
    else if (city == "PLOAGHE")
    {
        city = "G740";
        finished = true;
    }
    else if (city == "PLODIO")
    {
        city = "G741";
        finished = true;
    }
    else if (city == "POCAPAGLIA")
    {
        city = "G742";
        finished = true;
    }
    else if (city == "POCENIA")
    {
        city = "G743";
        finished = true;
    }
    else if (city == "PODENZANA")
    {
        city = "G746";
        finished = true;
    }
    else if (city == "PODENZANO")
    {
        city = "G747";
        finished = true;
    }
    else if (city == "POFI")
    {
        city = "G749";
        finished = true;
    }
    else if (city == "POGGIARDO")
    {
        city = "G751";
        finished = true;
    }
    else if (city == "POGGIBONSI")
    {
        city = "G752";
        finished = true;
    }
    else if (city == "POGGIOACAIANO")
    {
        city = "G754";
        finished = true;
    }
    else if (city == "POGGIOBERNI")
    {
        city = "G755";
        finished = true;
    }
    else if (city == "POGGIOBUSTONE")
    {
        city = "G756";
        finished = true;
    }
    else if (city == "POGGIOCATINO")
    {
        city = "G757";
        finished = true;
    }
    else if (city == "POGGIOIMPERIALE")
    {
        city = "G761";
        finished = true;
    }
    else if (city == "POGGIOMIRTETO")
    {
        city = "G763";
        finished = true;
    }
    else if (city == "POGGIOMOIANO")
    {
        city = "G764";
        finished = true;
    }
    else if (city == "POGGIONATIVO")
    {
        city = "G765";
        finished = true;
    }
    else if (city == "POGGIOPICENZE")
    {
        city = "G766";
        finished = true;
    }
    else if (city == "POGGIORENATICO")
    {
        city = "G768";
        finished = true;
    }
    else if (city == "POGGIORUSCO")
    {
        city = "G753";
        finished = true;
    }
    else if (city == "POGGIOSANLORENZO")
    {
        city = "G770";
        finished = true;
    }
    else if (city == "POGGIOSANMARCELLO")
    {
        city = "G771";
        finished = true;
    }
    else if (city == "POGGIOSANVICINO")
    {
        city = "D566";
        finished = true;
    }
    else if (city == "POGGIOSANNITA")
    {
        city = "B317";
        finished = true;
    }
    else if (city == "POGGIOTORRIANA")
    {
        city = "M324";
        finished = true;
    }
    else if (city == "POGGIODOMO")
    {
        city = "G758";
        finished = true;
    }
    else if (city == "POGGIOFIORITO")
    {
        city = "G760";
        finished = true;
    }
    else if (city == "POGGIOMARINO")
    {
        city = "G762";
        finished = true;
    }
    else if (city == "POGGIOREALE")
    {
        city = "G767";
        finished = true;
    }
    else if (city == "POGGIORSINI")
    {
        city = "G769";
        finished = true;
    }
    else if (city == "POGGIRIDENTI")
    {
        city = "G431";
        finished = true;
    }
    else if (city == "POGLIANOMILANESE")
    {
        city = "G772";
        finished = true;
    }
    else if (city == "POGNANALARIO")
    {
        city = "G773";
        finished = true;
    }
    else if (city == "POGNANO")
    {
        city = "G774";
        finished = true;
    }
    else if (city == "POGNO")
    {
        city = "G775";
        finished = true;
    }
    else if (city == "POIRINO")
    {
        city = "G777";
        finished = true;
    }
    else if (city == "POJANAMAGGIORE")
    {
        city = "G776";
        finished = true;
    }
    else if (city == "POLAVENO")
    {
        city = "G779";
        finished = true;
    }
    else if (city == "POLCENIGO")
    {
        city = "G780";
        finished = true;
    }
    else if (city == "POLESELLA")
    {
        city = "G782";
        finished = true;
    }
    else if (city == "POLESINEPARMENSE")
    {
        city = "G783";
        finished = true;
    }
    else if (city == "POLESINEZIBELLO")
    {
        city = "M367";
        finished = true;
    }
    else if (city == "POLI")
    {
        city = "G784";
        finished = true;
    }
    else if (city == "POLIA")
    {
        city = "G785";
        finished = true;
    }
    else if (city == "POLICORO")
    {
        city = "G786";
        finished = true;
    }
    else if (city == "POLIGNANOAMARE")
    {
        city = "G787";
        finished = true;
    }
    else if (city == "POLINAGO")
    {
        city = "G789";
        finished = true;
    }
    else if (city == "POLINO")
    {
        city = "G790";
        finished = true;
    }
    else if (city == "POLISTENA")
    {
        city = "G791";
        finished = true;
    }
    else if (city == "POLIZZIGENEROSA")
    {
        city = "G792";
        finished = true;
    }
    else if (city == "POLLA")
    {
        city = "G793";
        finished = true;
    }
    else if (city == "POLLEIN")
    {
        city = "G794";
        finished = true;
    }
    else if (city == "POLLENATROCCHIA")
    {
        city = "G795";
        finished = true;
    }
    else if (city == "POLLENZA")
    {
        city = "F567";
        finished = true;
    }
    else if (city == "POLLICA")
    {
        city = "G796";
        finished = true;
    }
    else if (city == "POLLINA")
    {
        city = "G797";
        finished = true;
    }
    else if (city == "POLLONE")
    {
        city = "G798";
        finished = true;
    }
    else if (city == "POLLUTRI")
    {
        city = "G799";
        finished = true;
    }
    else if (city == "POLONGHERA")
    {
        city = "G800";
        finished = true;
    }
    else if (city == "POLPENAZZEDELGARDA")
    {
        city = "G801";
        finished = true;
    }
    else if (city == "POLVERARA")
    {
        city = "G802";
        finished = true;
    }
    else if (city == "POLVERIGI")
    {
        city = "G803";
        finished = true;
    }
    else if (city == "POMARANCE")
    {
        city = "G804";
        finished = true;
    }
    else if (city == "POMARETTO")
    {
        city = "G805";
        finished = true;
    }
    else if (city == "POMARICO")
    {
        city = "G806";
        finished = true;
    }
    else if (city == "POMAROMONFERRATO")
    {
        city = "G807";
        finished = true;
    }
    else if (city == "POMAROLO")
    {
        city = "G808";
        finished = true;
    }
    else if (city == "POMBIA")
    {
        city = "G809";
        finished = true;
    }
    else if (city == "POMEZIA")
    {
        city = "G811";
        finished = true;
    }
    else if (city == "POMIGLIANOD'ARCO")
    {
        city = "G812";
        finished = true;
    }
    else if (city == "POMPEI")
    {
        city = "G813";
        finished = true;
    }
    else if (city == "POMPEIANA")
    {
        city = "G814";
        finished = true;
    }
    else if (city == "POMPIANO")
    {
        city = "G815";
        finished = true;
    }
    else if (city == "POMPONESCO")
    {
        city = "G816";
        finished = true;
    }
    else if (city == "POMPU")
    {
        city = "G817";
        finished = true;
    }
    else if (city == "PONCARALE")
    {
        city = "G818";
        finished = true;
    }
    else if (city == "PONDERANO")
    {
        city = "G820";
        finished = true;
    }
    else if (city == "PONNA")
    {
        city = "G821";
        finished = true;
    }
    else if (city == "PONSACCO")
    {
        city = "G822";
        finished = true;
    }
    else if (city == "PONSO")
    {
        city = "G823";
        finished = true;
    }
    else if (city == "PONTCANAVESE")
    {
        city = "G826";
        finished = true;
    }
    else if (city == "PONTASSIEVE")
    {
        city = "G825";
        finished = true;
    }
    else if (city == "PONTBOSET")
    {
        city = "G545";
        finished = true;
    }
    else if (city == "PONTE")
    {
        city = "G827";
        finished = true;
    }
    else if (city == "PONTEBUGGIANESE")
    {
        city = "G833";
        finished = true;
    }
    else if (city == "PONTEDELL'OLIO")
    {
        city = "G842";
        finished = true;
    }
    else if (city == "PONTEDILEGNO")
    {
        city = "G844";
        finished = true;
    }
    else if (city == "PONTEDIPIAVE")
    {
        city = "G846";
        finished = true;
    }
    else if (city == "PONTEGARDENA.WAIDBRUCK.")
    {
        city = "G830";
        finished = true;
    }
    else if (city == "PONTEINVALTELLINA")
    {
        city = "G829";
        finished = true;
    }
    else if (city == "PONTELAMBRO")
    {
        city = "G847";
        finished = true;
    }
    else if (city == "PONTENELLEALPI")
    {
        city = "B662";
        finished = true;
    }
    else if (city == "PONTENIZZA")
    {
        city = "G851";
        finished = true;
    }
    else if (city == "PONTENOSSA")
    {
        city = "F941";
        finished = true;
    }
    else if (city == "PONTESANNICOLO'")
    {
        city = "G855";
        finished = true;
    }
    else if (city == "PONTESANPIETRO")
    {
        city = "G856";
        finished = true;
    }
    else if (city == "PONTEBBA")
    {
        city = "G831";
        finished = true;
    }
    else if (city == "PONTECAGNANOFAIANO")
    {
        city = "G834";
        finished = true;
    }
    else if (city == "PONTECCHIOPOLESINE")
    {
        city = "G836";
        finished = true;
    }
    else if (city == "PONTECHIANALE")
    {
        city = "G837";
        finished = true;
    }
    else if (city == "PONTECORVO")
    {
        city = "G838";
        finished = true;
    }
    else if (city == "PONTECURONE")
    {
        city = "G839";
        finished = true;
    }
    else if (city == "PONTEDASSIO")
    {
        city = "G840";
        finished = true;
    }
    else if (city == "PONTEDERA")
    {
        city = "G843";
        finished = true;
    }
    else if (city == "PONTELANDOLFO")
    {
        city = "G848";
        finished = true;
    }
    else if (city == "PONTELATONE")
    {
        city = "G849";
        finished = true;
    }
    else if (city == "PONTELONGO")
    {
        city = "G850";
        finished = true;
    }
    else if (city == "PONTENURE")
    {
        city = "G852";
        finished = true;
    }
    else if (city == "PONTERANICA")
    {
        city = "G853";
        finished = true;
    }
    else if (city == "PONTESTURA")
    {
        city = "G858";
        finished = true;
    }
    else if (city == "PONTEVICO")
    {
        city = "G859";
        finished = true;
    }
    else if (city == "PONTEY")
    {
        city = "G860";
        finished = true;
    }
    else if (city == "PONTI")
    {
        city = "G861";
        finished = true;
    }
    else if (city == "PONTISULMINCIO")
    {
        city = "G862";
        finished = true;
    }
    else if (city == "PONTIDA")
    {
        city = "G864";
        finished = true;
    }
    else if (city == "PONTINIA")
    {
        city = "G865";
        finished = true;
    }
    else if (city == "PONTINVREA")
    {
        city = "G866";
        finished = true;
    }
    else if (city == "PONTIROLONUOVO")
    {
        city = "G867";
        finished = true;
    }
    else if (city == "PONTOGLIO")
    {
        city = "G869";
        finished = true;
    }
    else if (city == "PONTREMOLI")
    {
        city = "G870";
        finished = true;
    }
    else if (city == "PONT-SAINT-MARTIN")
    {
        city = "G854";
        finished = true;
    }
    else if (city == "PONZA")
    {
        city = "G871";
        finished = true;
    }
    else if (city == "PONZANODelse ifERMO")
    {
        city = "G873";
        finished = true;
    }
    else if (city == "PONZANOMONFERRATO")
    {
        city = "G872";
        finished = true;
    }
    else if (city == "PONZANOROMANO")
    {
        city = "G874";
        finished = true;
    }
    else if (city == "PONZANOVENETO")
    {
        city = "G875";
        finished = true;
    }
    else if (city == "PONZONE")
    {
        city = "G877";
        finished = true;
    }
    else if (city == "POPOLI")
    {
        city = "G878";
        finished = true;
    }
    else if (city == "POPPI")
    {
        city = "G879";
        finished = true;
    }
    else if (city == "PORANO")
    {
        city = "G881";
        finished = true;
    }
    else if (city == "PORCARI")
    {
        city = "G882";
        finished = true;
    }
    else if (city == "PORCIA")
    {
        city = "G886";
        finished = true;
    }
    else if (city == "PORDENONE")
    {
        city = "G888";
        finished = true;
    }
    else if (city == "PORLEZZA")
    {
        city = "G889";
        finished = true;
    }
    else if (city == "PORNASSIO")
    {
        city = "G890";
        finished = true;
    }
    else if (city == "PORPETTO")
    {
        city = "G891";
        finished = true;
    }
    else if (city == "PORRETTATERME")
    {
        city = "A558";
        finished = true;
    }
    else if (city == "PORTACOMARO")
    {
        city = "G894";
        finished = true;
    }
    else if (city == "PORTALBERA")
    {
        city = "G895";
        finished = true;
    }
    else if (city == "PORTE")
    {
        city = "G900";
        finished = true;
    }
    else if (city == "PORTEDIRENDENA")
    {
        city = "M358";
        finished = true;
    }
    else if (city == "PORTICI")
    {
        city = "G902";
        finished = true;
    }
    else if (city == "PORTICODICASERTA")
    {
        city = "G903";
        finished = true;
    }
    else if (city == "PORTICOESANBENEDETTO")
    {
        city = "G904";
        finished = true;
    }
    else if (city == "PORTIGLIOLA")
    {
        city = "G905";
        finished = true;
    }
    else if (city == "PORTOAZZURRO")
    {
        city = "E680";
        finished = true;
    }
    else if (city == "PORTOCERESIO")
    {
        city = "G906";
        finished = true;
    }
    else if (city == "PORTOCESAREO")
    {
        city = "M263";
        finished = true;
    }
    else if (city == "PORTOEMPEDOCLE")
    {
        city = "F299";
        finished = true;
    }
    else if (city == "PORTOMANTOVANO")
    {
        city = "G917";
        finished = true;
    }
    else if (city == "PORTORECANATI")
    {
        city = "G919";
        finished = true;
    }
    else if (city == "PORTOSANGIORGIO")
    {
        city = "G920";
        finished = true;
    }
    else if (city == "PORTOSANT'ELPIDIO")
    {
        city = "G921";
        finished = true;
    }
    else if (city == "PORTOTOLLE")
    {
        city = "G923";
        finished = true;
    }
    else if (city == "PORTOTORRES")
    {
        city = "G924";
        finished = true;
    }
    else if (city == "PORTOVALTRAVAGLIA")
    {
        city = "G907";
        finished = true;
    }
    else if (city == "PORTOVIRO")
    {
        city = "G926";
        finished = true;
    }
    else if (city == "PORTOBUFFOLE'")
    {
        city = "G909";
        finished = true;
    }
    else if (city == "PORTOCANNONE")
    {
        city = "G910";
        finished = true;
    }
    else if (city == "PORTOFERRAIO")
    {
        city = "G912";
        finished = true;
    }
    else if (city == "PORTOFINO")
    {
        city = "G913";
        finished = true;
    }
    else if (city == "PORTOGRUARO")
    {
        city = "G914";
        finished = true;
    }
    else if (city == "PORTOMAGGIORE")
    {
        city = "G916";
        finished = true;
    }
    else if (city == "PORTOPALODICAPOPASSERO")
    {
        city = "M257";
        finished = true;
    }
    else if (city == "PORTOSCUSO")
    {
        city = "G922";
        finished = true;
    }
    else if (city == "PORTOVENERE")
    {
        city = "G925";
        finished = true;
    }
    else if (city == "PORTULA")
    {
        city = "G927";
        finished = true;
    }
    else if (city == "POSADA")
    {
        city = "G929";
        finished = true;
    }
    else if (city == "POSINA")
    {
        city = "G931";
        finished = true;
    }
    else if (city == "POSITANO")
    {
        city = "G932";
        finished = true;
    }
    else if (city == "POSSAGNO")
    {
        city = "G933";
        finished = true;
    }
    else if (city == "POSTA")
    {
        city = "G934";
        finished = true;
    }
    else if (city == "POSTAFIBRENO")
    {
        city = "G935";
        finished = true;
    }
    else if (city == "POSTAL.BURGSTALL.")
    {
        city = "G936";
        finished = true;
    }
    else if (city == "POSTALESIO")
    {
        city = "G937";
        finished = true;
    }
    else if (city == "POSTIGLIONE")
    {
        city = "G939";
        finished = true;
    }
    else if (city == "POSTUA")
    {
        city = "G940";
        finished = true;
    }
    else if (city == "POTENZA")
    {
        city = "G942";
        finished = true;
    }
    else if (city == "POTENZAPICENA")
    {
        city = "F632";
        finished = true;
    }
    else if (city == "POVEDELGRAPPA")
    {
        city = "G943";
        finished = true;
    }
    else if (city == "POVEGLIANO")
    {
        city = "G944";
        finished = true;
    }
    else if (city == "POVEGLIANOVERONESE")
    {
        city = "G945";
        finished = true;
    }
    else if (city == "POVIGLIO")
    {
        city = "G947";
        finished = true;
    }
    else if (city == "POVOLETTO")
    {
        city = "G949";
        finished = true;
    }
    else if (city == "POZZADelse ifASSA")
    {
        city = "G950";
        finished = true;
    }
    else if (city == "POZZAGLIASABINA")
    {
        city = "G951";
        finished = true;
    }
    else if (city == "POZZAGLIOEDUNITI")
    {
        city = "B914";
        finished = true;
    }
    else if (city == "POZZALLO")
    {
        city = "G953";
        finished = true;
    }
    else if (city == "POZZILLI")
    {
        city = "G954";
        finished = true;
    }
    else if (city == "POZZOD'ADDA")
    {
        city = "G955";
        finished = true;
    }
    else if (city == "POZZOLGROPPO")
    {
        city = "G960";
        finished = true;
    }
    else if (city == "POZZOLENGO")
    {
        city = "G959";
        finished = true;
    }
    else if (city == "POZZOLEONE")
    {
        city = "G957";
        finished = true;
    }
    else if (city == "POZZOLOFORMIGARO")
    {
        city = "G961";
        finished = true;
    }
    else if (city == "POZZOMAGGIORE")
    {
        city = "G962";
        finished = true;
    }
    else if (city == "POZZONOVO")
    {
        city = "G963";
        finished = true;
    }
    else if (city == "POZZUOLI")
    {
        city = "G964";
        finished = true;
    }
    else if (city == "POZZUOLODELFRIULI")
    {
        city = "G966";
        finished = true;
    }
    else if (city == "POZZUOLOMARTESANA")
    {
        city = "G965";
        finished = true;
    }
    else if (city == "PRADALUNGA")
    {
        city = "G968";
        finished = true;
    }
    else if (city == "PRADAMANO")
    {
        city = "G969";
        finished = true;
    }
    else if (city == "PRADLEVES")
    {
        city = "G970";
        finished = true;
    }
    else if (city == "PRAGELATO")
    {
        city = "G973";
        finished = true;
    }
    else if (city == "PRAIAAMARE")
    {
        city = "G975";
        finished = true;
    }
    else if (city == "PRAIANO")
    {
        city = "G976";
        finished = true;
    }
    else if (city == "PRALBOINO")
    {
        city = "G977";
        finished = true;
    }
    else if (city == "PRALI")
    {
        city = "G978";
        finished = true;
    }
    else if (city == "PRALORMO")
    {
        city = "G979";
        finished = true;
    }
    else if (city == "PRALUNGO")
    {
        city = "G980";
        finished = true;
    }
    else if (city == "PRAMAGGIORE")
    {
        city = "G981";
        finished = true;
    }
    else if (city == "PRAMOLLO")
    {
        city = "G982";
        finished = true;
    }
    else if (city == "PRAROLO")
    {
        city = "G985";
        finished = true;
    }
    else if (city == "PRAROSTINO")
    {
        city = "G986";
        finished = true;
    }
    else if (city == "PRASCO")
    {
        city = "G987";
        finished = true;
    }
    else if (city == "PRASCORSANO")
    {
        city = "G988";
        finished = true;
    }
    else if (city == "PRASO")
    {
        city = "G989";
        finished = true;
    }
    else if (city == "PRATACAMPORTACCIO")
    {
        city = "G993";
        finished = true;
    }
    else if (city == "PRATAD'ANSIDONIA")
    {
        city = "G992";
        finished = true;
    }
    else if (city == "PRATADIPORDENONE")
    {
        city = "G994";
        finished = true;
    }
    else if (city == "PRATADIPRINCIPATOULTRA")
    {
        city = "G990";
        finished = true;
    }
    else if (city == "PRATASANNITA")
    {
        city = "G991";
        finished = true;
    }
    else if (city == "PRATELLA")
    {
        city = "G995";
        finished = true;
    }
    else if (city == "PRATIGLIONE")
    {
        city = "G997";
        finished = true;
    }
    else if (city == "PRATO")
    {
        city = "G999";
        finished = true;
    }
    else if (city == "PRATOALLOSTELVIO.PRADAMSTILFSERJOCH.")
    {
        city = "H004";
        finished = true;
    }
    else if (city == "PRATOCARNICO")
    {
        city = "H002";
        finished = true;
    }
    else if (city == "PRATOSESIA")
    {
        city = "H001";
        finished = true;
    }
    else if (city == "PRATOLAPELIGNA")
    {
        city = "H007";
        finished = true;
    }
    else if (city == "PRATOLASERRA")
    {
        city = "H006";
        finished = true;
    }
    else if (city == "PRATOVECCHIO")
    {
        city = "H008";
        finished = true;
    }
    else if (city == "PRATOVECCHIOSTIA")
    {
        city = "M329";
        finished = true;
    }
    else if (city == "PRAVISDOMINI")
    {
        city = "H010";
        finished = true;
    }
    else if (city == "PRAY")
    {
        city = "G974";
        finished = true;
    }
    else if (city == "PRAZZO")
    {
        city = "H011";
        finished = true;
    }
    else if (city == "PRECENICCO")
    {
        city = "H014";
        finished = true;
    }
    else if (city == "PRECI")
    {
        city = "H015";
        finished = true;
    }
    else if (city == "PREDAIA")
    {
        city = "M344";
        finished = true;
    }
    else if (city == "PREDAPPIO")
    {
        city = "H017";
        finished = true;
    }
    else if (city == "PREDAZZO")
    {
        city = "H018";
        finished = true;
    }
    else if (city == "PREDOI.PRETTAU.")
    {
        city = "H019";
        finished = true;
    }
    else if (city == "PREDORE")
    {
        city = "H020";
        finished = true;
    }
    else if (city == "PREDOSA")
    {
        city = "H021";
        finished = true;
    }
    else if (city == "PREGANZIOL")
    {
        city = "H022";
        finished = true;
    }
    else if (city == "PREGNANAMILANESE")
    {
        city = "H026";
        finished = true;
    }
    else if (city == "PRELA'")
    {
        city = "H027";
        finished = true;
    }
    else if (city == "PREMANA")
    {
        city = "H028";
        finished = true;
    }
    else if (city == "PREMARIACCO")
    {
        city = "H029";
        finished = true;
    }
    else if (city == "PREMENO")
    {
        city = "H030";
        finished = true;
    }
    else if (city == "PREMIA")
    {
        city = "H033";
        finished = true;
    }
    else if (city == "PREMILCUORE")
    {
        city = "H034";
        finished = true;
    }
    else if (city == "PREMOLO")
    {
        city = "H036";
        finished = true;
    }
    else if (city == "PREMOSELLO-CHIOVENDA")
    {
        city = "H037";
        finished = true;
    }
    else if (city == "PREONE")
    {
        city = "H038";
        finished = true;
    }
    else if (city == "PREORE")
    {
        city = "H039";
        finished = true;
    }
    else if (city == "PREPOTTO")
    {
        city = "H040";
        finished = true;
    }
    else if (city == "PRE'-SAINT-DIDIER")
    {
        city = "H042";
        finished = true;
    }
    else if (city == "PRESEGLIE")
    {
        city = "H043";
        finished = true;
    }
    else if (city == "PRESENZANO")
    {
        city = "H045";
        finished = true;
    }
    else if (city == "PRESEZZO")
    {
        city = "H046";
        finished = true;
    }
    else if (city == "PRESICCE")
    {
        city = "H047";
        finished = true;
    }
    else if (city == "PRESICCE-ACQUARICA")
    {
        city = "M428";
        finished = true;
    }
    else if (city == "PRESSANA")
    {
        city = "H048";
        finished = true;
    }
    else if (city == "PRESTINE")
    {
        city = "H050";
        finished = true;
    }
    else if (city == "PRETORO")
    {
        city = "H052";
        finished = true;
    }
    else if (city == "PREVALLE")
    {
        city = "H055";
        finished = true;
    }
    else if (city == "PREZZA")
    {
        city = "H056";
        finished = true;
    }
    else if (city == "PREZZO")
    {
        city = "H057";
        finished = true;
    }
    else if (city == "PRIERO")
    {
        city = "H059";
        finished = true;
    }
    else if (city == "PRIGNANOCILENTO")
    {
        city = "H062";
        finished = true;
    }
    else if (city == "PRIGNANOSULLASECCHIA")
    {
        city = "H061";
        finished = true;
    }
    else if (city == "PRIMALUNA")
    {
        city = "H063";
        finished = true;
    }
    else if (city == "PRIMIEROSANMARTINODICASTROZZA")
    {
        city = "M359";
        finished = true;
    }
    else if (city == "PRIOCCA")
    {
        city = "H068";
        finished = true;
    }
    else if (city == "PRIOLA")
    {
        city = "H069";
        finished = true;
    }
    else if (city == "PRIOLOGARGALLO")
    {
        city = "M279";
        finished = true;
    }
    else if (city == "PRIVERNO")
    {
        city = "G698";
        finished = true;
    }
    else if (city == "PRIZZI")
    {
        city = "H070";
        finished = true;
    }
    else if (city == "PROCENO")
    {
        city = "H071";
        finished = true;
    }
    else if (city == "PROCIDA")
    {
        city = "H072";
        finished = true;
    }
    else if (city == "PROPATA")
    {
        city = "H073";
        finished = true;
    }
    else if (city == "PROSERPIO")
    {
        city = "H074";
        finished = true;
    }
    else if (city == "PROSSEDI")
    {
        city = "H076";
        finished = true;
    }
    else if (city == "PROVAGLIOD'ISEO")
    {
        city = "H078";
        finished = true;
    }
    else if (city == "PROVAGLIOVALSABBIA")
    {
        city = "H077";
        finished = true;
    }
    else if (city == "PROVES.PROVEIS.")
    {
        city = "H081";
        finished = true;
    }
    else if (city == "PROVVIDENTI")
    {
        city = "H083";
        finished = true;
    }
    else if (city == "PRUNETTO")
    {
        city = "H085";
        finished = true;
    }
    else if (city == "PUEGNAGODELGARDA")
    {
        city = "H086";
        finished = true;
    }
    else if (city == "PUGLIANELLO")
    {
        city = "H087";
        finished = true;
    }
    else if (city == "PULA")
    {
        city = "H088";
        finished = true;
    }
    else if (city == "PULFERO")
    {
        city = "H089";
        finished = true;
    }
    else if (city == "PULSANO")
    {
        city = "H090";
        finished = true;
    }
    else if (city == "PUMENENGO")
    {
        city = "H091";
        finished = true;
    }
    else if (city == "PUOSD'ALPAGO")
    {
        city = "H092";
        finished = true;
    }
    else if (city == "PUSIANO")
    {
        city = "H094";
        finished = true;
    }
    else if (city == "PUTelse ifIGARI")
    {
        city = "H095";
        finished = true;
    }
    else if (city == "PUTIGNANO")
    {
        city = "H096";
        finished = true;
    }
    else if (city == "QUADRELLE")
    {
        city = "H097";
        finished = true;
    }
    else if (city == "QUADRI")
    {
        city = "H098";
        finished = true;
    }
    else if (city == "QUAGLIUZZO")
    {
        city = "H100";
        finished = true;
    }
    else if (city == "QUALIANO")
    {
        city = "H101";
        finished = true;
    }
    else if (city == "QUARANTI")
    {
        city = "H102";
        finished = true;
    }
    else if (city == "QUAREGNA")
    {
        city = "H103";
        finished = true;
    }
    else if (city == "QUAREGNACERRETO")
    {
        city = "M414";
        finished = true;
    }
    else if (city == "QUARGNENTO")
    {
        city = "H104";
        finished = true;
    }
    else if (city == "QUARNASOPRA")
    {
        city = "H106";
        finished = true;
    }
    else if (city == "QUARNASOTTO")
    {
        city = "H107";
        finished = true;
    }
    else if (city == "QUARONA")
    {
        city = "H108";
        finished = true;
    }
    else if (city == "QUARRATA")
    {
        city = "H109";
        finished = true;
    }
    else if (city == "QUART")
    {
        city = "H110";
        finished = true;
    }
    else if (city == "QUARTO")
    {
        city = "H114";
        finished = true;
    }
    else if (city == "QUARTOD'ALTINO")
    {
        city = "H117";
        finished = true;
    }
    else if (city == "QUARTUSANT'ELENA")
    {
        city = "H118";
        finished = true;
    }
    else if (city == "QUARTUCCIU")
    {
        city = "H119";
        finished = true;
    }
    else if (city == "QUASSOLO")
    {
        city = "H120";
        finished = true;
    }
    else if (city == "QUATTORDIO")
    {
        city = "H121";
        finished = true;
    }
    else if (city == "QUATTROCASTELLA")
    {
        city = "H122";
        finished = true;
    }
    else if (city == "QUERO")
    {
        city = "H124";
        finished = true;
    }
    else if (city == "QUEROVAS")
    {
        city = "M332";
        finished = true;
    }
    else if (city == "QUILIANO")
    {
        city = "H126";
        finished = true;
    }
    else if (city == "QUINCINETTO")
    {
        city = "H127";
        finished = true;
    }
    else if (city == "QUINDICI")
    {
        city = "H128";
        finished = true;
    }
    else if (city == "QUINGENTOLE")
    {
        city = "H129";
        finished = true;
    }
    else if (city == "QUINTANO")
    {
        city = "H130";
        finished = true;
    }
    else if (city == "QUINTODITREVISO")
    {
        city = "H131";
        finished = true;
    }
    else if (city == "QUINTOVERCELLESE")
    {
        city = "H132";
        finished = true;
    }
    else if (city == "QUINTOVICENTINO")
    {
        city = "H134";
        finished = true;
    }
    else if (city == "QUINZANOD'OGLIO")
    {
        city = "H140";
        finished = true;
    }
    else if (city == "QUISTELLO")
    {
        city = "H143";
        finished = true;
    }
    else if (city == "QUITTENGO")
    {
        city = "H145";
        finished = true;
    }
    else if (city == "RABBI")
    {
        city = "H146";
        finished = true;
    }
    else if (city == "RACALE")
    {
        city = "H147";
        finished = true;
    }
    else if (city == "RACALMUTO")
    {
        city = "H148";
        finished = true;
    }
    else if (city == "RACCONIGI")
    {
        city = "H150";
        finished = true;
    }
    else if (city == "RACCUJA")
    {
        city = "H151";
        finished = true;
    }
    else if (city == "RACINES.RATSCHINGS.")
    {
        city = "H152";
        finished = true;
    }
    else if (city == "RADDAINCHIANTI")
    {
        city = "H153";
        finished = true;
    }
    else if (city == "RADDUSA")
    {
        city = "H154";
        finished = true;
    }
    else if (city == "RADICOFANI")
    {
        city = "H156";
        finished = true;
    }
    else if (city == "RADICONDOLI")
    {
        city = "H157";
        finished = true;
    }
    else if (city == "RAFFADALI")
    {
        city = "H159";
        finished = true;
    }
    else if (city == "RAGALNA")
    {
        city = "M287";
        finished = true;
    }
    else if (city == "RAGOGNA")
    {
        city = "H161";
        finished = true;
    }
    else if (city == "RAGOLI")
    {
        city = "H162";
        finished = true;
    }
    else if (city == "RAGUSA")
    {
        city = "H163";
        finished = true;
    }
    else if (city == "RAIANO")
    {
        city = "H166";
        finished = true;
    }
    else if (city == "RAMACCA")
    {
        city = "H168";
        finished = true;
    }
    else if (city == "RAMISETO")
    {
        city = "G654";
        finished = true;
    }
    else if (city == "RAMPONIOVERNA")
    {
        city = "H171";
        finished = true;
    }
    else if (city == "RANCIOVALCUVIA")
    {
        city = "H173";
        finished = true;
    }
    else if (city == "RANCO")
    {
        city = "H174";
        finished = true;
    }
    else if (city == "RANDAZZO")
    {
        city = "H175";
        finished = true;
    }
    else if (city == "RANICA")
    {
        city = "H176";
        finished = true;
    }
    else if (city == "RANZANICO")
    {
        city = "H177";
        finished = true;
    }
    else if (city == "RANZO")
    {
        city = "H180";
        finished = true;
    }
    else if (city == "RAPAGNANO")
    {
        city = "H182";
        finished = true;
    }
    else if (city == "RAPALLO")
    {
        city = "H183";
        finished = true;
    }
    else if (city == "RAPINO")
    {
        city = "H184";
        finished = true;
    }
    else if (city == "RAPOLANOTERME")
    {
        city = "H185";
        finished = true;
    }
    else if (city == "RAPOLLA")
    {
        city = "H186";
        finished = true;
    }
    else if (city == "RAPONE")
    {
        city = "H187";
        finished = true;
    }
    else if (city == "RASSA")
    {
        city = "H188";
        finished = true;
    }
    else if (city == "RASUNANTERSELVA.RASENANTHOLZ.")
    {
        city = "H189";
        finished = true;
    }
    else if (city == "RASURA")
    {
        city = "H192";
        finished = true;
    }
    else if (city == "RAVANUSA")
    {
        city = "H194";
        finished = true;
    }
    else if (city == "RAVARINO")
    {
        city = "H195";
        finished = true;
    }
    else if (city == "RAVASCLETTO")
    {
        city = "H196";
        finished = true;
    }
    else if (city == "RAVELLO")
    {
        city = "H198";
        finished = true;
    }
    else if (city == "RAVENNA")
    {
        city = "H199";
        finished = true;
    }
    else if (city == "RAVEO")
    {
        city = "H200";
        finished = true;
    }
    else if (city == "RAVISCANINA")
    {
        city = "H202";
        finished = true;
    }
    else if (city == "RE")
    {
        city = "H203";
        finished = true;
    }
    else if (city == "REA")
    {
        city = "H204";
        finished = true;
    }
    else if (city == "REALMONTE")
    {
        city = "H205";
        finished = true;
    }
    else if (city == "REANADELROJALE")
    {
        city = "H206";
        finished = true;
    }
    else if (city == "REANO")
    {
        city = "H207";
        finished = true;
    }
    else if (city == "RECALE")
    {
        city = "H210";
        finished = true;
    }
    else if (city == "RECANATI")
    {
        city = "H211";
        finished = true;
    }
    else if (city == "RECCO")
    {
        city = "H212";
        finished = true;
    }
    else if (city == "RECETTO")
    {
        city = "H213";
        finished = true;
    }
    else if (city == "RECOAROTERME")
    {
        city = "H214";
        finished = true;
    }
    else if (city == "REDAVALLE")
    {
        city = "H216";
        finished = true;
    }
    else if (city == "REDONDESCO")
    {
        city = "H218";
        finished = true;
    }
    else if (city == "REFRANCORE")
    {
        city = "H219";
        finished = true;
    }
    else if (city == "REFRONTOLO")
    {
        city = "H220";
        finished = true;
    }
    else if (city == "REGALBUTO")
    {
        city = "H221";
        finished = true;
    }
    else if (city == "REGGELLO")
    {
        city = "H222";
        finished = true;
    }
    else if (city == "REGGIODICALABRIA")
    {
        city = "H224";
        finished = true;
    }
    else if (city == "REGGIONELL'EMILIA")
    {
        city = "H223";
        finished = true;
    }
    else if (city == "REGGIOLO")
    {
        city = "H225";
        finished = true;
    }
    else if (city == "REINO")
    {
        city = "H227";
        finished = true;
    }
    else if (city == "REITANO")
    {
        city = "H228";
        finished = true;
    }
    else if (city == "REMANZACCO")
    {
        city = "H229";
        finished = true;
    }
    else if (city == "REMEDELLO")
    {
        city = "H230";
        finished = true;
    }
    else if (city == "RENATE")
    {
        city = "H233";
        finished = true;
    }
    else if (city == "RENDE")
    {
        city = "H235";
        finished = true;
    }
    else if (city == "RENON.RITTEN.")
    {
        city = "H236";
        finished = true;
    }
    else if (city == "RESANA")
    {
        city = "H238";
        finished = true;
    }
    else if (city == "RESCALDINA")
    {
        city = "H240";
        finished = true;
    }
    else if (city == "RESIA")
    {
        city = "H242";
        finished = true;
    }
    else if (city == "RESIUTTA")
    {
        city = "H244";
        finished = true;
    }
    else if (city == "RESUTTANO")
    {
        city = "H245";
        finished = true;
    }
    else if (city == "RETORBIDO")
    {
        city = "H246";
        finished = true;
    }
    else if (city == "REVELLO")
    {
        city = "H247";
        finished = true;
    }
    else if (city == "REVERE")
    {
        city = "H248";
        finished = true;
    }
    else if (city == "REVIGLIASCOD'ASTI")
    {
        city = "H250";
        finished = true;
    }
    else if (city == "REVINELAGO")
    {
        city = "H253";
        finished = true;
    }
    else if (city == "REVO'")
    {
        city = "H254";
        finished = true;
    }
    else if (city == "REZZAGO")
    {
        city = "H255";
        finished = true;
    }
    else if (city == "REZZATO")
    {
        city = "H256";
        finished = true;
    }
    else if (city == "REZZO")
    {
        city = "H257";
        finished = true;
    }
    else if (city == "REZZOAGLIO")
    {
        city = "H258";
        finished = true;
    }
    else if (city == "RHEMES-NOTRE-DAME")
    {
        city = "H262";
        finished = true;
    }
    else if (city == "RHEMES-SAINT-GEORGES")
    {
        city = "H263";
        finished = true;
    }
    else if (city == "RHO")
    {
        city = "H264";
        finished = true;
    }
    else if (city == "RIACE")
    {
        city = "H265";
        finished = true;
    }
    else if (city == "RIALTO")
    {
        city = "H266";
        finished = true;
    }
    else if (city == "RIANO")
    {
        city = "H267";
        finished = true;
    }
    else if (city == "RIARDO")
    {
        city = "H268";
        finished = true;
    }
    else if (city == "RIBERA")
    {
        city = "H269";
        finished = true;
    }
    else if (city == "RIBORDONE")
    {
        city = "H270";
        finished = true;
    }
    else if (city == "RICADI")
    {
        city = "H271";
        finished = true;
    }
    else if (city == "RICALDONE")
    {
        city = "H272";
        finished = true;
    }
    else if (city == "RICCIA")
    {
        city = "H273";
        finished = true;
    }
    else if (city == "RICCIONE")
    {
        city = "H274";
        finished = true;
    }
    else if (city == "RICCO'DELGOLFODISPEZIA")
    {
        city = "H275";
        finished = true;
    }
    else if (city == "RICENGO")
    {
        city = "H276";
        finished = true;
    }
    else if (city == "RICIGLIANO")
    {
        city = "H277";
        finished = true;
    }
    else if (city == "RIESEPIOX")
    {
        city = "H280";
        finished = true;
    }
    else if (city == "RIESI")
    {
        city = "H281";
        finished = true;
    }
    else if (city == "RIETI")
    {
        city = "H282";
        finished = true;
    }
    else if (city == "Relse ifIANO.Relse ifFIAN.")
    {
        city = "H284";
        finished = true;
    }
    else if (city == "Relse ifREDDO")
    {
        city = "H285";
        finished = true;
    }
    else if (city == "RIGNANOFLAMINIO")
    {
        city = "H288";
        finished = true;
    }
    else if (city == "RIGNANOGARGANICO")
    {
        city = "H287";
        finished = true;
    }
    else if (city == "RIGNANOSULL'ARNO")
    {
        city = "H286";
        finished = true;
    }
    else if (city == "RIGOLATO")
    {
        city = "H289";
        finished = true;
    }
    else if (city == "RIMASANGIUSEPPE")
    {
        city = "H291";
        finished = true;
    }
    else if (city == "RIMASCO")
    {
        city = "H292";
        finished = true;
    }
    else if (city == "RIMELLA")
    {
        city = "H293";
        finished = true;
    }
    else if (city == "RIMINI")
    {
        city = "H294";
        finished = true;
    }
    else if (city == "RIO")
    {
        city = "M391";
        finished = true;
    }
    else if (city == "RIODIPUSTERIA.MUEHLBACH.")
    {
        city = "H299";
        finished = true;
    }
    else if (city == "RIOMARINA")
    {
        city = "H305";
        finished = true;
    }
    else if (city == "RIONELL'ELBA")
    {
        city = "H297";
        finished = true;
    }
    else if (city == "RIOSALICETO")
    {
        city = "H298";
        finished = true;
    }
    else if (city == "RIOFREDDO")
    {
        city = "H300";
        finished = true;
    }
    else if (city == "RIOLASARDO")
    {
        city = "H301";
        finished = true;
    }
    else if (city == "RIOLOTERME")
    {
        city = "H302";
        finished = true;
    }
    else if (city == "RIOLUNATO")
    {
        city = "H303";
        finished = true;
    }
    else if (city == "RIOMAGGIORE")
    {
        city = "H304";
        finished = true;
    }
    else if (city == "RIONEROINVULTURE")
    {
        city = "H307";
        finished = true;
    }
    else if (city == "RIONEROSANNITICO")
    {
        city = "H308";
        finished = true;
    }
    else if (city == "RIPATEATINA")
    {
        city = "H320";
        finished = true;
    }
    else if (city == "RIPABOTTONI")
    {
        city = "H311";
        finished = true;
    }
    else if (city == "RIPACANDIDA")
    {
        city = "H312";
        finished = true;
    }
    else if (city == "RIPALIMOSANI")
    {
        city = "H313";
        finished = true;
    }
    else if (city == "RIPALTAARPINA")
    {
        city = "H314";
        finished = true;
    }
    else if (city == "RIPALTACREMASCA")
    {
        city = "H315";
        finished = true;
    }
    else if (city == "RIPALTAGUERINA")
    {
        city = "H316";
        finished = true;
    }
    else if (city == "RIPARBELLA")
    {
        city = "H319";
        finished = true;
    }
    else if (city == "RIPATRANSONE")
    {
        city = "H321";
        finished = true;
    }
    else if (city == "RIPE")
    {
        city = "H322";
        finished = true;
    }
    else if (city == "RIPESANGINESIO")
    {
        city = "H323";
        finished = true;
    }
    else if (city == "RIPI")
    {
        city = "H324";
        finished = true;
    }
    else if (city == "RIPOSTO")
    {
        city = "H325";
        finished = true;
    }
    else if (city == "RITTANA")
    {
        city = "H326";
        finished = true;
    }
    else if (city == "RIVADELGARDA")
    {
        city = "H330";
        finished = true;
    }
    else if (city == "RIVADELPO")
    {
        city = "M410";
        finished = true;
    }
    else if (city == "RIVADISOLTO")
    {
        city = "H331";
        finished = true;
    }
    else if (city == "RIVALIGURE")
    {
        city = "H328";
        finished = true;
    }
    else if (city == "RIVAPRESSOCHIERI")
    {
        city = "H337";
        finished = true;
    }
    else if (city == "RIVAVALDOBBIA")
    {
        city = "H329";
        finished = true;
    }
    else if (city == "RIVALBA")
    {
        city = "H333";
        finished = true;
    }
    else if (city == "RIVALTABORMIDA")
    {
        city = "H334";
        finished = true;
    }
    else if (city == "RIVALTADITORINO")
    {
        city = "H335";
        finished = true;
    }
    else if (city == "RIVAMONTEAGORDINO")
    {
        city = "H327";
        finished = true;
    }
    else if (city == "RIVANAZZANOTERME")
    {
        city = "H336";
        finished = true;
    }
    else if (city == "RIVARA")
    {
        city = "H338";
        finished = true;
    }
    else if (city == "RIVAROLOCANAVESE")
    {
        city = "H340";
        finished = true;
    }
    else if (city == "RIVAROLODELREEDUNITI")
    {
        city = "H341";
        finished = true;
    }
    else if (city == "RIVAROLOMANTOVANO")
    {
        city = "H342";
        finished = true;
    }
    else if (city == "RIVARONE")
    {
        city = "H343";
        finished = true;
    }
    else if (city == "RIVAROSSA")
    {
        city = "H344";
        finished = true;
    }
    else if (city == "RIVE")
    {
        city = "H346";
        finished = true;
    }
    else if (city == "RIVED'ARCANO")
    {
        city = "H347";
        finished = true;
    }
    else if (city == "RIVELLO")
    {
        city = "H348";
        finished = true;
    }
    else if (city == "RIVERGARO")
    {
        city = "H350";
        finished = true;
    }
    else if (city == "RIVIGNANO")
    {
        city = "H352";
        finished = true;
    }
    else if (city == "RIVIGNANOTEOR")
    {
        city = "M317";
        finished = true;
    }
    else if (city == "RIVISONDOLI")
    {
        city = "H353";
        finished = true;
    }
    else if (city == "RIVODUTRI")
    {
        city = "H354";
        finished = true;
    }
    else if (city == "RIVOLI")
    {
        city = "H355";
        finished = true;
    }
    else if (city == "RIVOLIVERONESE")
    {
        city = "H356";
        finished = true;
    }
    else if (city == "RIVOLTAD'ADDA")
    {
        city = "H357";
        finished = true;
    }
    else if (city == "RIZZICONI")
    {
        city = "H359";
        finished = true;
    }
    else if (city == "RO")
    {
        city = "H360";
        finished = true;
    }
    else if (city == "ROANA")
    {
        city = "H361";
        finished = true;
    }
    else if (city == "ROASCHIA")
    {
        city = "H362";
        finished = true;
    }
    else if (city == "ROASCIO")
    {
        city = "H363";
        finished = true;
    }
    else if (city == "ROASIO")
    {
        city = "H365";
        finished = true;
    }
    else if (city == "ROATTO")
    {
        city = "H366";
        finished = true;
    }
    else if (city == "ROBASSOMERO")
    {
        city = "H367";
        finished = true;
    }
    else if (city == "ROBBIATE")
    {
        city = "G223";
        finished = true;
    }
    else if (city == "ROBBIO")
    {
        city = "H369";
        finished = true;
    }
    else if (city == "ROBECCHETTOCONINDUNO")
    {
        city = "H371";
        finished = true;
    }
    else if (city == "ROBECCOD'OGLIO")
    {
        city = "H372";
        finished = true;
    }
    else if (city == "ROBECCOPAVESE")
    {
        city = "H375";
        finished = true;
    }
    else if (city == "ROBECCOSULNAVIGLIO")
    {
        city = "H373";
        finished = true;
    }
    else if (city == "ROBELLA")
    {
        city = "H376";
        finished = true;
    }
    else if (city == "ROBILANTE")
    {
        city = "H377";
        finished = true;
    }
    else if (city == "ROBURENT")
    {
        city = "H378";
        finished = true;
    }
    else if (city == "ROCCACANAVESE")
    {
        city = "H386";
        finished = true;
    }
    else if (city == "ROCCACANTERANO")
    {
        city = "H387";
        finished = true;
    }
    else if (city == "ROCCACIGLIE'")
    {
        city = "H391";
        finished = true;
    }
    else if (city == "ROCCAD'ARAZZO")
    {
        city = "H392";
        finished = true;
    }
    else if (city == "ROCCADE'BALDI")
    {
        city = "H395";
        finished = true;
    }
    else if (city == "ROCCADE'GIORGI")
    {
        city = "H396";
        finished = true;
    }
    else if (city == "ROCCAD'EVANDRO")
    {
        city = "H398";
        finished = true;
    }
    else if (city == "ROCCADIBOTTE")
    {
        city = "H399";
        finished = true;
    }
    else if (city == "ROCCADICAMBIO")
    {
        city = "H400";
        finished = true;
    }
    else if (city == "ROCCADICAVE")
    {
        city = "H401";
        finished = true;
    }
    else if (city == "ROCCADIMEZZO")
    {
        city = "H402";
        finished = true;
    }
    else if (city == "ROCCADINETO")
    {
        city = "H403";
        finished = true;
    }
    else if (city == "ROCCADIPAPA")
    {
        city = "H404";
        finished = true;
    }
    else if (city == "ROCCAGRIMALDA")
    {
        city = "H414";
        finished = true;
    }
    else if (city == "ROCCAIMPERIALE")
    {
        city = "H416";
        finished = true;
    }
    else if (city == "ROCCAMASSIMA")
    {
        city = "H421";
        finished = true;
    }
    else if (city == "ROCCAPIA")
    {
        city = "H429";
        finished = true;
    }
    else if (city == "ROCCAPIETORE")
    {
        city = "H379";
        finished = true;
    }
    else if (city == "ROCCAPRIORA")
    {
        city = "H432";
        finished = true;
    }
    else if (city == "ROCCASANCASCIANO")
    {
        city = "H437";
        finished = true;
    }
    else if (city == "ROCCASANFELICE")
    {
        city = "H438";
        finished = true;
    }
    else if (city == "ROCCASANGIOVANNI")
    {
        city = "H439";
        finished = true;
    }
    else if (city == "ROCCASANTAMARIA")
    {
        city = "H440";
        finished = true;
    }
    else if (city == "ROCCASANTOSTEFANO")
    {
        city = "H441";
        finished = true;
    }
    else if (city == "ROCCASINIBALDA")
    {
        city = "H446";
        finished = true;
    }
    else if (city == "ROCCASUSELLA")
    {
        city = "H450";
        finished = true;
    }
    else if (city == "ROCCABASCERANA")
    {
        city = "H382";
        finished = true;
    }
    else if (city == "ROCCABERNARDA")
    {
        city = "H383";
        finished = true;
    }
    else if (city == "ROCCABIANCA")
    {
        city = "H384";
        finished = true;
    }
    else if (city == "ROCCABRUNA")
    {
        city = "H385";
        finished = true;
    }
    else if (city == "ROCCACASALE")
    {
        city = "H389";
        finished = true;
    }
    else if (city == "ROCCADARCE")
    {
        city = "H393";
        finished = true;
    }
    else if (city == "ROCCADASPIDE")
    {
        city = "H394";
        finished = true;
    }
    else if (city == "ROCCAFIORITA")
    {
        city = "H405";
        finished = true;
    }
    else if (city == "ROCCAFLUVIONE")
    {
        city = "H390";
        finished = true;
    }
    else if (city == "ROCCAFORTEDELGRECO")
    {
        city = "H408";
        finished = true;
    }
    else if (city == "ROCCAFORTELIGURE")
    {
        city = "H406";
        finished = true;
    }
    else if (city == "ROCCAFORTEMONDOVI'")
    {
        city = "H407";
        finished = true;
    }
    else if (city == "ROCCAFORZATA")
    {
        city = "H409";
        finished = true;
    }
    else if (city == "ROCCAFRANCA")
    {
        city = "H410";
        finished = true;
    }
    else if (city == "ROCCAGIOVINE")
    {
        city = "H411";
        finished = true;
    }
    else if (city == "ROCCAGLORIOSA")
    {
        city = "H412";
        finished = true;
    }
    else if (city == "ROCCAGORGA")
    {
        city = "H413";
        finished = true;
    }
    else if (city == "ROCCALBEGNA")
    {
        city = "H417";
        finished = true;
    }
    else if (city == "ROCCALUMERA")
    {
        city = "H418";
        finished = true;
    }
    else if (city == "ROCCAMANDOLFI")
    {
        city = "H420";
        finished = true;
    }
    else if (city == "ROCCAMENA")
    {
        city = "H422";
        finished = true;
    }
    else if (city == "ROCCAMONFINA")
    {
        city = "H423";
        finished = true;
    }
    else if (city == "ROCCAMONTEPIANO")
    {
        city = "H424";
        finished = true;
    }
    else if (city == "ROCCAMORICE")
    {
        city = "H425";
        finished = true;
    }
    else if (city == "ROCCANOVA")
    {
        city = "H426";
        finished = true;
    }
    else if (city == "ROCCANTICA")
    {
        city = "H427";
        finished = true;
    }
    else if (city == "ROCCAPALUMBA")
    {
        city = "H428";
        finished = true;
    }
    else if (city == "ROCCAPIEMONTE")
    {
        city = "H431";
        finished = true;
    }
    else if (city == "ROCCARAINOLA")
    {
        city = "H433";
        finished = true;
    }
    else if (city == "ROCCARASO")
    {
        city = "H434";
        finished = true;
    }
    else if (city == "ROCCAROMANA")
    {
        city = "H436";
        finished = true;
    }
    else if (city == "ROCCASCALEGNA")
    {
        city = "H442";
        finished = true;
    }
    else if (city == "ROCCASECCA")
    {
        city = "H443";
        finished = true;
    }
    else if (city == "ROCCASECCADEIVOLSCI")
    {
        city = "H444";
        finished = true;
    }
    else if (city == "ROCCASICURA")
    {
        city = "H445";
        finished = true;
    }
    else if (city == "ROCCASPARVERA")
    {
        city = "H447";
        finished = true;
    }
    else if (city == "ROCCASPINALVETI")
    {
        city = "H448";
        finished = true;
    }
    else if (city == "ROCCASTRADA")
    {
        city = "H449";
        finished = true;
    }
    else if (city == "ROCCAVALDINA")
    {
        city = "H380";
        finished = true;
    }
    else if (city == "ROCCAVERANO")
    {
        city = "H451";
        finished = true;
    }
    else if (city == "ROCCAVIGNALE")
    {
        city = "H452";
        finished = true;
    }
    else if (city == "ROCCAVIONE")
    {
        city = "H453";
        finished = true;
    }
    else if (city == "ROCCAVIVARA")
    {
        city = "H454";
        finished = true;
    }
    else if (city == "ROCCELLAIONICA")
    {
        city = "H456";
        finished = true;
    }
    else if (city == "ROCCELLAVALDEMONE")
    {
        city = "H455";
        finished = true;
    }
    else if (city == "ROCCHETTAAVOLTURNO")
    {
        city = "H458";
        finished = true;
    }
    else if (city == "ROCCHETTABELBO")
    {
        city = "H462";
        finished = true;
    }
    else if (city == "ROCCHETTADIVARA")
    {
        city = "H461";
        finished = true;
    }
    else if (city == "ROCCHETTAECROCE")
    {
        city = "H459";
        finished = true;
    }
    else if (city == "ROCCHETTALIGURE")
    {
        city = "H465";
        finished = true;
    }
    else if (city == "ROCCHETTANERVINA")
    {
        city = "H460";
        finished = true;
    }
    else if (city == "ROCCHETTAPALAFEA")
    {
        city = "H466";
        finished = true;
    }
    else if (city == "ROCCHETTASANT'ANTONIO")
    {
        city = "H467";
        finished = true;
    }
    else if (city == "ROCCHETTATANARO")
    {
        city = "H468";
        finished = true;
    }
    else if (city == "RODANO")
    {
        city = "H470";
        finished = true;
    }
    else if (city == "RODDI")
    {
        city = "H472";
        finished = true;
    }
    else if (city == "RODDINO")
    {
        city = "H473";
        finished = true;
    }
    else if (city == "RODELLO")
    {
        city = "H474";
        finished = true;
    }
    else if (city == "RODENGO.RODENECK.")
    {
        city = "H475";
        finished = true;
    }
    else if (city == "RODENGOSAIANO")
    {
        city = "H477";
        finished = true;
    }
    else if (city == "RODERO")
    {
        city = "H478";
        finished = true;
    }
    else if (city == "RODIGARGANICO")
    {
        city = "H480";
        finished = true;
    }
    else if (city == "RODI'MILICI")
    {
        city = "H479";
        finished = true;
    }
    else if (city == "RODIGO")
    {
        city = "H481";
        finished = true;
    }
    else if (city == "ROE'VOLCIANO")
    {
        city = "H484";
        finished = true;
    }
    else if (city == "ROFRANO")
    {
        city = "H485";
        finished = true;
    }
    else if (city == "ROGENO")
    {
        city = "H486";
        finished = true;
    }
    else if (city == "ROGGIANOGRAVINA")
    {
        city = "H488";
        finished = true;
    }
    else if (city == "ROGHUDI")
    {
        city = "H489";
        finished = true;
    }
    else if (city == "ROGLIANO")
    {
        city = "H490";
        finished = true;
    }
    else if (city == "ROGNANO")
    {
        city = "H491";
        finished = true;
    }
    else if (city == "ROGNO")
    {
        city = "H492";
        finished = true;
    }
    else if (city == "ROGOLO")
    {
        city = "H493";
        finished = true;
    }
    else if (city == "ROIATE")
    {
        city = "H494";
        finished = true;
    }
    else if (city == "ROIODELSANGRO")
    {
        city = "H495";
        finished = true;
    }
    else if (city == "ROISAN")
    {
        city = "H497";
        finished = true;
    }
    else if (city == "ROLETTO")
    {
        city = "H498";
        finished = true;
    }
    else if (city == "ROLO")
    {
        city = "H500";
        finished = true;
    }
    else if (city == "ROMA")
    {
        city = "H501";
        finished = true;
    }
    else if (city == "ROMAGNANOALMONTE")
    {
        city = "H503";
        finished = true;
    }
    else if (city == "ROMAGNANOSESIA")
    {
        city = "H502";
        finished = true;
    }
    else if (city == "ROMAGNESE")
    {
        city = "H505";
        finished = true;
    }
    else if (city == "ROMALLO")
    {
        city = "H506";
        finished = true;
    }
    else if (city == "ROMANA")
    {
        city = "H507";
        finished = true;
    }
    else if (city == "ROMANENGO")
    {
        city = "H508";
        finished = true;
    }
    else if (city == "ROMANOCANAVESE")
    {
        city = "H511";
        finished = true;
    }
    else if (city == "ROMANOD'EZZELINO")
    {
        city = "H512";
        finished = true;
    }
    else if (city == "ROMANODILOMBARDIA")
    {
        city = "H509";
        finished = true;
    }
    else if (city == "ROMANSD'ISONZO")
    {
        city = "H514";
        finished = true;
    }
    else if (city == "ROMBIOLO")
    {
        city = "H516";
        finished = true;
    }
    else if (city == "ROMENO")
    {
        city = "H517";
        finished = true;
    }
    else if (city == "ROMENTINO")
    {
        city = "H518";
        finished = true;
    }
    else if (city == "ROMETTA")
    {
        city = "H519";
        finished = true;
    }
    else if (city == "RONAGO")
    {
        city = "H521";
        finished = true;
    }
    else if (city == "RONCA'")
    {
        city = "H522";
        finished = true;
    }
    else if (city == "RONCADE")
    {
        city = "H523";
        finished = true;
    }
    else if (city == "RONCADELLE")
    {
        city = "H525";
        finished = true;
    }
    else if (city == "RONCARO")
    {
        city = "H527";
        finished = true;
    }
    else if (city == "RONCEGNOTERME")
    {
        city = "H528";
        finished = true;
    }
    else if (city == "RONCELLO")
    {
        city = "H529";
        finished = true;
    }
    else if (city == "RONCHIDEILEGIONARI")
    {
        city = "H531";
        finished = true;
    }
    else if (city == "RONCHIVALSUGANA")
    {
        city = "H532";
        finished = true;
    }
    else if (city == "RONCHIS")
    {
        city = "H533";
        finished = true;
    }
    else if (city == "RONCIGLIONE")
    {
        city = "H534";
        finished = true;
    }
    else if (city == "RONCOALL'ADIGE")
    {
        city = "H540";
        finished = true;
    }
    else if (city == "RONCOBIELLESE")
    {
        city = "H538";
        finished = true;
    }
    else if (city == "RONCOBRIANTINO")
    {
        city = "H537";
        finished = true;
    }
    else if (city == "RONCOCANAVESE")
    {
        city = "H539";
        finished = true;
    }
    else if (city == "RONCOSCRIVIA")
    {
        city = "H536";
        finished = true;
    }
    else if (city == "RONCOBELLO")
    {
        city = "H535";
        finished = true;
    }
    else if (city == "RONCOFERRARO")
    {
        city = "H541";
        finished = true;
    }
    else if (city == "RONCOFREDDO")
    {
        city = "H542";
        finished = true;
    }
    else if (city == "RONCOLA")
    {
        city = "H544";
        finished = true;
    }
    else if (city == "RONCONE")
    {
        city = "H545";
        finished = true;
    }
    else if (city == "RONDANINA")
    {
        city = "H546";
        finished = true;
    }
    else if (city == "RONDISSONE")
    {
        city = "H547";
        finished = true;
    }
    else if (city == "RONSECCO")
    {
        city = "H549";
        finished = true;
    }
    else if (city == "RONZO-CHIENIS")
    {
        city = "M303";
        finished = true;
    }
    else if (city == "RONZONE")
    {
        city = "H552";
        finished = true;
    }
    else if (city == "ROPPOLO")
    {
        city = "H553";
        finished = true;
    }
    else if (city == "RORA'")
    {
        city = "H554";
        finished = true;
    }
    else if (city == "ROSA'")
    {
        city = "H556";
        finished = true;
    }
    else if (city == "ROSARNO")
    {
        city = "H558";
        finished = true;
    }
    else if (city == "ROSASCO")
    {
        city = "H559";
        finished = true;
    }
    else if (city == "ROSATE")
    {
        city = "H560";
        finished = true;
    }
    else if (city == "ROSAZZA")
    {
        city = "H561";
        finished = true;
    }
    else if (city == "ROSCIANO")
    {
        city = "H562";
        finished = true;
    }
    else if (city == "ROSCIGNO")
    {
        city = "H564";
        finished = true;
    }
    else if (city == "ROSE")
    {
        city = "H565";
        finished = true;
    }
    else if (city == "ROSELLO")
    {
        city = "H566";
        finished = true;
    }
    else if (city == "ROSETOCAPOSPULICO")
    {
        city = "H572";
        finished = true;
    }
    else if (city == "ROSETODEGLIABRUZZI")
    {
        city = "F585";
        finished = true;
    }
    else if (city == "ROSETOVALFORTORE")
    {
        city = "H568";
        finished = true;
    }
    else if (city == "ROSIGNANOMARITTIMO")
    {
        city = "H570";
        finished = true;
    }
    else if (city == "ROSIGNANOMONFERRATO")
    {
        city = "H569";
        finished = true;
    }
    else if (city == "ROSOLINA")
    {
        city = "H573";
        finished = true;
    }
    else if (city == "ROSOLINI")
    {
        city = "H574";
        finished = true;
    }
    else if (city == "ROSORA")
    {
        city = "H575";
        finished = true;
    }
    else if (city == "ROSSA")
    {
        city = "H577";
        finished = true;
    }
    else if (city == "ROSSANA")
    {
        city = "H578";
        finished = true;
    }
    else if (city == "ROSSANO")
    {
        city = "H579";
        finished = true;
    }
    else if (city == "ROSSANOVENETO")
    {
        city = "H580";
        finished = true;
    }
    else if (city == "ROSSIGLIONE")
    {
        city = "H581";
        finished = true;
    }
    else if (city == "ROSTA")
    {
        city = "H583";
        finished = true;
    }
    else if (city == "ROTAD'IMAGNA")
    {
        city = "H584";
        finished = true;
    }
    else if (city == "ROTAGRECA")
    {
        city = "H585";
        finished = true;
    }
    else if (city == "ROTELLA")
    {
        city = "H588";
        finished = true;
    }
    else if (city == "ROTELLO")
    {
        city = "H589";
        finished = true;
    }
    else if (city == "ROTONDA")
    {
        city = "H590";
        finished = true;
    }
    else if (city == "ROTONDELLA")
    {
        city = "H591";
        finished = true;
    }
    else if (city == "ROTONDI")
    {
        city = "H592";
        finished = true;
    }
    else if (city == "ROTTOFRENO")
    {
        city = "H593";
        finished = true;
    }
    else if (city == "ROTZO")
    {
        city = "H594";
        finished = true;
    }
    else if (city == "ROURE")
    {
        city = "H555";
        finished = true;
    }
    else if (city == "ROVAGNATE")
    {
        city = "H596";
        finished = true;
    }
    else if (city == "ROVASENDA")
    {
        city = "H364";
        finished = true;
    }
    else if (city == "ROVATO")
    {
        city = "H598";
        finished = true;
    }
    else if (city == "ROVEGNO")
    {
        city = "H599";
        finished = true;
    }
    else if (city == "ROVELLASCA")
    {
        city = "H601";
        finished = true;
    }
    else if (city == "ROVELLOPORRO")
    {
        city = "H602";
        finished = true;
    }
    else if (city == "ROVERBELLA")
    {
        city = "H604";
        finished = true;
    }
    else if (city == "ROVERCHIARA")
    {
        city = "H606";
        finished = true;
    }
    else if (city == "ROVERE'DELLALUNA")
    {
        city = "H607";
        finished = true;
    }
    else if (city == "ROVERE'VERONESE")
    {
        city = "H608";
        finished = true;
    }
    else if (city == "ROVEREDODIGUA'")
    {
        city = "H610";
        finished = true;
    }
    else if (city == "ROVEREDOINPIANO")
    {
        city = "H609";
        finished = true;
    }
    else if (city == "ROVERETO")
    {
        city = "H612";
        finished = true;
    }
    else if (city == "ROVESCALA")
    {
        city = "H614";
        finished = true;
    }
    else if (city == "ROVETTA")
    {
        city = "H615";
        finished = true;
    }
    else if (city == "ROVIANO")
    {
        city = "H618";
        finished = true;
    }
    else if (city == "ROVIGO")
    {
        city = "H620";
        finished = true;
    }
    else if (city == "ROVITO")
    {
        city = "H621";
        finished = true;
    }
    else if (city == "ROVOLON")
    {
        city = "H622";
        finished = true;
    }
    else if (city == "ROZZANO")
    {
        city = "H623";
        finished = true;
    }
    else if (city == "RUBANO")
    {
        city = "H625";
        finished = true;
    }
    else if (city == "RUBIANA")
    {
        city = "H627";
        finished = true;
    }
    else if (city == "RUBIERA")
    {
        city = "H628";
        finished = true;
    }
    else if (city == "RUDA")
    {
        city = "H629";
        finished = true;
    }
    else if (city == "RUDIANO")
    {
        city = "H630";
        finished = true;
    }
    else if (city == "RUEGLIO")
    {
        city = "H631";
        finished = true;
    }
    else if (city == "RUFFANO")
    {
        city = "H632";
        finished = true;
    }
    else if (city == "RUFFIA")
    {
        city = "H633";
        finished = true;
    }
    else if (city == "RUFFRE'-MENDOLA")
    {
        city = "H634";
        finished = true;
    }
    else if (city == "RUFINA")
    {
        city = "H635";
        finished = true;
    }
    else if (city == "RUINAS")
    {
        city = "F271";
        finished = true;
    }
    else if (city == "RUINO")
    {
        city = "H637";
        finished = true;
    }
    else if (city == "RUMO")
    {
        city = "H639";
        finished = true;
    }
    else if (city == "RUOTI")
    {
        city = "H641";
        finished = true;
    }
    else if (city == "RUSSI")
    {
        city = "H642";
        finished = true;
    }
    else if (city == "RUTIGLIANO")
    {
        city = "H643";
        finished = true;
    }
    else if (city == "RUTINO")
    {
        city = "H644";
        finished = true;
    }
    else if (city == "RUVIANO")
    {
        city = "H165";
        finished = true;
    }
    else if (city == "RUVODELMONTE")
    {
        city = "H646";
        finished = true;
    }
    else if (city == "RUVODIPUGLIA")
    {
        city = "H645";
        finished = true;
    }
    else if (city == "SABAUDIA")
    {
        city = "H647";
        finished = true;
    }
    else if (city == "SABBIA")
    {
        city = "H648";
        finished = true;
    }
    else if (city == "SABBIOCHIESE")
    {
        city = "H650";
        finished = true;
    }
    else if (city == "SABBIONETA")
    {
        city = "H652";
        finished = true;
    }
    else if (city == "SACCO")
    {
        city = "H654";
        finished = true;
    }
    else if (city == "SACCOLONGO")
    {
        city = "H655";
        finished = true;
    }
    else if (city == "SACILE")
    {
        city = "H657";
        finished = true;
    }
    else if (city == "SACROFANO")
    {
        city = "H658";
        finished = true;
    }
    else if (city == "SADALI")
    {
        city = "H659";
        finished = true;
    }
    else if (city == "SAGAMA")
    {
        city = "H661";
        finished = true;
    }
    else if (city == "SAGLIANOMICCA")
    {
        city = "H662";
        finished = true;
    }
    else if (city == "SAGRADO")
    {
        city = "H665";
        finished = true;
    }
    else if (city == "SAGRONMIS")
    {
        city = "H666";
        finished = true;
    }
    else if (city == "SAINT-CHRISTOPHE")
    {
        city = "H669";
        finished = true;
    }
    else if (city == "SAINT-DENIS")
    {
        city = "H670";
        finished = true;
    }
    else if (city == "SAINT-MARCEL")
    {
        city = "H671";
        finished = true;
    }
    else if (city == "SAINT-NICOLAS")
    {
        city = "H672";
        finished = true;
    }
    else if (city == "SAINT-OYEN")
    {
        city = "H673";
        finished = true;
    }
    else if (city == "SAINT-PIERRE")
    {
        city = "H674";
        finished = true;
    }
    else if (city == "SAINT-RHEMY-EN-BOSSES")
    {
        city = "H675";
        finished = true;
    }
    else if (city == "SAINT-VINCENT")
    {
        city = "H676";
        finished = true;
    }
    else if (city == "SALABAGANZA")
    {
        city = "H682";
        finished = true;
    }
    else if (city == "SALABIELLESE")
    {
        city = "H681";
        finished = true;
    }
    else if (city == "SALABOLOGNESE")
    {
        city = "H678";
        finished = true;
    }
    else if (city == "SALACOMACINA")
    {
        city = "H679";
        finished = true;
    }
    else if (city == "SALACONSILINA")
    {
        city = "H683";
        finished = true;
    }
    else if (city == "SALAMONFERRATO")
    {
        city = "H677";
        finished = true;
    }
    else if (city == "SALANDRA")
    {
        city = "H687";
        finished = true;
    }
    else if (city == "SALAPARUTA")
    {
        city = "H688";
        finished = true;
    }
    else if (city == "SALARA")
    {
        city = "H689";
        finished = true;
    }
    else if (city == "SALASCO")
    {
        city = "H690";
        finished = true;
    }
    else if (city == "SALASSA")
    {
        city = "H691";
        finished = true;
    }
    else if (city == "SALBERTRAND")
    {
        city = "H684";
        finished = true;
    }
    else if (city == "SALCEDO")
    {
        city = "F810";
        finished = true;
    }
    else if (city == "SALCITO")
    {
        city = "H693";
        finished = true;
    }
    else if (city == "SALE")
    {
        city = "H694";
        finished = true;
    }
    else if (city == "SALEDELLELANGHE")
    {
        city = "H695";
        finished = true;
    }
    else if (city == "SALEMARASINO")
    {
        city = "H699";
        finished = true;
    }
    else if (city == "SALESANGIOVANNI")
    {
        city = "H704";
        finished = true;
    }
    else if (city == "SALEMI")
    {
        city = "H700";
        finished = true;
    }
    else if (city == "SALENTO")
    {
        city = "H686";
        finished = true;
    }
    else if (city == "SALERANOCANAVESE")
    {
        city = "H702";
        finished = true;
    }
    else if (city == "SALERANOSULLAMBRO")
    {
        city = "H701";
        finished = true;
    }
    else if (city == "SALERNO")
    {
        city = "H703";
        finished = true;
    }
    else if (city == "SALETTO")
    {
        city = "H705";
        finished = true;
    }
    else if (city == "SALGAREDA")
    {
        city = "H706";
        finished = true;
    }
    else if (city == "SALIVERCELLESE")
    {
        city = "H707";
        finished = true;
    }
    else if (city == "SALICESALENTINO")
    {
        city = "H708";
        finished = true;
    }
    else if (city == "SALICETO")
    {
        city = "H710";
        finished = true;
    }
    else if (city == "SALISANO")
    {
        city = "H713";
        finished = true;
    }
    else if (city == "SALIZZOLE")
    {
        city = "H714";
        finished = true;
    }
    else if (city == "SALLE")
    {
        city = "H715";
        finished = true;
    }
    else if (city == "SALMOUR")
    {
        city = "H716";
        finished = true;
    }
    else if (city == "SALO'")
    {
        city = "H717";
        finished = true;
    }
    else if (city == "SALORNOSULLASTRADADELVINO.SALURNANDER")
    {
        city = "H719";
        finished = true;
    }
    else if (city == "SALSOMAGGIORETERME")
    {
        city = "H720";
        finished = true;
    }
    else if (city == "SALTARA")
    {
        city = "H721";
        finished = true;
    }
    else if (city == "SALTRIO")
    {
        city = "H723";
        finished = true;
    }
    else if (city == "SALUDECIO")
    {
        city = "H724";
        finished = true;
    }
    else if (city == "SALUGGIA")
    {
        city = "H725";
        finished = true;
    }
    else if (city == "SALUSSOLA")
    {
        city = "H726";
        finished = true;
    }
    else if (city == "SALUZZO")
    {
        city = "H727";
        finished = true;
    }
    else if (city == "SALVE")
    {
        city = "H729";
        finished = true;
    }
    else if (city == "SALVIROLA")
    {
        city = "H731";
        finished = true;
    }
    else if (city == "SALVITELLE")
    {
        city = "H732";
        finished = true;
    }
    else if (city == "SALZADIPINEROLO")
    {
        city = "H734";
        finished = true;
    }
    else if (city == "SALZAIRPINA")
    {
        city = "H733";
        finished = true;
    }
    else if (city == "SALZANO")
    {
        city = "H735";
        finished = true;
    }
    else if (city == "SAMARATE")
    {
        city = "H736";
        finished = true;
    }
    else if (city == "SAMASSI")
    {
        city = "H738";
        finished = true;
    }
    else if (city == "SAMATZAI")
    {
        city = "H739";
        finished = true;
    }
    else if (city == "SAMBUCADISICILIA")
    {
        city = "H743";
        finished = true;
    }
    else if (city == "SAMBUCAPISTOIESE")
    {
        city = "H744";
        finished = true;
    }
    else if (city == "SAMBUCI")
    {
        city = "H745";
        finished = true;
    }
    else if (city == "SAMBUCO")
    {
        city = "H746";
        finished = true;
    }
    else if (city == "SAMMICHELEDIBARI")
    {
        city = "H749";
        finished = true;
    }
    else if (city == "SAMO")
    {
        city = "H013";
        finished = true;
    }
    else if (city == "SAMOLACO")
    {
        city = "H752";
        finished = true;
    }
    else if (city == "SAMONE")
    {
        city = "H753";
        finished = true;
    }
    else if (city == "SAMONE")
    {
        city = "H754";
        finished = true;
    }
    else if (city == "SAMPEYRE")
    {
        city = "H755";
        finished = true;
    }
    else if (city == "SAMUGHEO")
    {
        city = "H756";
        finished = true;
    }
    else if (city == "SANBARTOLOMEOALMARE")
    {
        city = "H763";
        finished = true;
    }
    else if (city == "SANBARTOLOMEOINGALDO")
    {
        city = "H764";
        finished = true;
    }
    else if (city == "SANBARTOLOMEOVALCAVARGNA")
    {
        city = "H760";
        finished = true;
    }
    else if (city == "SANBASILE")
    {
        city = "H765";
        finished = true;
    }
    else if (city == "SANBASILIO")
    {
        city = "H766";
        finished = true;
    }
    else if (city == "SANBASSANO")
    {
        city = "H767";
        finished = true;
    }
    else if (city == "SANBELLINO")
    {
        city = "H768";
        finished = true;
    }
    else if (city == "SANBENEDETTOBELBO")
    {
        city = "H770";
        finished = true;
    }
    else if (city == "SANBENEDETTODEIMARSI")
    {
        city = "H772";
        finished = true;
    }
    else if (city == "SANBENEDETTODELTRONTO")
    {
        city = "H769";
        finished = true;
    }
    else if (city == "SANBENEDETTOINPERILLIS")
    {
        city = "H773";
        finished = true;
    }
    else if (city == "SANBENEDETTOPO")
    {
        city = "H771";
        finished = true;
    }
    else if (city == "SANBENEDETTOULLANO")
    {
        city = "H774";
        finished = true;
    }
    else if (city == "SANBENEDETTOVALDISAMBRO")
    {
        city = "G566";
        finished = true;
    }
    else if (city == "SANBENIGNOCANAVESE")
    {
        city = "H775";
        finished = true;
    }
    else if (city == "SANBERNARDINOVERBANO")
    {
        city = "H777";
        finished = true;
    }
    else if (city == "SANBIAGIODELLACIMA")
    {
        city = "H780";
        finished = true;
    }
    else if (city == "SANBIAGIODICALLALTA")
    {
        city = "H781";
        finished = true;
    }
    else if (city == "SANBIAGIOPLATANI")
    {
        city = "H778";
        finished = true;
    }
    else if (city == "SANBIAGIOSARACINISCO")
    {
        city = "H779";
        finished = true;
    }
    else if (city == "SANBIASE")
    {
        city = "H782";
        finished = true;
    }
    else if (city == "SANBONelse ifACIO")
    {
        city = "H783";
        finished = true;
    }
    else if (city == "SANBUONO")
    {
        city = "H784";
        finished = true;
    }
    else if (city == "SANCALOGERO")
    {
        city = "H785";
        finished = true;
    }
    else if (city == "SANCANDIDO.INNICHEN.")
    {
        city = "H786";
        finished = true;
    }
    else if (city == "SANCANZIAND'ISONZO")
    {
        city = "H787";
        finished = true;
    }
    else if (city == "SANCARLOCANAVESE")
    {
        city = "H789";
        finished = true;
    }
    else if (city == "SANCASCIANODEIBAGNI")
    {
        city = "H790";
        finished = true;
    }
    else if (city == "SANCASCIANOINVALDIPESA")
    {
        city = "H791";
        finished = true;
    }
    else if (city == "SANCASSIANO")
    {
        city = "M264";
        finished = true;
    }
    else if (city == "SANCATALDO")
    {
        city = "H792";
        finished = true;
    }
    else if (city == "SANCESAREO")
    {
        city = "M295";
        finished = true;
    }
    else if (city == "SANCESARIODILECCE")
    {
        city = "H793";
        finished = true;
    }
    else if (city == "SANCESARIOSULPANARO")
    {
        city = "H794";
        finished = true;
    }
    else if (city == "SANCHIRICONUOVO")
    {
        city = "H795";
        finished = true;
    }
    else if (city == "SANCHIRICORAPARO")
    {
        city = "H796";
        finished = true;
    }
    else if (city == "SANCIPIRELLO")
    {
        city = "H797";
        finished = true;
    }
    else if (city == "SANCIPRIANOD'AVERSA")
    {
        city = "H798";
        finished = true;
    }
    else if (city == "SANCIPRIANOPICENTINO")
    {
        city = "H800";
        finished = true;
    }
    else if (city == "SANCIPRIANOPO")
    {
        city = "H799";
        finished = true;
    }
    else if (city == "SANCLEMENTE")
    {
        city = "H801";
        finished = true;
    }
    else if (city == "SANCOLOMBANOALLAMBRO")
    {
        city = "H803";
        finished = true;
    }
    else if (city == "SANCOLOMBANOBELMONTE")
    {
        city = "H804";
        finished = true;
    }
    else if (city == "SANCOLOMBANOCERTENOLI")
    {
        city = "H802";
        finished = true;
    }
    else if (city == "SANCONO")
    {
        city = "H805";
        finished = true;
    }
    else if (city == "SANCOSMOALBANESE")
    {
        city = "H806";
        finished = true;
    }
    else if (city == "SANCOSTANTINOALBANESE")
    {
        city = "H808";
        finished = true;
    }
    else if (city == "SANCOSTANTINOCALABRO")
    {
        city = "H807";
        finished = true;
    }
    else if (city == "SANCOSTANZO")
    {
        city = "H809";
        finished = true;
    }
    else if (city == "SANCRISTOFORO")
    {
        city = "H810";
        finished = true;
    }
    else if (city == "SANDAMIANOALCOLLE")
    {
        city = "H814";
        finished = true;
    }
    else if (city == "SANDAMIANOD'ASTI")
    {
        city = "H811";
        finished = true;
    }
    else if (city == "SANDAMIANOMACRA")
    {
        city = "H812";
        finished = true;
    }
    else if (city == "SANDANIELEDELFRIULI")
    {
        city = "H816";
        finished = true;
    }
    else if (city == "SANDANIELEPO")
    {
        city = "H815";
        finished = true;
    }
    else if (city == "SANDEMETRIOCORONE")
    {
        city = "H818";
        finished = true;
    }
    else if (city == "SANDEMETRIONE'VESTINI")
    {
        city = "H819";
        finished = true;
    }
    else if (city == "SANDIDERO")
    {
        city = "H820";
        finished = true;
    }
    else if (city == "SANDONA'DIPIAVE")
    {
        city = "H823";
        finished = true;
    }
    else if (city == "SANDONACI")
    {
        city = "H822";
        finished = true;
    }
    else if (city == "SANDONATODILECCE")
    {
        city = "H826";
        finished = true;
    }
    else if (city == "SANDONATODININEA")
    {
        city = "H825";
        finished = true;
    }
    else if (city == "SANDONATOMILANESE")
    {
        city = "H827";
        finished = true;
    }
    else if (city == "SANDONATOVALDICOMINO")
    {
        city = "H824";
        finished = true;
    }
    else if (city == "SANDORLIGODELLAVALLE")
    {
        city = "D324";
        finished = true;
    }
    else if (city == "SANFEDELEINTELVI")
    {
        city = "H830";
        finished = true;
    }
    else if (city == "SANFELE")
    {
        city = "H831";
        finished = true;
    }
    else if (city == "SANFELICEACANCELLO")
    {
        city = "H834";
        finished = true;
    }
    else if (city == "SANFELICECIRCEO")
    {
        city = "H836";
        finished = true;
    }
    else if (city == "SANFELICEDELBENACO")
    {
        city = "H838";
        finished = true;
    }
    else if (city == "SANFELICEDELMOLISE")
    {
        city = "H833";
        finished = true;
    }
    else if (city == "SANFELICESULPANARO")
    {
        city = "H835";
        finished = true;
    }
    else if (city == "SANFERDINANDO")
    {
        city = "M277";
        finished = true;
    }
    else if (city == "SANFERDINANDODIPUGLIA")
    {
        city = "H839";
        finished = true;
    }
    else if (city == "SANFERMODELLABATTAGLIA")
    {
        city = "H840";
        finished = true;
    }
    else if (city == "SANFILI")
    {
        city = "H841";
        finished = true;
    }
    else if (city == "SANFILIPPODELMELA")
    {
        city = "H842";
        finished = true;
    }
    else if (city == "SANFIOR")
    {
        city = "H843";
        finished = true;
    }
    else if (city == "SANFIORANO")
    {
        city = "H844";
        finished = true;
    }
    else if (city == "SANFLORIANODELCOLLIO")
    {
        city = "H845";
        finished = true;
    }
    else if (city == "SANFLORO")
    {
        city = "H846";
        finished = true;
    }
    else if (city == "SANFRANCESCOALCAMPO")
    {
        city = "H847";
        finished = true;
    }
    else if (city == "SANFRATELLO")
    {
        city = "H850";
        finished = true;
    }
    else if (city == "SANGAVINOMONREALE")
    {
        city = "H856";
        finished = true;
    }
    else if (city == "SANGEMINI")
    {
        city = "H857";
        finished = true;
    }
    else if (city == "SANGENESIOATESINO.JENESIEN.")
    {
        city = "H858";
        finished = true;
    }
    else if (city == "SANGENESIOEDUNITI")
    {
        city = "H859";
        finished = true;
    }
    else if (city == "SANGENNAROVESUVIANO")
    {
        city = "H860";
        finished = true;
    }
    else if (city == "SANGERMANOCHISONE")
    {
        city = "H862";
        finished = true;
    }
    else if (city == "SANGERMANODEIBERICI")
    {
        city = "H863";
        finished = true;
    }
    else if (city == "SANGERMANOVERCELLESE")
    {
        city = "H861";
        finished = true;
    }
    else if (city == "SANGERVASIOBRESCIANO")
    {
        city = "H865";
        finished = true;
    }
    else if (city == "SANGIACOMODEGLISCHIAVONI")
    {
        city = "H867";
        finished = true;
    }
    else if (city == "SANGIACOMODELLESEGNATE")
    {
        city = "H870";
        finished = true;
    }
    else if (city == "SANGIACOMOFILIPPO")
    {
        city = "H868";
        finished = true;
    }
    else if (city == "SANGIACOMOVERCELLESE")
    {
        city = "B952";
        finished = true;
    }
    else if (city == "SANGILLIO")
    {
        city = "H873";
        finished = true;
    }
    else if (city == "SANGIMIGNANO")
    {
        city = "H875";
        finished = true;
    }
    else if (city == "SANGINESIO")
    {
        city = "H876";
        finished = true;
    }
    else if (city == "SANGIORGIOACREMANO")
    {
        city = "H892";
        finished = true;
    }
    else if (city == "SANGIORGIOALIRI")
    {
        city = "H880";
        finished = true;
    }
    else if (city == "SANGIORGIOALBANESE")
    {
        city = "H881";
        finished = true;
    }
    else if (city == "SANGIORGIOBIGARELLO")
    {
        city = "H883";
        finished = true;
    }
    else if (city == "SANGIORGIOCANAVESE")
    {
        city = "H890";
        finished = true;
    }
    else if (city == "SANGIORGIODELSANNIO")
    {
        city = "H894";
        finished = true;
    }
    else if (city == "SANGIORGIODELLARICHINVELDA")
    {
        city = "H891";
        finished = true;
    }
    else if (city == "SANGIORGIODELLEPERTICHE")
    {
        city = "H893";
        finished = true;
    }
    else if (city == "SANGIORGIODILOMELLINA")
    {
        city = "H885";
        finished = true;
    }
    else if (city == "SANGIORGIODINOGARO")
    {
        city = "H895";
        finished = true;
    }
    else if (city == "SANGIORGIODIPESARO")
    {
        city = "H886";
        finished = true;
    }
    else if (city == "SANGIORGIODIPIANO")
    {
        city = "H896";
        finished = true;
    }
    else if (city == "SANGIORGIOINBOSCO")
    {
        city = "H897";
        finished = true;
    }
    else if (city == "SANGIORGIOIONICO")
    {
        city = "H882";
        finished = true;
    }
    else if (city == "SANGIORGIOLAMOLARA")
    {
        city = "H898";
        finished = true;
    }
    else if (city == "SANGIORGIOLUCANO")
    {
        city = "H888";
        finished = true;
    }
    else if (city == "SANGIORGIOMONFERRATO")
    {
        city = "H878";
        finished = true;
    }
    else if (city == "SANGIORGIOMORGETO")
    {
        city = "H889";
        finished = true;
    }
    else if (city == "SANGIORGIOPIACENTINO")
    {
        city = "H887";
        finished = true;
    }
    else if (city == "SANGIORGIOSCARAMPI")
    {
        city = "H899";
        finished = true;
    }
    else if (city == "SANGIORGIOSULEGNANO")
    {
        city = "H884";
        finished = true;
    }
    else if (city == "SANGIORIODISUSA")
    {
        city = "H900";
        finished = true;
    }
    else if (city == "SANGIOVANNIAPIRO")
    {
        city = "H907";
        finished = true;
    }
    else if (city == "SANGIOVANNIALNATISONE")
    {
        city = "H906";
        finished = true;
    }
    else if (city == "SANGIOVANNIBIANCO")
    {
        city = "H910";
        finished = true;
    }
    else if (city == "SANGIOVANNID'ASSO")
    {
        city = "H911";
        finished = true;
    }
    else if (city == "SANGIOVANNIDELDOSSO")
    {
        city = "H912";
        finished = true;
    }
    else if (city == "SANGIOVANNIDelse ifASSA-SENJAN")
    {
        city = "M390";
        finished = true;
    }
    else if (city == "SANGIOVANNIDIGERACE")
    {
        city = "H903";
        finished = true;
    }
    else if (city == "SANGIOVANNIGEMINI")
    {
        city = "H914";
        finished = true;
    }
    else if (city == "SANGIOVANNIILARIONE")
    {
        city = "H916";
        finished = true;
    }
    else if (city == "SANGIOVANNIINCROCE")
    {
        city = "H918";
        finished = true;
    }
    else if (city == "SANGIOVANNIINFIORE")
    {
        city = "H919";
        finished = true;
    }
    else if (city == "SANGIOVANNIINGALDO")
    {
        city = "H920";
        finished = true;
    }
    else if (city == "SANGIOVANNIINMARIGNANO")
    {
        city = "H921";
        finished = true;
    }
    else if (city == "SANGIOVANNIINPERSICETO")
    {
        city = "G467";
        finished = true;
    }
    else if (city == "SANGIOVANNIINCARICO")
    {
        city = "H917";
        finished = true;
    }
    else if (city == "SANGIOVANNILAPUNTA")
    {
        city = "H922";
        finished = true;
    }
    else if (city == "SANGIOVANNILIPIONI")
    {
        city = "H923";
        finished = true;
    }
    else if (city == "SANGIOVANNILUPATOTO")
    {
        city = "H924";
        finished = true;
    }
    else if (city == "SANGIOVANNIROTONDO")
    {
        city = "H926";
        finished = true;
    }
    else if (city == "SANGIOVANNISUERGIU")
    {
        city = "G287";
        finished = true;
    }
    else if (city == "SANGIOVANNITEATINO")
    {
        city = "D690";
        finished = true;
    }
    else if (city == "SANGIOVANNIVALDARNO")
    {
        city = "H901";
        finished = true;
    }
    else if (city == "SANGIULIANODELSANNIO")
    {
        city = "H928";
        finished = true;
    }
    else if (city == "SANGIULIANODIPUGLIA")
    {
        city = "H929";
        finished = true;
    }
    else if (city == "SANGIULIANOMILANESE")
    {
        city = "H930";
        finished = true;
    }
    else if (city == "SANGIULIANOTERME")
    {
        city = "A562";
        finished = true;
    }
    else if (city == "SANGIUSEPPEJATO")
    {
        city = "H933";
        finished = true;
    }
    else if (city == "SANGIUSEPPEVESUVIANO")
    {
        city = "H931";
        finished = true;
    }
    else if (city == "SANGIUSTINO")
    {
        city = "H935";
        finished = true;
    }
    else if (city == "SANGIUSTOCANAVESE")
    {
        city = "H936";
        finished = true;
    }
    else if (city == "SANGODENZO")
    {
        city = "H937";
        finished = true;
    }
    else if (city == "SANGREGORIODASASSOLA")
    {
        city = "H942";
        finished = true;
    }
    else if (city == "SANGREGORIODICATANIA")
    {
        city = "H940";
        finished = true;
    }
    else if (city == "SANGREGORIOD'IPPONA")
    {
        city = "H941";
        finished = true;
    }
    else if (city == "SANGREGORIOMAGNO")
    {
        city = "H943";
        finished = true;
    }
    else if (city == "SANGREGORIOMATESE")
    {
        city = "H939";
        finished = true;
    }
    else if (city == "SANGREGORIONELLEALPI")
    {
        city = "H938";
        finished = true;
    }
    else if (city == "SANLAZZARODISAVENA")
    {
        city = "H945";
        finished = true;
    }
    else if (city == "SANLEO")
    {
        city = "H949";
        finished = true;
    }
    else if (city == "SANLEONARDO")
    {
        city = "H951";
        finished = true;
    }
    else if (city == "SANLEONARDOINPASSIRIA.STLEONHARDINPAS.")
    {
        city = "H952";
        finished = true;
    }
    else if (city == "SANLEUCIODELSANNIO")
    {
        city = "H953";
        finished = true;
    }
    else if (city == "SANLORENZELLO")
    {
        city = "H955";
        finished = true;
    }
    else if (city == "SANLORENZO")
    {
        city = "H959";
        finished = true;
    }
    else if (city == "SANLORENZOALMARE")
    {
        city = "H957";
        finished = true;
    }
    else if (city == "SANLORENZOBELLIZZI")
    {
        city = "H961";
        finished = true;
    }
    else if (city == "SANLORENZODELVALLO")
    {
        city = "H962";
        finished = true;
    }
    else if (city == "SANLORENZODISEBATO.STLORENZEN.")
    {
        city = "H956";
        finished = true;
    }
    else if (city == "SANLORENZODORSINO")
    {
        city = "M345";
        finished = true;
    }
    else if (city == "SANLORENZOINBANALE")
    {
        city = "H966";
        finished = true;
    }
    else if (city == "SANLORENZOINCAMPO")
    {
        city = "H958";
        finished = true;
    }
    else if (city == "SANLORENZOISONTINO")
    {
        city = "H964";
        finished = true;
    }
    else if (city == "SANLORENZOMAGGIORE")
    {
        city = "H967";
        finished = true;
    }
    else if (city == "SANLORENZONUOVO")
    {
        city = "H969";
        finished = true;
    }
    else if (city == "SANLUCA")
    {
        city = "H970";
        finished = true;
    }
    else if (city == "SANLUCIDO")
    {
        city = "H971";
        finished = true;
    }
    else if (city == "SANLUPO")
    {
        city = "H973";
        finished = true;
    }
    else if (city == "SANMANGOD'AQUINO")
    {
        city = "H976";
        finished = true;
    }
    else if (city == "SANMANGOPIEMONTE")
    {
        city = "H977";
        finished = true;
    }
    else if (city == "SANMANGOSULCALORE")
    {
        city = "H975";
        finished = true;
    }
    else if (city == "SANMARCELLINO")
    {
        city = "H978";
        finished = true;
    }
    else if (city == "SANMARCELLO")
    {
        city = "H979";
        finished = true;
    }
    else if (city == "SANMARCELLOPISTOIESE")
    {
        city = "H980";
        finished = true;
    }
    else if (city == "SANMARCELLOPITEGLIO")
    {
        city = "M377";
        finished = true;
    }
    else if (city == "SANMARCOARGENTANO")
    {
        city = "H981";
        finished = true;
    }
    else if (city == "SANMARCOD'ALUNZIO")
    {
        city = "H982";
        finished = true;
    }
    else if (city == "SANMARCODEICAVOTI")
    {
        city = "H984";
        finished = true;
    }
    else if (city == "SANMARCOEVANGELISTA")
    {
        city = "F043";
        finished = true;
    }
    else if (city == "SANMARCOINLAMIS")
    {
        city = "H985";
        finished = true;
    }
    else if (city == "SANMARCOLACATOLA")
    {
        city = "H986";
        finished = true;
    }
    else if (city == "SANMARTINOALTAGLIAMENTO")
    {
        city = "H999";
        finished = true;
    }
    else if (city == "SANMARTINOALFIERI")
    {
        city = "H987";
        finished = true;
    }
    else if (city == "SANMARTINOBUONALBERGO")
    {
        city = "I003";
        finished = true;
    }
    else if (city == "SANMARTINOCANAVESE")
    {
        city = "H997";
        finished = true;
    }
    else if (city == "SANMARTINOD'AGRI")
    {
        city = "H994";
        finished = true;
    }
    else if (city == "SANMARTINODALL'ARGINE")
    {
        city = "I005";
        finished = true;
    }
    else if (city == "SANMARTINODELLAGO")
    {
        city = "I007";
        finished = true;
    }
    else if (city == "SANMARTINODelse ifINITA")
    {
        city = "H992";
        finished = true;
    }
    else if (city == "SANMARTINODILUPARI")
    {
        city = "I008";
        finished = true;
    }
    else if (city == "SANMARTINODIVENEZZE")
    {
        city = "H996";
        finished = true;
    }
    else if (city == "SANMARTINOINBADIA.STMARTININTHURN.")
    {
        city = "H988";
        finished = true;
    }
    else if (city == "SANMARTINOINPASSIRIA.STMARTININPASSEI.")
    {
        city = "H989";
        finished = true;
    }
    else if (city == "SANMARTINOINPENSILIS")
    {
        city = "H990";
        finished = true;
    }
    else if (city == "SANMARTINOINRIO")
    {
        city = "I011";
        finished = true;
    }
    else if (city == "SANMARTINOINSTRADA")
    {
        city = "I012";
        finished = true;
    }
    else if (city == "SANMARTINOSANNITA")
    {
        city = "I002";
        finished = true;
    }
    else if (city == "SANMARTINOSICCOMARIO")
    {
        city = "I014";
        finished = true;
    }
    else if (city == "SANMARTINOSULLAMARRUCINA")
    {
        city = "H991";
        finished = true;
    }
    else if (city == "SANMARTINOVALLECAUDINA")
    {
        city = "I016";
        finished = true;
    }
    else if (city == "SANMARZANODISANGIUSEPPE")
    {
        city = "I018";
        finished = true;
    }
    else if (city == "SANMARZANOOLIVETO")
    {
        city = "I017";
        finished = true;
    }
    else if (city == "SANMARZANOSULSARNO")
    {
        city = "I019";
        finished = true;
    }
    else if (city == "SANMASSIMO")
    {
        city = "I023";
        finished = true;
    }
    else if (city == "SANMAURIZIOCANAVESE")
    {
        city = "I024";
        finished = true;
    }
    else if (city == "SANMAURIZIOD'OPAGLIO")
    {
        city = "I025";
        finished = true;
    }
    else if (city == "SANMAUROCASTELVERDE")
    {
        city = "I028";
        finished = true;
    }
    else if (city == "SANMAUROCILENTO")
    {
        city = "I031";
        finished = true;
    }
    else if (city == "SANMAURODISALINE")
    {
        city = "H712";
        finished = true;
    }
    else if (city == "SANMAUROFORTE")
    {
        city = "I029";
        finished = true;
    }
    else if (city == "SANMAUROLABRUCA")
    {
        city = "I032";
        finished = true;
    }
    else if (city == "SANMAUROMARCHESATO")
    {
        city = "I026";
        finished = true;
    }
    else if (city == "SANMAUROPASCOLI")
    {
        city = "I027";
        finished = true;
    }
    else if (city == "SANMAUROTORINESE")
    {
        city = "I030";
        finished = true;
    }
    else if (city == "SANMICHELEALTAGLIAMENTO")
    {
        city = "I040";
        finished = true;
    }
    else if (city == "SANMICHELEALL'ADIGE")
    {
        city = "I042";
        finished = true;
    }
    else if (city == "SANMICHELEDIGANZARIA")
    {
        city = "I035";
        finished = true;
    }
    else if (city == "SANMICHELEDISERINO")
    {
        city = "I034";
        finished = true;
    }
    else if (city == "SANMICHELEMONDOVI'")
    {
        city = "I037";
        finished = true;
    }
    else if (city == "SANMICHELESALENTINO")
    {
        city = "I045";
        finished = true;
    }
    else if (city == "SANMINIATO")
    {
        city = "I046";
        finished = true;
    }
    else if (city == "SANNAZARIO")
    {
        city = "I047";
        finished = true;
    }
    else if (city == "SANNAZZARO")
    {
        city = "I049";
        finished = true;
    }
    else if (city == "SANNAZZAROSESIA")
    {
        city = "I052";
        finished = true;
    }
    else if (city == "SANNAZZAROVALCAVARGNA")
    {
        city = "I051";
        finished = true;
    }
    else if (city == "SANNICANDROGARGANICO")
    {
        city = "I054";
        finished = true;
    }
    else if (city == "SANNICOLAARCELLA")
    {
        city = "I060";
        finished = true;
    }
    else if (city == "SANNICOLABARONIA")
    {
        city = "I061";
        finished = true;
    }
    else if (city == "SANNICOLADACRISSA")
    {
        city = "I058";
        finished = true;
    }
    else if (city == "SANNICOLADELL'ALTO")
    {
        city = "I057";
        finished = true;
    }
    else if (city == "SANNICOLALASTRADA")
    {
        city = "I056";
        finished = true;
    }
    else if (city == "SANNICOLAMANFREDI")
    {
        city = "I062";
        finished = true;
    }
    else if (city == "SANNICOLO'D'ARCIDANO")
    {
        city = "A368";
        finished = true;
    }
    else if (city == "SANNICOLO'DICOMELICO")
    {
        city = "I063";
        finished = true;
    }
    else if (city == "SANNICOLO'GERREI")
    {
        city = "G383";
        finished = true;
    }
    else if (city == "SANPANCRAZIOSALENTINO")
    {
        city = "I066";
        finished = true;
    }
    else if (city == "SANPANCRAZIO.STPANKRAZ.")
    {
        city = "I065";
        finished = true;
    }
    else if (city == "SANPAOLO")
    {
        city = "G407";
        finished = true;
    }
    else if (city == "SANPAOLOALBANESE")
    {
        city = "B906";
        finished = true;
    }
    else if (city == "SANPAOLOBELSITO")
    {
        city = "I073";
        finished = true;
    }
    else if (city == "SANPAOLOCERVO")
    {
        city = "I074";
        finished = true;
    }
    else if (city == "SANPAOLOD'ARGON")
    {
        city = "B310";
        finished = true;
    }
    else if (city == "SANPAOLODICIVITATE")
    {
        city = "I072";
        finished = true;
    }
    else if (city == "SANPAOLODIJESI")
    {
        city = "I071";
        finished = true;
    }
    else if (city == "SANPAOLOSOLBRITO")
    {
        city = "I076";
        finished = true;
    }
    else if (city == "SANPELLEGRINOTERME")
    {
        city = "I079";
        finished = true;
    }
    else if (city == "SANPIERD'ISONZO")
    {
        city = "I082";
        finished = true;
    }
    else if (city == "SANPIERNICETO")
    {
        city = "I084";
        finished = true;
    }
    else if (city == "SANPIEROASIEVE")
    {
        city = "I085";
        finished = true;
    }
    else if (city == "SANPIEROPATTI")
    {
        city = "I086";
        finished = true;
    }
    else if (city == "SANPIETROAMAIDA")
    {
        city = "I093";
        finished = true;
    }
    else if (city == "SANPIETROALNATISONE")
    {
        city = "I092";
        finished = true;
    }
    else if (city == "SANPIETROALTANAGRO")
    {
        city = "I089";
        finished = true;
    }
    else if (city == "SANPIETROAPOSTOLO")
    {
        city = "I095";
        finished = true;
    }
    else if (city == "SANPIETROAVELLANA")
    {
        city = "I096";
        finished = true;
    }
    else if (city == "SANPIETROCLARENZA")
    {
        city = "I098";
        finished = true;
    }
    else if (city == "SANPIETRODICADORE")
    {
        city = "I088";
        finished = true;
    }
    else if (city == "SANPIETRODICARIDA'")
    {
        city = "I102";
        finished = true;
    }
    else if (city == "SANPIETRODelse ifELETTO")
    {
        city = "I103";
        finished = true;
    }
    else if (city == "SANPIETRODIMORUBIO")
    {
        city = "I105";
        finished = true;
    }
    else if (city == "SANPIETROINAMANTEA")
    {
        city = "I108";
        finished = true;
    }
    else if (city == "SANPIETROINCARIANO")
    {
        city = "I109";
        finished = true;
    }
    else if (city == "SANPIETROINCASALE")
    {
        city = "I110";
        finished = true;
    }
    else if (city == "SANPIETROINCERRO")
    {
        city = "G788";
        finished = true;
    }
    else if (city == "SANPIETROINGU")
    {
        city = "I107";
        finished = true;
    }
    else if (city == "SANPIETROINGUARANO")
    {
        city = "I114";
        finished = true;
    }
    else if (city == "SANPIETROINLAMA")
    {
        city = "I115";
        finished = true;
    }
    else if (city == "SANPIETROINFINE")
    {
        city = "I113";
        finished = true;
    }
    else if (city == "SANPIETROMOSEZZO")
    {
        city = "I116";
        finished = true;
    }
    else if (city == "SANPIETROMUSSOLINO")
    {
        city = "I117";
        finished = true;
    }
    else if (city == "SANPIETROVALLEMINA")
    {
        city = "I090";
        finished = true;
    }
    else if (city == "SANPIETROVERNOTICO")
    {
        city = "I119";
        finished = true;
    }
    else if (city == "SANPIETROVIMINARIO")
    {
        city = "I120";
        finished = true;
    }
    else if (city == "SANPIODELLECAMERE")
    {
        city = "I121";
        finished = true;
    }
    else if (city == "SANPOLODEICAVALIERI")
    {
        city = "I125";
        finished = true;
    }
    else if (city == "SANPOLOD'ENZA")
    {
        city = "I123";
        finished = true;
    }
    else if (city == "SANPOLODIPIAVE")
    {
        city = "I124";
        finished = true;
    }
    else if (city == "SANPOLOMATESE")
    {
        city = "I122";
        finished = true;
    }
    else if (city == "SANPONSO")
    {
        city = "I126";
        finished = true;
    }
    else if (city == "SANPOSSIDONIO")
    {
        city = "I128";
        finished = true;
    }
    else if (city == "SANPOTITOSANNITICO")
    {
        city = "I130";
        finished = true;
    }
    else if (city == "SANPOTITOULTRA")
    {
        city = "I129";
        finished = true;
    }
    else if (city == "SANPRISCO")
    {
        city = "I131";
        finished = true;
    }
    else if (city == "SANPROCOPIO")
    {
        city = "I132";
        finished = true;
    }
    else if (city == "SANPROSPERO")
    {
        city = "I133";
        finished = true;
    }
    else if (city == "SANQUIRICOD'ORCIA")
    {
        city = "I135";
        finished = true;
    }
    else if (city == "SANQUIRINO")
    {
        city = "I136";
        finished = true;
    }
    else if (city == "SANRAFFAELECIMENA")
    {
        city = "I137";
        finished = true;
    }
    else if (city == "SANROBERTO")
    {
        city = "I139";
        finished = true;
    }
    else if (city == "SANROCCOALPORTO")
    {
        city = "I140";
        finished = true;
    }
    else if (city == "SANROMANOINGARFAGNANA")
    {
        city = "I142";
        finished = true;
    }
    else if (city == "SANRUFO")
    {
        city = "I143";
        finished = true;
    }
    else if (city == "SANSALVATOREDelse ifITALIA")
    {
        city = "I147";
        finished = true;
    }
    else if (city == "SANSALVATOREMONFERRATO")
    {
        city = "I144";
        finished = true;
    }
    else if (city == "SANSALVATORETELESINO")
    {
        city = "I145";
        finished = true;
    }
    else if (city == "SANSALVO")
    {
        city = "I148";
        finished = true;
    }
    else if (city == "SANSEBASTIANOALVESUVIO")
    {
        city = "I151";
        finished = true;
    }
    else if (city == "SANSEBASTIANOCURONE")
    {
        city = "I150";
        finished = true;
    }
    else if (city == "SANSEBASTIANODAPO")
    {
        city = "I152";
        finished = true;
    }
    else if (city == "SANSECONDODIPINEROLO")
    {
        city = "I154";
        finished = true;
    }
    else if (city == "SANSECONDOPARMENSE")
    {
        city = "I153";
        finished = true;
    }
    else if (city == "SANSEVERINOLUCANO")
    {
        city = "I157";
        finished = true;
    }
    else if (city == "SANSEVERINOMARCHE")
    {
        city = "I156";
        finished = true;
    }
    else if (city == "SANSEVERO")
    {
        city = "I158";
        finished = true;
    }
    else if (city == "SANSIRO")
    {
        city = "I162";
        finished = true;
    }
    else if (city == "SANSOSSIOBARONIA")
    {
        city = "I163";
        finished = true;
    }
    else if (city == "SANSOSTENE")
    {
        city = "I164";
        finished = true;
    }
    else if (city == "SANSOSTI")
    {
        city = "I165";
        finished = true;
    }
    else if (city == "SANSPERATE")
    {
        city = "I166";
        finished = true;
    }
    else if (city == "SANSTINODILIVENZA")
    {
        city = "I373";
        finished = true;
    }
    else if (city == "SANTAMMARO")
    {
        city = "I261";
        finished = true;
    }
    else if (city == "SANTEODORO")
    {
        city = "I329";
        finished = true;
    }
    else if (city == "SANTEODORO")
    {
        city = "I328";
        finished = true;
    }
    else if (city == "SANTOMASOAGORDINO")
    {
        city = "I347";
        finished = true;
    }
    else if (city == "SANVALENTINOINABRUZZOCITERIORE")
    {
        city = "I376";
        finished = true;
    }
    else if (city == "SANVALENTINOTORIO")
    {
        city = "I377";
        finished = true;
    }
    else if (city == "SANVENANZO")
    {
        city = "I381";
        finished = true;
    }
    else if (city == "SANVENDEMIANO")
    {
        city = "I382";
        finished = true;
    }
    else if (city == "SANVEROMILIS")
    {
        city = "I384";
        finished = true;
    }
    else if (city == "SANVINCENZO")
    {
        city = "I390";
        finished = true;
    }
    else if (city == "SANVINCENZOLACOSTA")
    {
        city = "I388";
        finished = true;
    }
    else if (city == "SANVINCENZOVALLEROVETO")
    {
        city = "I389";
        finished = true;
    }
    else if (city == "SANVITALIANO")
    {
        city = "I391";
        finished = true;
    }
    else if (city == "SANVITO")
    {
        city = "I402";
        finished = true;
    }
    else if (city == "SANVITOALTAGLIAMENTO")
    {
        city = "I403";
        finished = true;
    }
    else if (city == "SANVITOALTORRE")
    {
        city = "I404";
        finished = true;
    }
    else if (city == "SANVITOCHIETINO")
    {
        city = "I394";
        finished = true;
    }
    else if (city == "SANVITODEINORMANNI")
    {
        city = "I396";
        finished = true;
    }
    else if (city == "SANVITODICADORE")
    {
        city = "I392";
        finished = true;
    }
    else if (city == "SANVITODelse ifAGAGNA")
    {
        city = "I405";
        finished = true;
    }
    else if (city == "SANVITODILEGUZZANO")
    {
        city = "I401";
        finished = true;
    }
    else if (city == "SANVITOLOCAPO")
    {
        city = "I407";
        finished = true;
    }
    else if (city == "SANVITOROMANO")
    {
        city = "I400";
        finished = true;
    }
    else if (city == "SANVITOSULLOIONIO")
    {
        city = "I393";
        finished = true;
    }
    else if (city == "SANVITTOREDELLAZIO")
    {
        city = "I408";
        finished = true;
    }
    else if (city == "SANVITTOREOLONA")
    {
        city = "I409";
        finished = true;
    }
    else if (city == "SANZENODIMONTAGNA")
    {
        city = "I414";
        finished = true;
    }
    else if (city == "SANZENONAVIGLIO")
    {
        city = "I412";
        finished = true;
    }
    else if (city == "SANZENONEALLAMBRO")
    {
        city = "I415";
        finished = true;
    }
    else if (city == "SANZENONEALPO")
    {
        city = "I416";
        finished = true;
    }
    else if (city == "SANZENONEDEGLIEZZELINI")
    {
        city = "I417";
        finished = true;
    }
    else if (city == "SANARICA")
    {
        city = "H757";
        finished = true;
    }
    else if (city == "SANDIGLIANO")
    {
        city = "H821";
        finished = true;
    }
    else if (city == "SANDRIGO")
    {
        city = "H829";
        finished = true;
    }
    else if (city == "SANFRE'")
    {
        city = "H851";
        finished = true;
    }
    else if (city == "SANFRONT")
    {
        city = "H852";
        finished = true;
    }
    else if (city == "SANGANO")
    {
        city = "H855";
        finished = true;
    }
    else if (city == "SANGIANO")
    {
        city = "H872";
        finished = true;
    }
    else if (city == "SANGINETO")
    {
        city = "H877";
        finished = true;
    }
    else if (city == "SANGUINETTO")
    {
        city = "H944";
        finished = true;
    }
    else if (city == "SANLURI")
    {
        city = "H974";
        finished = true;
    }
    else if (city == "SANNAZZARODE'BURGONDI")
    {
        city = "I048";
        finished = true;
    }
    else if (city == "SANNICANDRODIBARI")
    {
        city = "I053";
        finished = true;
    }
    else if (city == "SANNICOLA")
    {
        city = "I059";
        finished = true;
    }
    else if (city == "SANREMO")
    {
        city = "I138";
        finished = true;
    }
    else if (city == "SANSEPOLCRO")
    {
        city = "I155";
        finished = true;
    }
    else if (city == "SANTABRIGIDA")
    {
        city = "I168";
        finished = true;
    }
    else if (city == "SANTACATERINAALBANESE")
    {
        city = "I171";
        finished = true;
    }
    else if (city == "SANTACATERINADELLOIONIO")
    {
        city = "I170";
        finished = true;
    }
    else if (city == "SANTACATERINAVILLARMOSA")
    {
        city = "I169";
        finished = true;
    }
    else if (city == "SANTACESAREATERME")
    {
        city = "I172";
        finished = true;
    }
    else if (city == "SANTACRISTINAD'ASPROMONTE")
    {
        city = "I176";
        finished = true;
    }
    else if (city == "SANTACRISTINAEBISSONE")
    {
        city = "I175";
        finished = true;
    }
    else if (city == "SANTACRISTINAGELA")
    {
        city = "I174";
        finished = true;
    }
    else if (city == "SANTACRISTINAVALGARDENA.STCHRISTINAING.")
    {
        city = "I173";
        finished = true;
    }
    else if (city == "SANTACROCECAMERINA")
    {
        city = "I178";
        finished = true;
    }
    else if (city == "SANTACROCEDELSANNIO")
    {
        city = "I179";
        finished = true;
    }
    else if (city == "SANTACROCEDIMAGLIANO")
    {
        city = "I181";
        finished = true;
    }
    else if (city == "SANTACROCESULL'ARNO")
    {
        city = "I177";
        finished = true;
    }
    else if (city == "SANTADOMENICATALAO")
    {
        city = "I183";
        finished = true;
    }
    else if (city == "SANTADOMENICAVITTORIA")
    {
        city = "I184";
        finished = true;
    }
    else if (city == "SANTAELISABETTA")
    {
        city = "I185";
        finished = true;
    }
    else if (city == "SANTAFIORA")
    {
        city = "I187";
        finished = true;
    }
    else if (city == "SANTAFLAVIA")
    {
        city = "I188";
        finished = true;
    }
    else if (city == "SANTAGIULETTA")
    {
        city = "I203";
        finished = true;
    }
    else if (city == "SANTAGIUSTA")
    {
        city = "I205";
        finished = true;
    }
    else if (city == "SANTAGIUSTINA")
    {
        city = "I206";
        finished = true;
    }
    else if (city == "SANTAGIUSTINAINCOLLE")
    {
        city = "I207";
        finished = true;
    }
    else if (city == "SANTALUCE")
    {
        city = "I217";
        finished = true;
    }
    else if (city == "SANTALUCIADELMELA")
    {
        city = "I220";
        finished = true;
    }
    else if (city == "SANTALUCIADIPIAVE")
    {
        city = "I221";
        finished = true;
    }
    else if (city == "SANTALUCIADISERINO")
    {
        city = "I219";
        finished = true;
    }
    else if (city == "SANTAMARGHERITAD'ADIGE")
    {
        city = "I226";
        finished = true;
    }
    else if (city == "SANTAMARGHERITADIBELICE")
    {
        city = "I224";
        finished = true;
    }
    else if (city == "SANTAMARGHERITADISTAFFORA")
    {
        city = "I230";
        finished = true;
    }
    else if (city == "SANTAMARGHERITALIGURE")
    {
        city = "I225";
        finished = true;
    }
    else if (city == "SANTAMARIAAMONTE")
    {
        city = "I232";
        finished = true;
    }
    else if (city == "SANTAMARIAAVICO")
    {
        city = "I233";
        finished = true;
    }
    else if (city == "SANTAMARIACAPUAVETERE")
    {
        city = "I234";
        finished = true;
    }
    else if (city == "SANTAMARIACOGHINAS")
    {
        city = "M284";
        finished = true;
    }
    else if (city == "SANTAMARIADELCEDRO")
    {
        city = "C717";
        finished = true;
    }
    else if (city == "SANTAMARIADELMOLISE")
    {
        city = "I238";
        finished = true;
    }
    else if (city == "SANTAMARIADELLAVERSA")
    {
        city = "I237";
        finished = true;
    }
    else if (city == "SANTAMARIADILICODIA")
    {
        city = "I240";
        finished = true;
    }
    else if (city == "SANTAMARIADISALA")
    {
        city = "I242";
        finished = true;
    }
    else if (city == "SANTAMARIAHOE'")
    {
        city = "I243";
        finished = true;
    }
    else if (city == "SANTAMARIAIMBARO")
    {
        city = "I244";
        finished = true;
    }
    else if (city == "SANTAMARIALACARITA'")
    {
        city = "M273";
        finished = true;
    }
    else if (city == "SANTAMARIALAFOSSA")
    {
        city = "I247";
        finished = true;
    }
    else if (city == "SANTAMARIALALONGA")
    {
        city = "I248";
        finished = true;
    }
    else if (city == "SANTAMARIAMAGGIORE")
    {
        city = "I249";
        finished = true;
    }
    else if (city == "SANTAMARIANUOVA")
    {
        city = "I251";
        finished = true;
    }
    else if (city == "SANTAMARINA")
    {
        city = "I253";
        finished = true;
    }
    else if (city == "SANTAMARINASALINA")
    {
        city = "I254";
        finished = true;
    }
    else if (city == "SANTAMARINELLA")
    {
        city = "I255";
        finished = true;
    }
    else if (city == "SANTANINFA")
    {
        city = "I291";
        finished = true;
    }
    else if (city == "SANTAPAOLINA")
    {
        city = "I301";
        finished = true;
    }
    else if (city == "SANTASEVERINA")
    {
        city = "I308";
        finished = true;
    }
    else if (city == "SANTASOFIA")
    {
        city = "I310";
        finished = true;
    }
    else if (city == "SANTASOFIAD'EPIRO")
    {
        city = "I309";
        finished = true;
    }
    else if (city == "SANTATERESADIRIVA")
    {
        city = "I311";
        finished = true;
    }
    else if (city == "SANTATERESAGALLURA")
    {
        city = "I312";
        finished = true;
    }
    else if (city == "SANTAVENERINA")
    {
        city = "I314";
        finished = true;
    }
    else if (city == "SANTAVITTORIAD'ALBA")
    {
        city = "I316";
        finished = true;
    }
    else if (city == "SANTAVITTORIAINMATENANO")
    {
        city = "I315";
        finished = true;
    }
    else if (city == "SANTADI")
    {
        city = "I182";
        finished = true;
    }
    else if (city == "SANT'AGAPITO")
    {
        city = "I189";
        finished = true;
    }
    else if (city == "SANT'AGATABOLOGNESE")
    {
        city = "I191";
        finished = true;
    }
    else if (city == "SANT'AGATADE'GOTI")
    {
        city = "I197";
        finished = true;
    }
    else if (city == "SANT'AGATADELBIANCO")
    {
        city = "I198";
        finished = true;
    }
    else if (city == "SANT'AGATADIESARO")
    {
        city = "I192";
        finished = true;
    }
    else if (city == "SANT'AGATADIMILITELLO")
    {
        city = "I199";
        finished = true;
    }
    else if (city == "SANT'AGATADIPUGLIA")
    {
        city = "I193";
        finished = true;
    }
    else if (city == "SANT'AGATAFELTRIA")
    {
        city = "I201";
        finished = true;
    }
    else if (city == "SANT'AGATAFOSSILI")
    {
        city = "I190";
        finished = true;
    }
    else if (city == "SANT'AGATALIBATTIATI")
    {
        city = "I202";
        finished = true;
    }
    else if (city == "SANT'AGATASULSANTERNO")
    {
        city = "I196";
        finished = true;
    }
    else if (city == "SANT'AGNELLO")
    {
        city = "I208";
        finished = true;
    }
    else if (city == "SANT'AGOSTINO")
    {
        city = "I209";
        finished = true;
    }
    else if (city == "SANT'ALBANOSTURA")
    {
        city = "I210";
        finished = true;
    }
    else if (city == "SANT'ALESSIOCONVIALONE")
    {
        city = "I213";
        finished = true;
    }
    else if (city == "SANT'ALESSIOINASPROMONTE")
    {
        city = "I214";
        finished = true;
    }
    else if (city == "SANT'ALESSIOSICULO")
    {
        city = "I215";
        finished = true;
    }
    else if (city == "SANT'ALFIO")
    {
        city = "I216";
        finished = true;
    }
    else if (city == "SANT'AMBROGIODITORINO")
    {
        city = "I258";
        finished = true;
    }
    else if (city == "SANT'AMBROGIODIVALPOLICELLA")
    {
        city = "I259";
        finished = true;
    }
    else if (city == "SANT'AMBROGIOSULGARIGLIANO")
    {
        city = "I256";
        finished = true;
    }
    else if (city == "SANT'ANASTASIA")
    {
        city = "I262";
        finished = true;
    }
    else if (city == "SANT'ANATOLIADINARCO")
    {
        city = "I263";
        finished = true;
    }
    else if (city == "SANT'ANDREAAPOSTOLODELLOIONIO")
    {
        city = "I266";
        finished = true;
    }
    else if (city == "SANT'ANDREADELGARIGLIANO")
    {
        city = "I265";
        finished = true;
    }
    else if (city == "SANT'ANDREADICONZA")
    {
        city = "I264";
        finished = true;
    }
    else if (city == "SANT'ANDREAFRIUS")
    {
        city = "I271";
        finished = true;
    }
    else if (city == "SANT'ANGELOACUPOLO")
    {
        city = "I277";
        finished = true;
    }
    else if (city == "SANT'ANGELOAFASANELLA")
    {
        city = "I278";
        finished = true;
    }
    else if (city == "SANT'ANGELOASCALA")
    {
        city = "I280";
        finished = true;
    }
    else if (city == "SANT'ANGELOALL'ESCA")
    {
        city = "I279";
        finished = true;
    }
    else if (city == "SANT'ANGELOD'ALelse ifE")
    {
        city = "I273";
        finished = true;
    }
    else if (city == "SANT'ANGELODEILOMBARDI")
    {
        city = "I281";
        finished = true;
    }
    else if (city == "SANT'ANGELODELPESCO")
    {
        city = "I282";
        finished = true;
    }
    else if (city == "SANT'ANGELODIBROLO")
    {
        city = "I283";
        finished = true;
    }
    else if (city == "SANT'ANGELODIPIOVEDISACCO")
    {
        city = "I275";
        finished = true;
    }
    else if (city == "SANT'ANGELOINLIZZOLA")
    {
        city = "I285";
        finished = true;
    }
    else if (city == "SANT'ANGELOINPONTANO")
    {
        city = "I286";
        finished = true;
    }
    else if (city == "SANT'ANGELOINVADO")
    {
        city = "I287";
        finished = true;
    }
    else if (city == "SANT'ANGELOLEFRATTE")
    {
        city = "I288";
        finished = true;
    }
    else if (city == "SANT'ANGELOLIMOSANO")
    {
        city = "I289";
        finished = true;
    }
    else if (city == "SANT'ANGELOLODIGIANO")
    {
        city = "I274";
        finished = true;
    }
    else if (city == "SANT'ANGELOLOMELLINA")
    {
        city = "I276";
        finished = true;
    }
    else if (city == "SANT'ANGELOMUXARO")
    {
        city = "I290";
        finished = true;
    }
    else if (city == "SANT'ANGELOROMANO")
    {
        city = "I284";
        finished = true;
    }
    else if (city == "SANT'ANNAARRESI")
    {
        city = "M209";
        finished = true;
    }
    else if (city == "SANT'ANNAD'ALFAEDO")
    {
        city = "I292";
        finished = true;
    }
    else if (city == "SANT'ANTIMO")
    {
        city = "I293";
        finished = true;
    }
    else if (city == "SANT'ANTIOCO")
    {
        city = "I294";
        finished = true;
    }
    else if (city == "SANT'ANTONINODISUSA")
    {
        city = "I296";
        finished = true;
    }
    else if (city == "SANT'ANTONIOABATE")
    {
        city = "I300";
        finished = true;
    }
    else if (city == "SANT'ANTONIODIGALLURA")
    {
        city = "M276";
        finished = true;
    }
    else if (city == "SANT'APOLLINARE")
    {
        city = "I302";
        finished = true;
    }
    else if (city == "SANT'ARCANGELO")
    {
        city = "I305";
        finished = true;
    }
    else if (city == "SANTARCANGELODIROMAGNA")
    {
        city = "I304";
        finished = true;
    }
    else if (city == "SANT'ARCANGELOTRIMONTE")
    {
        city = "F557";
        finished = true;
    }
    else if (city == "SANT'ARPINO")
    {
        city = "I306";
        finished = true;
    }
    else if (city == "SANT'ARSENIO")
    {
        city = "I307";
        finished = true;
    }
    else if (city == "SANTEMARIE")
    {
        city = "I326";
        finished = true;
    }
    else if (city == "SANT'EGIDIOALLAVIBRATA")
    {
        city = "I318";
        finished = true;
    }
    else if (city == "SANT'EGIDIODELMONTEALBINO")
    {
        city = "I317";
        finished = true;
    }
    else if (city == "SANT'ELENA")
    {
        city = "I319";
        finished = true;
    }
    else if (city == "SANT'ELENASANNITA")
    {
        city = "B466";
        finished = true;
    }
    else if (city == "SANT'ELIAAPIANISI")
    {
        city = "I320";
        finished = true;
    }
    else if (city == "SANT'ELIAFIUMERAPIDO")
    {
        city = "I321";
        finished = true;
    }
    else if (city == "SANT'ELPIDIOAMARE")
    {
        city = "I324";
        finished = true;
    }
    else if (city == "SANTENA")
    {
        city = "I327";
        finished = true;
    }
    else if (city == "SANTERAMOINCOLLE")
    {
        city = "I330";
        finished = true;
    }
    else if (city == "SANT'EUFEMIAAMAIELLA")
    {
        city = "I332";
        finished = true;
    }
    else if (city == "SANT'EUFEMIAD'ASPROMONTE")
    {
        city = "I333";
        finished = true;
    }
    else if (city == "SANT'EUSANIODELSANGRO")
    {
        city = "I335";
        finished = true;
    }
    else if (city == "SANT'EUSANIOFORCONESE")
    {
        city = "I336";
        finished = true;
    }
    else if (city == "SANTHIA'")
    {
        city = "I337";
        finished = true;
    }
    else if (city == "SANTICOSMAEDAMIANO")
    {
        city = "I339";
        finished = true;
    }
    else if (city == "SANT'ILARIODELLOIONIO")
    {
        city = "I341";
        finished = true;
    }
    else if (city == "SANT'ILARIOD'ENZA")
    {
        city = "I342";
        finished = true;
    }
    else if (city == "SANT'IPPOLITO")
    {
        city = "I344";
        finished = true;
    }
    else if (city == "SANTOSTEFANOALMARE")
    {
        city = "I365";
        finished = true;
    }
    else if (city == "SANTOSTEFANOBELBO")
    {
        city = "I367";
        finished = true;
    }
    else if (city == "SANTOSTEFANOD'AVETO")
    {
        city = "I368";
        finished = true;
    }
    else if (city == "SANTOSTEFANODELSOLE")
    {
        city = "I357";
        finished = true;
    }
    else if (city == "SANTOSTEFANODICADORE")
    {
        city = "C919";
        finished = true;
    }
    else if (city == "SANTOSTEFANODICAMASTRA")
    {
        city = "I370";
        finished = true;
    }
    else if (city == "SANTOSTEFANODIMAGRA")
    {
        city = "I363";
        finished = true;
    }
    else if (city == "SANTOSTEFANODIROGLIANO")
    {
        city = "I359";
        finished = true;
    }
    else if (city == "SANTOSTEFANODISESSANIO")
    {
        city = "I360";
        finished = true;
    }
    else if (city == "SANTOSTEFANOINASPROMONTE")
    {
        city = "I371";
        finished = true;
    }
    else if (city == "SANTOSTEFANOLODIGIANO")
    {
        city = "I362";
        finished = true;
    }
    else if (city == "SANTOSTEFANOQUISQUINA")
    {
        city = "I356";
        finished = true;
    }
    else if (city == "SANTOSTEFANOROERO")
    {
        city = "I372";
        finished = true;
    }
    else if (city == "SANTOSTEFANOTICINO")
    {
        city = "I361";
        finished = true;
    }
    else if (city == "SANT'OLCESE")
    {
        city = "I346";
        finished = true;
    }
    else if (city == "SANTOMENNA")
    {
        city = "I260";
        finished = true;
    }
    else if (city == "SANT'OMERO")
    {
        city = "I348";
        finished = true;
    }
    else if (city == "SANT'OMOBONOTERME")
    {
        city = "M333";
        finished = true;
    }
    else if (city == "SANT'OMOBONOTERME")
    {
        city = "I349";
        finished = true;
    }
    else if (city == "SANT'ONOFRIO")
    {
        city = "I350";
        finished = true;
    }
    else if (city == "SANTOPADRE")
    {
        city = "I351";
        finished = true;
    }
    else if (city == "SANT'ORESTE")
    {
        city = "I352";
        finished = true;
    }
    else if (city == "SANTORSO")
    {
        city = "I353";
        finished = true;
    }
    else if (city == "SANT'ORSOLATERME")
    {
        city = "I354";
        finished = true;
    }
    else if (city == "SANTULUSSURGIU")
    {
        city = "I374";
        finished = true;
    }
    else if (city == "SANT'URBANO")
    {
        city = "I375";
        finished = true;
    }
    else if (city == "SANZA")
    {
        city = "I410";
        finished = true;
    }
    else if (city == "SANZENO")
    {
        city = "I411";
        finished = true;
    }
    else if (city == "SAONARA")
    {
        city = "I418";
        finished = true;
    }
    else if (city == "SAPONARA")
    {
        city = "I420";
        finished = true;
    }
    else if (city == "SAPPADA")
    {
        city = "I421";
        finished = true;
    }
    else if (city == "SAPRI")
    {
        city = "I422";
        finished = true;
    }
    else if (city == "SARACENA")
    {
        city = "I423";
        finished = true;
    }
    else if (city == "SARACINESCO")
    {
        city = "I424";
        finished = true;
    }
    else if (city == "SARCEDO")
    {
        city = "I425";
        finished = true;
    }
    else if (city == "SARCONI")
    {
        city = "I426";
        finished = true;
    }
    else if (city == "SARDARA")
    {
        city = "I428";
        finished = true;
    }
    else if (city == "SARDIGLIANO")
    {
        city = "I429";
        finished = true;
    }
    else if (city == "SAREGO")
    {
        city = "I430";
        finished = true;
    }
    else if (city == "SARENTINO.SARNTAL.")
    {
        city = "I431";
        finished = true;
    }
    else if (city == "SAREZZANO")
    {
        city = "I432";
        finished = true;
    }
    else if (city == "SAREZZO")
    {
        city = "I433";
        finished = true;
    }
    else if (city == "SARMATO")
    {
        city = "I434";
        finished = true;
    }
    else if (city == "SARMEDE")
    {
        city = "I435";
        finished = true;
    }
    else if (city == "SARNANO")
    {
        city = "I436";
        finished = true;
    }
    else if (city == "SARNICO")
    {
        city = "I437";
        finished = true;
    }
    else if (city == "SARNO")
    {
        city = "I438";
        finished = true;
    }
    else if (city == "SARNONICO")
    {
        city = "I439";
        finished = true;
    }
    else if (city == "SARONNO")
    {
        city = "I441";
        finished = true;
    }
    else if (city == "SARRE")
    {
        city = "I442";
        finished = true;
    }
    else if (city == "SARROCH")
    {
        city = "I443";
        finished = true;
    }
    else if (city == "SARSINA")
    {
        city = "I444";
        finished = true;
    }
    else if (city == "SARTEANO")
    {
        city = "I445";
        finished = true;
    }
    else if (city == "SARTIRANALOMELLINA")
    {
        city = "I447";
        finished = true;
    }
    else if (city == "SARULE")
    {
        city = "I448";
        finished = true;
    }
    else if (city == "SARZANA")
    {
        city = "I449";
        finished = true;
    }
    else if (city == "SASSANO")
    {
        city = "I451";
        finished = true;
    }
    else if (city == "SASSARI")
    {
        city = "I452";
        finished = true;
    }
    else if (city == "SASSELLO")
    {
        city = "I453";
        finished = true;
    }
    else if (city == "SASSETTA")
    {
        city = "I454";
        finished = true;
    }
    else if (city == "SASSINORO")
    {
        city = "I455";
        finished = true;
    }
    else if (city == "SASSODICASTALDA")
    {
        city = "I457";
        finished = true;
    }
    else if (city == "SASSOMARCONI")
    {
        city = "G972";
        finished = true;
    }
    else if (city == "SASSOCORVARO")
    {
        city = "I459";
        finished = true;
    }
    else if (city == "SASSOCORVAROAUDITORE")
    {
        city = "M413";
        finished = true;
    }
    else if (city == "SASSOFELTRIO")
    {
        city = "I460";
        finished = true;
    }
    else if (city == "SASSOFERRATO")
    {
        city = "I461";
        finished = true;
    }
    else if (city == "SASSUOLO")
    {
        city = "I462";
        finished = true;
    }
    else if (city == "SATRIANO")
    {
        city = "I463";
        finished = true;
    }
    else if (city == "SATRIANODILUCANIA")
    {
        city = "G614";
        finished = true;
    }
    else if (city == "SAURIS")
    {
        city = "I464";
        finished = true;
    }
    else if (city == "SAUZEDICESANA")
    {
        city = "I465";
        finished = true;
    }
    else if (city == "SAUZED'OULX")
    {
        city = "I466";
        finished = true;
    }
    else if (city == "SAVA")
    {
        city = "I467";
        finished = true;
    }
    else if (city == "SAVELLI")
    {
        city = "I468";
        finished = true;
    }
    else if (city == "SAVIANO")
    {
        city = "I469";
        finished = true;
    }
    else if (city == "SAVIGLIANO")
    {
        city = "I470";
        finished = true;
    }
    else if (city == "SAVIGNANOIRPINO")
    {
        city = "I471";
        finished = true;
    }
    else if (city == "SAVIGNANOSULPANARO")
    {
        city = "I473";
        finished = true;
    }
    else if (city == "SAVIGNANOSULRUBICONE")
    {
        city = "I472";
        finished = true;
    }
    else if (city == "SAVIGNO")
    {
        city = "I474";
        finished = true;
    }
    else if (city == "SAVIGNONE")
    {
        city = "I475";
        finished = true;
    }
    else if (city == "SAVIOREDELL'ADAMELLO")
    {
        city = "I476";
        finished = true;
    }
    else if (city == "SAVOCA")
    {
        city = "I477";
        finished = true;
    }
    else if (city == "SAVOGNA")
    {
        city = "I478";
        finished = true;
    }
    else if (city == "SAVOGNAD'ISONZO")
    {
        city = "I479";
        finished = true;
    }
    else if (city == "SAVOIADILUCANIA")
    {
        city = "H730";
        finished = true;
    }
    else if (city == "SAVONA")
    {
        city = "I480";
        finished = true;
    }
    else if (city == "SCAFA")
    {
        city = "I482";
        finished = true;
    }
    else if (city == "SCAFATI")
    {
        city = "I483";
        finished = true;
    }
    else if (city == "SCAGNELLO")
    {
        city = "I484";
        finished = true;
    }
    else if (city == "SCALA")
    {
        city = "I486";
        finished = true;
    }
    else if (city == "SCALACOELI")
    {
        city = "I485";
        finished = true;
    }
    else if (city == "SCALDASOLE")
    {
        city = "I487";
        finished = true;
    }
    else if (city == "SCALEA")
    {
        city = "I489";
        finished = true;
    }
    else if (city == "SCALENGHE")
    {
        city = "I490";
        finished = true;
    }
    else if (city == "SCALETTAZANCLEA")
    {
        city = "I492";
        finished = true;
    }
    else if (city == "SCAMPITELLA")
    {
        city = "I493";
        finished = true;
    }
    else if (city == "SCANDALE")
    {
        city = "I494";
        finished = true;
    }
    else if (city == "SCANDIANO")
    {
        city = "I496";
        finished = true;
    }
    else if (city == "SCANDICCI")
    {
        city = "B962";
        finished = true;
    }
    else if (city == "SCANDOLARARAVARA")
    {
        city = "I497";
        finished = true;
    }
    else if (city == "SCANDOLARARIPAD'OGLIO")
    {
        city = "I498";
        finished = true;
    }
    else if (city == "SCANDRIGLIA")
    {
        city = "I499";
        finished = true;
    }
    else if (city == "SCANNO")
    {
        city = "I501";
        finished = true;
    }
    else if (city == "SCANODIMONTelse ifERRO")
    {
        city = "I503";
        finished = true;
    }
    else if (city == "SCANSANO")
    {
        city = "I504";
        finished = true;
    }
    else if (city == "SCANZANOJONICO")
    {
        city = "M256";
        finished = true;
    }
    else if (city == "SCANZOROSCIATE")
    {
        city = "I506";
        finished = true;
    }
    else if (city == "SCAPOLI")
    {
        city = "I507";
        finished = true;
    }
    else if (city == "SCARLINO")
    {
        city = "I510";
        finished = true;
    }
    else if (city == "SCARMAGNO")
    {
        city = "I511";
        finished = true;
    }
    else if (city == "SCARNAFIGI")
    {
        city = "I512";
        finished = true;
    }
    else if (city == "SCARPERIA")
    {
        city = "I514";
        finished = true;
    }
    else if (city == "SCARPERIAESANPIERO")
    {
        city = "M326";
        finished = true;
    }
    else if (city == "SCENA.SCHENNA.")
    {
        city = "I519";
        finished = true;
    }
    else if (city == "SCERNI")
    {
        city = "I520";
        finished = true;
    }
    else if (city == "SCHEGGIAEPASCELUPO")
    {
        city = "I522";
        finished = true;
    }
    else if (city == "SCHEGGINO")
    {
        city = "I523";
        finished = true;
    }
    else if (city == "SCHIAVIDIABRUZZO")
    {
        city = "I526";
        finished = true;
    }
    else if (city == "SCHIAVON")
    {
        city = "I527";
        finished = true;
    }
    else if (city == "SCHIGNANO")
    {
        city = "I529";
        finished = true;
    }
    else if (city == "SCHILPARIO")
    {
        city = "I530";
        finished = true;
    }
    else if (city == "SCHIO")
    {
        city = "I531";
        finished = true;
    }
    else if (city == "SCHIVENOGLIA")
    {
        city = "I532";
        finished = true;
    }
    else if (city == "SCIACCA")
    {
        city = "I533";
        finished = true;
    }
    else if (city == "SCIARA")
    {
        city = "I534";
        finished = true;
    }
    else if (city == "SCICLI")
    {
        city = "I535";
        finished = true;
    }
    else if (city == "SCIDO")
    {
        city = "I536";
        finished = true;
    }
    else if (city == "SCIGLIANO")
    {
        city = "D290";
        finished = true;
    }
    else if (city == "SCILLA")
    {
        city = "I537";
        finished = true;
    }
    else if (city == "SCILLATO")
    {
        city = "I538";
        finished = true;
    }
    else if (city == "SCIOLZE")
    {
        city = "I539";
        finished = true;
    }
    else if (city == "SCISCIANO")
    {
        city = "I540";
        finished = true;
    }
    else if (city == "SCLAFANIBAGNI")
    {
        city = "I541";
        finished = true;
    }
    else if (city == "SCONTRONE")
    {
        city = "I543";
        finished = true;
    }
    else if (city == "SCOPA")
    {
        city = "I544";
        finished = true;
    }
    else if (city == "SCOPELLO")
    {
        city = "I545";
        finished = true;
    }
    else if (city == "SCOPPITO")
    {
        city = "I546";
        finished = true;
    }
    else if (city == "SCORDIA")
    {
        city = "I548";
        finished = true;
    }
    else if (city == "SCORRANO")
    {
        city = "I549";
        finished = true;
    }
    else if (city == "SCORZE'")
    {
        city = "I551";
        finished = true;
    }
    else if (city == "SCURCOLAMARSICANA")
    {
        city = "I553";
        finished = true;
    }
    else if (city == "SCURELLE")
    {
        city = "I554";
        finished = true;
    }
    else if (city == "SCURZOLENGO")
    {
        city = "I555";
        finished = true;
    }
    else if (city == "SEBORGA")
    {
        city = "I556";
        finished = true;
    }
    else if (city == "SECINARO")
    {
        city = "I558";
        finished = true;
    }
    else if (city == "SECLI'")
    {
        city = "I559";
        finished = true;
    }
    else if (city == "SECUGNAGO")
    {
        city = "I561";
        finished = true;
    }
    else if (city == "SEDEGLIANO")
    {
        city = "I562";
        finished = true;
    }
    else if (city == "SEDICO")
    {
        city = "I563";
        finished = true;
    }
    else if (city == "SEDILO")
    {
        city = "I564";
        finished = true;
    }
    else if (city == "SEDINI")
    {
        city = "I565";
        finished = true;
    }
    else if (city == "SEDRIANO")
    {
        city = "I566";
        finished = true;
    }
    else if (city == "SEDRINA")
    {
        city = "I567";
        finished = true;
    }
    else if (city == "SEFRO")
    {
        city = "I569";
        finished = true;
    }
    else if (city == "SEGARIU")
    {
        city = "I570";
        finished = true;
    }
    else if (city == "SEGGIANO")
    {
        city = "I571";
        finished = true;
    }
    else if (city == "SEGNI")
    {
        city = "I573";
        finished = true;
    }
    else if (city == "SEGONZANO")
    {
        city = "I576";
        finished = true;
    }
    else if (city == "SEGRATE")
    {
        city = "I577";
        finished = true;
    }
    else if (city == "SEGUSINO")
    {
        city = "I578";
        finished = true;
    }
    else if (city == "SELARGIUS")
    {
        city = "I580";
        finished = true;
    }
    else if (city == "SELCI")
    {
        city = "I581";
        finished = true;
    }
    else if (city == "SELEGAS")
    {
        city = "I582";
        finished = true;
    }
    else if (city == "SELLAGIUDICARIE")
    {
        city = "M360";
        finished = true;
    }
    else if (city == "SELLANO")
    {
        city = "I585";
        finished = true;
    }
    else if (city == "SELLERO")
    {
        city = "I588";
        finished = true;
    }
    else if (city == "SELLIA")
    {
        city = "I589";
        finished = true;
    }
    else if (city == "SELLIAMARINA")
    {
        city = "I590";
        finished = true;
    }
    else if (city == "SELVADEIMOLINI.MUEHLWALD.")
    {
        city = "I593";
        finished = true;
    }
    else if (city == "SELVADICADORE")
    {
        city = "I592";
        finished = true;
    }
    else if (city == "SELVADIPROGNO")
    {
        city = "I594";
        finished = true;
    }
    else if (city == "SELVADIVALGARDENA.WOLKENSTEININGROEDEN.")
    {
        city = "I591";
        finished = true;
    }
    else if (city == "SELVAZZANODENTRO")
    {
        city = "I595";
        finished = true;
    }
    else if (city == "SELVEMARCONE")
    {
        city = "I596";
        finished = true;
    }
    else if (city == "SELVINO")
    {
        city = "I597";
        finished = true;
    }
    else if (city == "SEMESTENE")
    {
        city = "I598";
        finished = true;
    }
    else if (city == "SEMIANA")
    {
        city = "I599";
        finished = true;
    }
    else if (city == "SEMINARA")
    {
        city = "I600";
        finished = true;
    }
    else if (city == "SEMPRONIANO")
    {
        city = "I601";
        finished = true;
    }
    else if (city == "SENAGO")
    {
        city = "I602";
        finished = true;
    }
    else if (city == "SENALES.SCHNALS.")
    {
        city = "I604";
        finished = true;
    }
    else if (city == "SENALE-SANFELICE.UNSERELIEBEFRAUIMWALD.")
    {
        city = "I603";
        finished = true;
    }
    else if (city == "SENEGHE")
    {
        city = "I605";
        finished = true;
    }
    else if (city == "SENERCHIA")
    {
        city = "I606";
        finished = true;
    }
    else if (city == "SENIGA")
    {
        city = "I607";
        finished = true;
    }
    else if (city == "SENIGALLIA")
    {
        city = "I608";
        finished = true;
    }
    else if (city == "SENIS")
    {
        city = "I609";
        finished = true;
    }
    else if (city == "SENISE")
    {
        city = "I610";
        finished = true;
    }
    else if (city == "SENNACOMASCO")
    {
        city = "I611";
        finished = true;
    }
    else if (city == "SENNALODIGIANA")
    {
        city = "I612";
        finished = true;
    }
    else if (city == "SENNARIOLO")
    {
        city = "I613";
        finished = true;
    }
    else if (city == "SENNORI")
    {
        city = "I614";
        finished = true;
    }
    else if (city == "SENORBI'")
    {
        city = "I615";
        finished = true;
    }
    else if (city == "SEPINO")
    {
        city = "I618";
        finished = true;
    }
    else if (city == "SEPPIANA")
    {
        city = "I619";
        finished = true;
    }
    else if (city == "SEQUALS")
    {
        city = "I621";
        finished = true;
    }
    else if (city == "SERAVEZZA")
    {
        city = "I622";
        finished = true;
    }
    else if (city == "SERDIANA")
    {
        city = "I624";
        finished = true;
    }
    else if (city == "SEREGNO")
    {
        city = "I625";
        finished = true;
    }
    else if (city == "SERENDELGRAPPA")
    {
        city = "I626";
        finished = true;
    }
    else if (city == "SERGNANO")
    {
        city = "I627";
        finished = true;
    }
    else if (city == "SERIATE")
    {
        city = "I628";
        finished = true;
    }
    else if (city == "SERINA")
    {
        city = "I629";
        finished = true;
    }
    else if (city == "SERINO")
    {
        city = "I630";
        finished = true;
    }
    else if (city == "SERLE")
    {
        city = "I631";
        finished = true;
    }
    else if (city == "SERMIDEEFELONICA")
    {
        city = "I632";
        finished = true;
    }
    else if (city == "SERMONETA")
    {
        city = "I634";
        finished = true;
    }
    else if (city == "SERNAGLIADELLABATTAGLIA")
    {
        city = "I635";
        finished = true;
    }
    else if (city == "SERNIO")
    {
        city = "I636";
        finished = true;
    }
    else if (city == "SEROLE")
    {
        city = "I637";
        finished = true;
    }
    else if (city == "SERRAD'AIELLO")
    {
        city = "I642";
        finished = true;
    }
    else if (city == "SERRADE'CONTI")
    {
        city = "I643";
        finished = true;
    }
    else if (city == "SERRAPEDACE")
    {
        city = "I650";
        finished = true;
    }
    else if (city == "SERRARICCO'")
    {
        city = "I640";
        finished = true;
    }
    else if (city == "SERRASANBRUNO")
    {
        city = "I639";
        finished = true;
    }
    else if (city == "SERRASANQUIRICO")
    {
        city = "I653";
        finished = true;
    }
    else if (city == "SERRASANT'ABBONDIO")
    {
        city = "I654";
        finished = true;
    }
    else if (city == "SERRACAPRIOLA")
    {
        city = "I641";
        finished = true;
    }
    else if (city == "SERRADelse ifALCO")
    {
        city = "I644";
        finished = true;
    }
    else if (city == "SERRALUNGAD'ALBA")
    {
        city = "I646";
        finished = true;
    }
    else if (city == "SERRALUNGADICREA")
    {
        city = "I645";
        finished = true;
    }
    else if (city == "SERRAMANNA")
    {
        city = "I647";
        finished = true;
    }
    else if (city == "SERRAMAZZONI")
    {
        city = "F357";
        finished = true;
    }
    else if (city == "SERRAMEZZANA")
    {
        city = "I648";
        finished = true;
    }
    else if (city == "SERRAMONACESCA")
    {
        city = "I649";
        finished = true;
    }
    else if (city == "SERRAPETRONA")
    {
        city = "I651";
        finished = true;
    }
    else if (city == "SERRARAFONTANA")
    {
        city = "I652";
        finished = true;
    }
    else if (city == "SERRASTRETTA")
    {
        city = "I655";
        finished = true;
    }
    else if (city == "SERRATA")
    {
        city = "I656";
        finished = true;
    }
    else if (city == "SERRAVALLEAPO")
    {
        city = "I662";
        finished = true;
    }
    else if (city == "SERRAVALLEDICHIENTI")
    {
        city = "I661";
        finished = true;
    }
    else if (city == "SERRAVALLELANGHE")
    {
        city = "I659";
        finished = true;
    }
    else if (city == "SERRAVALLEPISTOIESE")
    {
        city = "I660";
        finished = true;
    }
    else if (city == "SERRAVALLESCRIVIA")
    {
        city = "I657";
        finished = true;
    }
    else if (city == "SERRAVALLESESIA")
    {
        city = "I663";
        finished = true;
    }
    else if (city == "SERRE")
    {
        city = "I666";
        finished = true;
    }
    else if (city == "SERRENTI")
    {
        city = "I667";
        finished = true;
    }
    else if (city == "SERRI")
    {
        city = "I668";
        finished = true;
    }
    else if (city == "SERRONE")
    {
        city = "I669";
        finished = true;
    }
    else if (city == "SERRUNGARINA")
    {
        city = "I670";
        finished = true;
    }
    else if (city == "SERSALE")
    {
        city = "I671";
        finished = true;
    }
    else if (city == "SERVIGLIANO")
    {
        city = "C070";
        finished = true;
    }
    else if (city == "SESSAAURUNCA")
    {
        city = "I676";
        finished = true;
    }
    else if (city == "SESSACILENTO")
    {
        city = "I677";
        finished = true;
    }
    else if (city == "SESSAME")
    {
        city = "I678";
        finished = true;
    }
    else if (city == "SESSANODELMOLISE")
    {
        city = "I679";
        finished = true;
    }
    else if (city == "SESTAGODANO")
    {
        city = "E070";
        finished = true;
    }
    else if (city == "SESTINO")
    {
        city = "I681";
        finished = true;
    }
    else if (city == "SESTOALREGHENA")
    {
        city = "I686";
        finished = true;
    }
    else if (city == "SESTOCALENDE")
    {
        city = "I688";
        finished = true;
    }
    else if (city == "SESTOCAMPANO")
    {
        city = "I682";
        finished = true;
    }
    else if (city == "SESTOEDUNITI")
    {
        city = "I683";
        finished = true;
    }
    else if (city == "SESTOFIORENTINO")
    {
        city = "I684";
        finished = true;
    }
    else if (city == "SESTOSANGIOVANNI")
    {
        city = "I690";
        finished = true;
    }
    else if (city == "SESTO.SEXTEN.")
    {
        city = "I687";
        finished = true;
    }
    else if (city == "SESTOLA")
    {
        city = "I689";
        finished = true;
    }
    else if (city == "SESTRILEVANTE")
    {
        city = "I693";
        finished = true;
    }
    else if (city == "SESTRIERE")
    {
        city = "I692";
        finished = true;
    }
    else if (city == "SESTU")
    {
        city = "I695";
        finished = true;
    }
    else if (city == "SETTALA")
    {
        city = "I696";
        finished = true;
    }
    else if (city == "SETTEFRATI")
    {
        city = "I697";
        finished = true;
    }
    else if (city == "SETTIME")
    {
        city = "I698";
        finished = true;
    }
    else if (city == "SETTIMOMILANESE")
    {
        city = "I700";
        finished = true;
    }
    else if (city == "SETTIMOROTTARO")
    {
        city = "I701";
        finished = true;
    }
    else if (city == "SETTIMOSANPIETRO")
    {
        city = "I699";
        finished = true;
    }
    else if (city == "SETTIMOTORINESE")
    {
        city = "I703";
        finished = true;
    }
    else if (city == "SETTIMOVITTONE")
    {
        city = "I702";
        finished = true;
    }
    else if (city == "SETTINGIANO")
    {
        city = "I704";
        finished = true;
    }
    else if (city == "SETZU")
    {
        city = "I705";
        finished = true;
    }
    else if (city == "SEUI")
    {
        city = "I706";
        finished = true;
    }
    else if (city == "SEULO")
    {
        city = "I707";
        finished = true;
    }
    else if (city == "SEVESO")
    {
        city = "I709";
        finished = true;
    }
    else if (city == "SEZZADIO")
    {
        city = "I711";
        finished = true;
    }
    else if (city == "SEZZE")
    {
        city = "I712";
        finished = true;
    }
    else if (city == "SFRUZ")
    {
        city = "I714";
        finished = true;
    }
    else if (city == "SGONICO")
    {
        city = "I715";
        finished = true;
    }
    else if (city == "SGURGOLA")
    {
        city = "I716";
        finished = true;
    }
    else if (city == "SIAMAGGIORE")
    {
        city = "I717";
        finished = true;
    }
    else if (city == "SIAMANNA")
    {
        city = "I718";
        finished = true;
    }
    else if (city == "SIANO")
    {
        city = "I720";
        finished = true;
    }
    else if (city == "SIAPICCIA")
    {
        city = "I721";
        finished = true;
    }
    else if (city == "SICIGNANODEGLIALBURNI")
    {
        city = "M253";
        finished = true;
    }
    else if (city == "SICULIANA")
    {
        city = "I723";
        finished = true;
    }
    else if (city == "SIDDI")
    {
        city = "I724";
        finished = true;
    }
    else if (city == "SIDERNO")
    {
        city = "I725";
        finished = true;
    }
    else if (city == "SIENA")
    {
        city = "I726";
        finished = true;
    }
    else if (city == "SIGILLO")
    {
        city = "I727";
        finished = true;
    }
    else if (city == "SIGNA")
    {
        city = "I728";
        finished = true;
    }
    else if (city == "SILANDRO.SCHLANDERS.")
    {
        city = "I729";
        finished = true;
    }
    else if (city == "SILANUS")
    {
        city = "I730";
        finished = true;
    }
    else if (city == "SILEA")
    {
        city = "F116";
        finished = true;
    }
    else if (city == "SILIGO")
    {
        city = "I732";
        finished = true;
    }
    else if (city == "SILIQUA")
    {
        city = "I734";
        finished = true;
    }
    else if (city == "SILIUS")
    {
        city = "I735";
        finished = true;
    }
    else if (city == "SILLANO")
    {
        city = "I737";
        finished = true;
    }
    else if (city == "SILLANOGIUNCUGNANO")
    {
        city = "M347";
        finished = true;
    }
    else if (city == "SILLAVENGO")
    {
        city = "I736";
        finished = true;
    }
    else if (city == "SILVANOD'ORBA")
    {
        city = "I738";
        finished = true;
    }
    else if (city == "SILVANOPIETRA")
    {
        city = "I739";
        finished = true;
    }
    else if (city == "SILVI")
    {
        city = "I741";
        finished = true;
    }
    else if (city == "SIMALA")
    {
        city = "I742";
        finished = true;
    }
    else if (city == "SIMAXIS")
    {
        city = "I743";
        finished = true;
    }
    else if (city == "SIMBARIO")
    {
        city = "I744";
        finished = true;
    }
    else if (city == "SIMERICRICHI")
    {
        city = "I745";
        finished = true;
    }
    else if (city == "SINAGRA")
    {
        city = "I747";
        finished = true;
    }
    else if (city == "SINALUNGA")
    {
        city = "A468";
        finished = true;
    }
    else if (city == "SINDIA")
    {
        city = "I748";
        finished = true;
    }
    else if (city == "SINI")
    {
        city = "I749";
        finished = true;
    }
    else if (city == "SINIO")
    {
        city = "I750";
        finished = true;
    }
    else if (city == "SINISCOLA")
    {
        city = "I751";
        finished = true;
    }
    else if (city == "SINNAI")
    {
        city = "I752";
        finished = true;
    }
    else if (city == "SINOPOLI")
    {
        city = "I753";
        finished = true;
    }
    else if (city == "SIRACUSA")
    {
        city = "I754";
        finished = true;
    }
    else if (city == "SIRIGNANO")
    {
        city = "I756";
        finished = true;
    }
    else if (city == "SIRIS")
    {
        city = "I757";
        finished = true;
    }
    else if (city == "SIRMIONE")
    {
        city = "I633";
        finished = true;
    }
    else if (city == "SIROLO")
    {
        city = "I758";
        finished = true;
    }
    else if (city == "SIRONE")
    {
        city = "I759";
        finished = true;
    }
    else if (city == "SIROR")
    {
        city = "I760";
        finished = true;
    }
    else if (city == "SIRTORI")
    {
        city = "I761";
        finished = true;
    }
    else if (city == "SISSA")
    {
        city = "I763";
        finished = true;
    }
    else if (city == "SISSATRECASALI")
    {
        city = "M325";
        finished = true;
    }
    else if (city == "SIURGUSDONIGALA")
    {
        city = "I765";
        finished = true;
    }
    else if (city == "SIZIANO")
    {
        city = "E265";
        finished = true;
    }
    else if (city == "SIZZANO")
    {
        city = "I767";
        finished = true;
    }
    else if (city == "SLUDERNO.SCHLUDERNS.")
    {
        city = "I771";
        finished = true;
    }
    else if (city == "SMARANO")
    {
        city = "I772";
        finished = true;
    }
    else if (city == "SMERILLO")
    {
        city = "I774";
        finished = true;
    }
    else if (city == "SOAVE")
    {
        city = "I775";
        finished = true;
    }
    else if (city == "SOCCHIEVE")
    {
        city = "I777";
        finished = true;
    }
    else if (city == "SODDI'")
    {
        city = "I778";
        finished = true;
    }
    else if (city == "SOGLIANOALRUBICONE")
    {
        city = "I779";
        finished = true;
    }
    else if (city == "SOGLIANOCAVOUR")
    {
        city = "I780";
        finished = true;
    }
    else if (city == "SOGLIO")
    {
        city = "I781";
        finished = true;
    }
    else if (city == "SOIANODELLAGO")
    {
        city = "I782";
        finished = true;
    }
    else if (city == "SOLAGNA")
    {
        city = "I783";
        finished = true;
    }
    else if (city == "SOLARINO")
    {
        city = "I785";
        finished = true;
    }
    else if (city == "SOLARO")
    {
        city = "I786";
        finished = true;
    }
    else if (city == "SOLAROLO")
    {
        city = "I787";
        finished = true;
    }
    else if (city == "SOLAROLORAINERIO")
    {
        city = "I790";
        finished = true;
    }
    else if (city == "SOLARUSSA")
    {
        city = "I791";
        finished = true;
    }
    else if (city == "SOLBIATE")
    {
        city = "I792";
        finished = true;
    }
    else if (city == "SOLBIATEARNO")
    {
        city = "I793";
        finished = true;
    }
    else if (city == "SOLBIATECONCAGNO")
    {
        city = "M412";
        finished = true;
    }
    else if (city == "SOLBIATEOLONA")
    {
        city = "I794";
        finished = true;
    }
    else if (city == "SOLDANO")
    {
        city = "I796";
        finished = true;
    }
    else if (city == "SOLEMINIS")
    {
        city = "I797";
        finished = true;
    }
    else if (city == "SOLERO")
    {
        city = "I798";
        finished = true;
    }
    else if (city == "SOLESINO")
    {
        city = "I799";
        finished = true;
    }
    else if (city == "SOLETO")
    {
        city = "I800";
        finished = true;
    }
    else if (city == "SOLFERINO")
    {
        city = "I801";
        finished = true;
    }
    else if (city == "SOLIERA")
    {
        city = "I802";
        finished = true;
    }
    else if (city == "SOLIGNANO")
    {
        city = "I803";
        finished = true;
    }
    else if (city == "SOLOFRA")
    {
        city = "I805";
        finished = true;
    }
    else if (city == "SOLONGHELLO")
    {
        city = "I808";
        finished = true;
    }
    else if (city == "SOLOPACA")
    {
        city = "I809";
        finished = true;
    }
    else if (city == "SOLTOCOLLINA")
    {
        city = "I812";
        finished = true;
    }
    else if (city == "SOLZA")
    {
        city = "I813";
        finished = true;
    }
    else if (city == "SOMAGLIA")
    {
        city = "I815";
        finished = true;
    }
    else if (city == "SOMANO")
    {
        city = "I817";
        finished = true;
    }
    else if (city == "SOMMALOMBARDO")
    {
        city = "I819";
        finished = true;
    }
    else if (city == "SOMMAVESUVIANA")
    {
        city = "I820";
        finished = true;
    }
    else if (city == "SOMMACAMPAGNA")
    {
        city = "I821";
        finished = true;
    }
    else if (city == "SOMMARIVADELBOSCO")
    {
        city = "I822";
        finished = true;
    }
    else if (city == "SOMMARIVAPERNO")
    {
        city = "I823";
        finished = true;
    }
    else if (city == "SOMMATINO")
    {
        city = "I824";
        finished = true;
    }
    else if (city == "SOMMO")
    {
        city = "I825";
        finished = true;
    }
    else if (city == "SONA")
    {
        city = "I826";
        finished = true;
    }
    else if (city == "SONCINO")
    {
        city = "I827";
        finished = true;
    }
    else if (city == "SONDALO")
    {
        city = "I828";
        finished = true;
    }
    else if (city == "SONDRIO")
    {
        city = "I829";
        finished = true;
    }
    else if (city == "SONGAVAZZO")
    {
        city = "I830";
        finished = true;
    }
    else if (city == "SONICO")
    {
        city = "I831";
        finished = true;
    }
    else if (city == "SONNINO")
    {
        city = "I832";
        finished = true;
    }
    else if (city == "SOPRANA")
    {
        city = "I835";
        finished = true;
    }
    else if (city == "SORA")
    {
        city = "I838";
        finished = true;
    }
    else if (city == "SORAGADelse ifASSA")
    {
        city = "I839";
        finished = true;
    }
    else if (city == "SORAGNA")
    {
        city = "I840";
        finished = true;
    }
    else if (city == "SORANO")
    {
        city = "I841";
        finished = true;
    }
    else if (city == "SORBOSANBASILE")
    {
        city = "I844";
        finished = true;
    }
    else if (city == "SORBOSERPICO")
    {
        city = "I843";
        finished = true;
    }
    else if (city == "SORBOLO")
    {
        city = "I845";
        finished = true;
    }
    else if (city == "SORBOLOMEZZANI")
    {
        city = "M411";
        finished = true;
    }
    else if (city == "SORDEVOLO")
    {
        city = "I847";
        finished = true;
    }
    else if (city == "SORDIO")
    {
        city = "I848";
        finished = true;
    }
    else if (city == "SORESINA")
    {
        city = "I849";
        finished = true;
    }
    else if (city == "SORGA'")
    {
        city = "I850";
        finished = true;
    }
    else if (city == "SORGONO")
    {
        city = "I851";
        finished = true;
    }
    else if (city == "SORI")
    {
        city = "I852";
        finished = true;
    }
    else if (city == "SORIANELLO")
    {
        city = "I853";
        finished = true;
    }
    else if (city == "SORIANOCALABRO")
    {
        city = "I854";
        finished = true;
    }
    else if (city == "SORIANONELCIMINO")
    {
        city = "I855";
        finished = true;
    }
    else if (city == "SORICO")
    {
        city = "I856";
        finished = true;
    }
    else if (city == "SORISO")
    {
        city = "I857";
        finished = true;
    }
    else if (city == "SORISOLE")
    {
        city = "I858";
        finished = true;
    }
    else if (city == "SORMANO")
    {
        city = "I860";
        finished = true;
    }
    else if (city == "SORRADILE")
    {
        city = "I861";
        finished = true;
    }
    else if (city == "SORRENTO")
    {
        city = "I862";
        finished = true;
    }
    else if (city == "SORSO")
    {
        city = "I863";
        finished = true;
    }
    else if (city == "SORTINO")
    {
        city = "I864";
        finished = true;
    }
    else if (city == "SOSPIRO")
    {
        city = "I865";
        finished = true;
    }
    else if (city == "SOSPIROLO")
    {
        city = "I866";
        finished = true;
    }
    else if (city == "SOSSANO")
    {
        city = "I867";
        finished = true;
    }
    else if (city == "SOSTEGNO")
    {
        city = "I868";
        finished = true;
    }
    else if (city == "SOTTOILMONTEGIOVANNIXXIII")
    {
        city = "I869";
        finished = true;
    }
    else if (city == "SOVER")
    {
        city = "I871";
        finished = true;
    }
    else if (city == "SOVERATO")
    {
        city = "I872";
        finished = true;
    }
    else if (city == "SOVERE")
    {
        city = "I873";
        finished = true;
    }
    else if (city == "SOVERIAMANNELLI")
    {
        city = "I874";
        finished = true;
    }
    else if (city == "SOVERIASIMERI")
    {
        city = "I875";
        finished = true;
    }
    else if (city == "SOVERZENE")
    {
        city = "I876";
        finished = true;
    }
    else if (city == "SOVICILLE")
    {
        city = "I877";
        finished = true;
    }
    else if (city == "SOVICO")
    {
        city = "I878";
        finished = true;
    }
    else if (city == "SOVIZZO")
    {
        city = "I879";
        finished = true;
    }
    else if (city == "SOVRAMONTE")
    {
        city = "I673";
        finished = true;
    }
    else if (city == "SOZZAGO")
    {
        city = "I880";
        finished = true;
    }
    else if (city == "SPADAFORA")
    {
        city = "I881";
        finished = true;
    }
    else if (city == "SPADOLA")
    {
        city = "I884";
        finished = true;
    }
    else if (city == "SPARANISE")
    {
        city = "I885";
        finished = true;
    }
    else if (city == "SPARONE")
    {
        city = "I886";
        finished = true;
    }
    else if (city == "SPECCHIA")
    {
        city = "I887";
        finished = true;
    }
    else if (city == "SPELLO")
    {
        city = "I888";
        finished = true;
    }
    else if (city == "SPERA")
    {
        city = "I889";
        finished = true;
    }
    else if (city == "SPERLINGA")
    {
        city = "I891";
        finished = true;
    }
    else if (city == "SPERLONGA")
    {
        city = "I892";
        finished = true;
    }
    else if (city == "SPERONE")
    {
        city = "I893";
        finished = true;
    }
    else if (city == "SPESSA")
    {
        city = "I894";
        finished = true;
    }
    else if (city == "SPEZZANOALBANESE")
    {
        city = "I895";
        finished = true;
    }
    else if (city == "SPEZZANODELLASILA")
    {
        city = "I896";
        finished = true;
    }
    else if (city == "SPEZZANOPICCOLO")
    {
        city = "I898";
        finished = true;
    }
    else if (city == "SPIAZZO")
    {
        city = "I899";
        finished = true;
    }
    else if (city == "SPIGNOMONFERRATO")
    {
        city = "I901";
        finished = true;
    }
    else if (city == "SPIGNOSATURNIA")
    {
        city = "I902";
        finished = true;
    }
    else if (city == "SPILAMBERTO")
    {
        city = "I903";
        finished = true;
    }
    else if (city == "SPILIMBERGO")
    {
        city = "I904";
        finished = true;
    }
    else if (city == "SPILINGA")
    {
        city = "I905";
        finished = true;
    }
    else if (city == "SPINADESCO")
    {
        city = "I906";
        finished = true;
    }
    else if (city == "SPINAZZOLA")
    {
        city = "I907";
        finished = true;
    }
    else if (city == "SPINEA")
    {
        city = "I908";
        finished = true;
    }
    else if (city == "SPINEDA")
    {
        city = "I909";
        finished = true;
    }
    else if (city == "SPINETE")
    {
        city = "I910";
        finished = true;
    }
    else if (city == "SPINETOSCRIVIA")
    {
        city = "I911";
        finished = true;
    }
    else if (city == "SPINETOLI")
    {
        city = "I912";
        finished = true;
    }
    else if (city == "SPINOD'ADDA")
    {
        city = "I914";
        finished = true;
    }
    else if (city == "SPINONEALLAGO")
    {
        city = "I916";
        finished = true;
    }
    else if (city == "SPINOSO")
    {
        city = "I917";
        finished = true;
    }
    else if (city == "SPIRANO")
    {
        city = "I919";
        finished = true;
    }
    else if (city == "SPOLETO")
    {
        city = "I921";
        finished = true;
    }
    else if (city == "SPOLTORE")
    {
        city = "I922";
        finished = true;
    }
    else if (city == "SPONGANO")
    {
        city = "I923";
        finished = true;
    }
    else if (city == "SPORMAGGIORE")
    {
        city = "I924";
        finished = true;
    }
    else if (city == "SPORMINORE")
    {
        city = "I925";
        finished = true;
    }
    else if (city == "SPOTORNO")
    {
        city = "I926";
        finished = true;
    }
    else if (city == "SPRESIANO")
    {
        city = "I927";
        finished = true;
    }
    else if (city == "SPRIANA")
    {
        city = "I928";
        finished = true;
    }
    else if (city == "SQUILLACE")
    {
        city = "I929";
        finished = true;
    }
    else if (city == "SQUINZANO")
    {
        city = "I930";
        finished = true;
    }
    else if (city == "STAFFOLO")
    {
        city = "I932";
        finished = true;
    }
    else if (city == "STAGNOLOMBARDO")
    {
        city = "I935";
        finished = true;
    }
    else if (city == "STAITI")
    {
        city = "I936";
        finished = true;
    }
    else if (city == "STALETTI'")
    {
        city = "I937";
        finished = true;
    }
    else if (city == "STANGHELLA")
    {
        city = "I938";
        finished = true;
    }
    else if (city == "STARANZANO")
    {
        city = "I939";
        finished = true;
    }
    else if (city == "STATTE")
    {
        city = "M298";
        finished = true;
    }
    else if (city == "STAZZANO")
    {
        city = "I941";
        finished = true;
    }
    else if (city == "STAZZEMA")
    {
        city = "I942";
        finished = true;
    }
    else if (city == "STAZZONA")
    {
        city = "I943";
        finished = true;
    }
    else if (city == "STEFANACONI")
    {
        city = "I945";
        finished = true;
    }
    else if (city == "STELLA")
    {
        city = "I946";
        finished = true;
    }
    else if (city == "STELLACILENTO")
    {
        city = "G887";
        finished = true;
    }
    else if (city == "STELLANELLO")
    {
        city = "I947";
        finished = true;
    }
    else if (city == "STELVIO.STILFS.")
    {
        city = "I948";
        finished = true;
    }
    else if (city == "STENICO")
    {
        city = "I949";
        finished = true;
    }
    else if (city == "STERNATIA")
    {
        city = "I950";
        finished = true;
    }
    else if (city == "STEZZANO")
    {
        city = "I951";
        finished = true;
    }
    else if (city == "STIA")
    {
        city = "I952";
        finished = true;
    }
    else if (city == "STIENTA")
    {
        city = "I953";
        finished = true;
    }
    else if (city == "STIGLIANO")
    {
        city = "I954";
        finished = true;
    }
    else if (city == "STIGNANO")
    {
        city = "I955";
        finished = true;
    }
    else if (city == "STILO")
    {
        city = "I956";
        finished = true;
    }
    else if (city == "STIMIGLIANO")
    {
        city = "I959";
        finished = true;
    }
    else if (city == "STINTINO")
    {
        city = "M290";
        finished = true;
    }
    else if (city == "STIO")
    {
        city = "I960";
        finished = true;
    }
    else if (city == "STORNARA")
    {
        city = "I962";
        finished = true;
    }
    else if (city == "STORNARELLA")
    {
        city = "I963";
        finished = true;
    }
    else if (city == "STORO")
    {
        city = "I964";
        finished = true;
    }
    else if (city == "STRA")
    {
        city = "I965";
        finished = true;
    }
    else if (city == "STRADELLA")
    {
        city = "I968";
        finished = true;
    }
    else if (city == "STRAMBINELLO")
    {
        city = "I969";
        finished = true;
    }
    else if (city == "STRAMBINO")
    {
        city = "I970";
        finished = true;
    }
    else if (city == "STRANGOLAGALLI")
    {
        city = "I973";
        finished = true;
    }
    else if (city == "STREGNA")
    {
        city = "I974";
        finished = true;
    }
    else if (city == "STREMBO")
    {
        city = "I975";
        finished = true;
    }
    else if (city == "STRESA")
    {
        city = "I976";
        finished = true;
    }
    else if (city == "STREVI")
    {
        city = "I977";
        finished = true;
    }
    else if (city == "STRIANO")
    {
        city = "I978";
        finished = true;
    }
    else if (city == "STRIGNO")
    {
        city = "I979";
        finished = true;
    }
    else if (city == "STRONA")
    {
        city = "I980";
        finished = true;
    }
    else if (city == "STRONCONE")
    {
        city = "I981";
        finished = true;
    }
    else if (city == "STRONGOLI")
    {
        city = "I982";
        finished = true;
    }
    else if (city == "STROPPIANA")
    {
        city = "I984";
        finished = true;
    }
    else if (city == "STROPPO")
    {
        city = "I985";
        finished = true;
    }
    else if (city == "STROZZA")
    {
        city = "I986";
        finished = true;
    }
    else if (city == "STURNO")
    {
        city = "I990";
        finished = true;
    }
    else if (city == "SUARDI")
    {
        city = "B014";
        finished = true;
    }
    else if (city == "SUBBIANO")
    {
        city = "I991";
        finished = true;
    }
    else if (city == "SUBIACO")
    {
        city = "I992";
        finished = true;
    }
    else if (city == "SUCCIVO")
    {
        city = "I993";
        finished = true;
    }
    else if (city == "SUEGLIO")
    {
        city = "I994";
        finished = true;
    }
    else if (city == "SUELLI")
    {
        city = "I995";
        finished = true;
    }
    else if (city == "SUELLO")
    {
        city = "I996";
        finished = true;
    }
    else if (city == "SUISIO")
    {
        city = "I997";
        finished = true;
    }
    else if (city == "SULBIATE")
    {
        city = "I998";
        finished = true;
    }
    else if (city == "SULMONA")
    {
        city = "I804";
        finished = true;
    }
    else if (city == "SULZANO")
    {
        city = "L002";
        finished = true;
    }
    else if (city == "SUMIRAGO")
    {
        city = "L003";
        finished = true;
    }
    else if (city == "SUMMONTE")
    {
        city = "L004";
        finished = true;
    }
    else if (city == "SUNI")
    {
        city = "L006";
        finished = true;
    }
    else if (city == "SUNO")
    {
        city = "L007";
        finished = true;
    }
    else if (city == "SUPERSANO")
    {
        city = "L008";
        finished = true;
    }
    else if (city == "SUPINO")
    {
        city = "L009";
        finished = true;
    }
    else if (city == "SURANO")
    {
        city = "L010";
        finished = true;
    }
    else if (city == "SURBO")
    {
        city = "L011";
        finished = true;
    }
    else if (city == "SUSA")
    {
        city = "L013";
        finished = true;
    }
    else if (city == "SUSEGANA")
    {
        city = "L014";
        finished = true;
    }
    else if (city == "SUSTINENTE")
    {
        city = "L015";
        finished = true;
    }
    else if (city == "SUTERA")
    {
        city = "L016";
        finished = true;
    }
    else if (city == "SUTRI")
    {
        city = "L017";
        finished = true;
    }
    else if (city == "SUTRIO")
    {
        city = "L018";
        finished = true;
    }
    else if (city == "SUVERETO")
    {
        city = "L019";
        finished = true;
    }
    else if (city == "SUZZARA")
    {
        city = "L020";
        finished = true;
    }
    else if (city == "TACENO")
    {
        city = "L022";
        finished = true;
    }
    else if (city == "TADASUNI")
    {
        city = "L023";
        finished = true;
    }
    else if (city == "TAGGIA")
    {
        city = "L024";
        finished = true;
    }
    else if (city == "TAGLIACOZZO")
    {
        city = "L025";
        finished = true;
    }
    else if (city == "TAGLIODIPO")
    {
        city = "L026";
        finished = true;
    }
    else if (city == "TAGLIOLOMONFERRATO")
    {
        city = "L027";
        finished = true;
    }
    else if (city == "TAIBONAGORDINO")
    {
        city = "L030";
        finished = true;
    }
    else if (city == "TAINO")
    {
        city = "L032";
        finished = true;
    }
    else if (city == "TAIO")
    {
        city = "L033";
        finished = true;
    }
    else if (city == "TAIPANA")
    {
        city = "G736";
        finished = true;
    }
    else if (city == "TALAMELLO")
    {
        city = "L034";
        finished = true;
    }
    else if (city == "TALAMONA")
    {
        city = "L035";
        finished = true;
    }
    else if (city == "TALANA")
    {
        city = "L036";
        finished = true;
    }
    else if (city == "TALEGGIO")
    {
        city = "L037";
        finished = true;
    }
    else if (city == "TALLA")
    {
        city = "L038";
        finished = true;
    }
    else if (city == "TALMASSONS")
    {
        city = "L039";
        finished = true;
    }
    else if (city == "TAMBRE")
    {
        city = "L040";
        finished = true;
    }
    else if (city == "TAORMINA")
    {
        city = "L042";
        finished = true;
    }
    else if (city == "TAPOGLIANO")
    {
        city = "L044";
        finished = true;
    }
    else if (city == "TARANO")
    {
        city = "L046";
        finished = true;
    }
    else if (city == "TARANTAPELIGNA")
    {
        city = "L047";
        finished = true;
    }
    else if (city == "TARANTASCA")
    {
        city = "L048";
        finished = true;
    }
    else if (city == "TARANTO")
    {
        city = "L049";
        finished = true;
    }
    else if (city == "TARCENTO")
    {
        city = "L050";
        finished = true;
    }
    else if (city == "TARQUINIA")
    {
        city = "D024";
        finished = true;
    }
    else if (city == "TARSIA")
    {
        city = "L055";
        finished = true;
    }
    else if (city == "TARTANO")
    {
        city = "L056";
        finished = true;
    }
    else if (city == "TARVISIO")
    {
        city = "L057";
        finished = true;
    }
    else if (city == "TARZO")
    {
        city = "L058";
        finished = true;
    }
    else if (city == "TASSAROLO")
    {
        city = "L059";
        finished = true;
    }
    else if (city == "TASSULLO")
    {
        city = "L060";
        finished = true;
    }
    else if (city == "TAURANO")
    {
        city = "L061";
        finished = true;
    }
    else if (city == "TAURASI")
    {
        city = "L062";
        finished = true;
    }
    else if (city == "TAURIANOVA")
    {
        city = "L063";
        finished = true;
    }
    else if (city == "TAURISANO")
    {
        city = "L064";
        finished = true;
    }
    else if (city == "TAVAGNACCO")
    {
        city = "L065";
        finished = true;
    }
    else if (city == "TAVAGNASCO")
    {
        city = "L066";
        finished = true;
    }
    else if (city == "TAVARNELLEVALDIPESA")
    {
        city = "L067";
        finished = true;
    }
    else if (city == "TAVAZZANOCONVILLAVESCO")
    {
        city = "F260";
        finished = true;
    }
    else if (city == "TAVENNA")
    {
        city = "L069";
        finished = true;
    }
    else if (city == "TAVERNA")
    {
        city = "L070";
        finished = true;
    }
    else if (city == "TAVERNERIO")
    {
        city = "L071";
        finished = true;
    }
    else if (city == "TAVERNOLABERGAMASCA")
    {
        city = "L073";
        finished = true;
    }
    else if (city == "TAVERNOLESULMELLA")
    {
        city = "C698";
        finished = true;
    }
    else if (city == "TAVIANO")
    {
        city = "L074";
        finished = true;
    }
    else if (city == "TAVIGLIANO")
    {
        city = "L075";
        finished = true;
    }
    else if (city == "TAVOLETO")
    {
        city = "L078";
        finished = true;
    }
    else if (city == "TAVULLIA")
    {
        city = "L081";
        finished = true;
    }
    else if (city == "TEANA")
    {
        city = "L082";
        finished = true;
    }
    else if (city == "TEANO")
    {
        city = "L083";
        finished = true;
    }
    else if (city == "TEGGIANO")
    {
        city = "D292";
        finished = true;
    }
    else if (city == "TEGLIO")
    {
        city = "L084";
        finished = true;
    }
    else if (city == "TEGLIOVENETO")
    {
        city = "L085";
        finished = true;
    }
    else if (city == "TELESETERME")
    {
        city = "L086";
        finished = true;
    }
    else if (city == "TELGATE")
    {
        city = "L087";
        finished = true;
    }
    else if (city == "TELTI")
    {
        city = "L088";
        finished = true;
    }
    else if (city == "TELVE")
    {
        city = "L089";
        finished = true;
    }
    else if (city == "TELVEDISOPRA")
    {
        city = "L090";
        finished = true;
    }
    else if (city == "TEMPIOPAUSANIA")
    {
        city = "L093";
        finished = true;
    }
    else if (city == "TEMU'")
    {
        city = "L094";
        finished = true;
    }
    else if (city == "TENNA")
    {
        city = "L096";
        finished = true;
    }
    else if (city == "TENNO")
    {
        city = "L097";
        finished = true;
    }
    else if (city == "TEOLO")
    {
        city = "L100";
        finished = true;
    }
    else if (city == "TEOR")
    {
        city = "L101";
        finished = true;
    }
    else if (city == "TEORA")
    {
        city = "L102";
        finished = true;
    }
    else if (city == "TERAMO")
    {
        city = "L103";
        finished = true;
    }
    else if (city == "TERDOBBIATE")
    {
        city = "L104";
        finished = true;
    }
    else if (city == "TERELLE")
    {
        city = "L105";
        finished = true;
    }
    else if (city == "TERENTO.TERENTEN.")
    {
        city = "L106";
        finished = true;
    }
    else if (city == "TERENZO")
    {
        city = "E548";
        finished = true;
    }
    else if (city == "TERGU")
    {
        city = "M282";
        finished = true;
    }
    else if (city == "TERLAGO")
    {
        city = "L107";
        finished = true;
    }
    else if (city == "TERLANO.TERLAN.")
    {
        city = "L108";
        finished = true;
    }
    else if (city == "TERLIZZI")
    {
        city = "L109";
        finished = true;
    }
    else if (city == "TERMEVIGLIATORE")
    {
        city = "M210";
        finished = true;
    }
    else if (city == "TERMENOSULLASTRADADELVINO.TRAMINANDER.")
    {
        city = "L111";
        finished = true;
    }
    else if (city == "TERMINIIMERESE")
    {
        city = "L112";
        finished = true;
    }
    else if (city == "TERMOLI")
    {
        city = "L113";
        finished = true;
    }
    else if (city == "TERNATE")
    {
        city = "L115";
        finished = true;
    }
    else if (city == "TERNENGO")
    {
        city = "L116";
        finished = true;
    }
    else if (city == "TERNI")
    {
        city = "L117";
        finished = true;
    }
    else if (city == "TERNOD'ISOLA")
    {
        city = "L118";
        finished = true;
    }
    else if (city == "TERRACINA")
    {
        city = "L120";
        finished = true;
    }
    else if (city == "TERRAGNOLO")
    {
        city = "L121";
        finished = true;
    }
    else if (city == "TERRALBA")
    {
        city = "L122";
        finished = true;
    }
    else if (city == "TERRANOVADASIBARI")
    {
        city = "L124";
        finished = true;
    }
    else if (city == "TERRANOVADEIPASSERINI")
    {
        city = "L125";
        finished = true;
    }
    else if (city == "TERRANOVADIPOLLINO")
    {
        city = "L126";
        finished = true;
    }
    else if (city == "TERRANOVASAPPOMINULIO")
    {
        city = "L127";
        finished = true;
    }
    else if (city == "TERRANUOVABRACCIOLINI")
    {
        city = "L123";
        finished = true;
    }
    else if (city == "TERRASINI")
    {
        city = "L131";
        finished = true;
    }
    else if (city == "TERRASSAPADOVANA")
    {
        city = "L132";
        finished = true;
    }
    else if (city == "TERRAVECCHIA")
    {
        city = "L134";
        finished = true;
    }
    else if (city == "TERRAZZO")
    {
        city = "L136";
        finished = true;
    }
    else if (city == "TERRED'ADIGE")
    {
        city = "M407";
        finished = true;
    }
    else if (city == "TERREDELRENO")
    {
        city = "M381";
        finished = true;
    }
    else if (city == "TERREROVERESCHE")
    {
        city = "M379";
        finished = true;
    }
    else if (city == "TERRES")
    {
        city = "L137";
        finished = true;
    }
    else if (city == "TERRICCIOLA")
    {
        city = "L138";
        finished = true;
    }
    else if (city == "TERRUGGIA")
    {
        city = "L139";
        finished = true;
    }
    else if (city == "TERTENIA")
    {
        city = "L140";
        finished = true;
    }
    else if (city == "TERZIGNO")
    {
        city = "L142";
        finished = true;
    }
    else if (city == "TERZO")
    {
        city = "L143";
        finished = true;
    }
    else if (city == "TERZODIAQUILEIA")
    {
        city = "L144";
        finished = true;
    }
    else if (city == "TERZOLAS")
    {
        city = "L145";
        finished = true;
    }
    else if (city == "TERZORIO")
    {
        city = "L146";
        finished = true;
    }
    else if (city == "TESERO")
    {
        city = "L147";
        finished = true;
    }
    else if (city == "TESIMO.TISENS.")
    {
        city = "L149";
        finished = true;
    }
    else if (city == "TESSENNANO")
    {
        city = "L150";
        finished = true;
    }
    else if (city == "TESTICO")
    {
        city = "L152";
        finished = true;
    }
    else if (city == "TETI")
    {
        city = "L153";
        finished = true;
    }
    else if (city == "TEULADA")
    {
        city = "L154";
        finished = true;
    }
    else if (city == "TEVEROLA")
    {
        city = "L155";
        finished = true;
    }
    else if (city == "TEZZESULBRENTA")
    {
        city = "L156";
        finished = true;
    }
    else if (city == "THIENE")
    {
        city = "L157";
        finished = true;
    }
    else if (city == "THIESI")
    {
        city = "L158";
        finished = true;
    }
    else if (city == "TIANA")
    {
        city = "L160";
        finished = true;
    }
    else if (city == "TIARNODISOPRA")
    {
        city = "L162";
        finished = true;
    }
    else if (city == "TIARNODISOTTO")
    {
        city = "L163";
        finished = true;
    }
    else if (city == "TICENGO")
    {
        city = "L164";
        finished = true;
    }
    else if (city == "TICINETO")
    {
        city = "L165";
        finished = true;
    }
    else if (city == "TIGGIANO")
    {
        city = "L166";
        finished = true;
    }
    else if (city == "TIGLIETO")
    {
        city = "L167";
        finished = true;
    }
    else if (city == "TIGLIOLE")
    {
        city = "L168";
        finished = true;
    }
    else if (city == "TIGNALE")
    {
        city = "L169";
        finished = true;
    }
    else if (city == "TINNURA")
    {
        city = "L172";
        finished = true;
    }
    else if (city == "TIONEDEGLIABRUZZI")
    {
        city = "L173";
        finished = true;
    }
    else if (city == "TIONEDITRENTO")
    {
        city = "L174";
        finished = true;
    }
    else if (city == "TIRANO")
    {
        city = "L175";
        finished = true;
    }
    else if (city == "TIRES.TIERS.")
    {
        city = "L176";
        finished = true;
    }
    else if (city == "TIRIOLO")
    {
        city = "L177";
        finished = true;
    }
    else if (city == "TIROLO.TIROL.")
    {
        city = "L178";
        finished = true;
    }
    else if (city == "TISSI")
    {
        city = "L180";
        finished = true;
    }
    else if (city == "TITO")
    {
        city = "L181";
        finished = true;
    }
    else if (city == "TIVOLI")
    {
        city = "L182";
        finished = true;
    }
    else if (city == "TIZZANOVALPARMA")
    {
        city = "L183";
        finished = true;
    }
    else if (city == "TOANO")
    {
        city = "L184";
        finished = true;
    }
    else if (city == "TOCCOCAUDIO")
    {
        city = "L185";
        finished = true;
    }
    else if (city == "TOCCODACASAURIA")
    {
        city = "L186";
        finished = true;
    }
    else if (city == "TOCENO")
    {
        city = "L187";
        finished = true;
    }
    else if (city == "TODI")
    {
        city = "L188";
        finished = true;
    }
    else if (city == "TOFFIA")
    {
        city = "L189";
        finished = true;
    }
    else if (city == "TOIRANO")
    {
        city = "L190";
        finished = true;
    }
    else if (city == "TOLENTINO")
    {
        city = "L191";
        finished = true;
    }
    else if (city == "TOLFA")
    {
        city = "L192";
        finished = true;
    }
    else if (city == "TOLLEGNO")
    {
        city = "L193";
        finished = true;
    }
    else if (city == "TOLLO")
    {
        city = "L194";
        finished = true;
    }
    else if (city == "TOLMEZZO")
    {
        city = "L195";
        finished = true;
    }
    else if (city == "TOLVE")
    {
        city = "L197";
        finished = true;
    }
    else if (city == "TOMBOLO")
    {
        city = "L199";
        finished = true;
    }
    else if (city == "TON")
    {
        city = "L200";
        finished = true;
    }
    else if (city == "TONADICO")
    {
        city = "L201";
        finished = true;
    }
    else if (city == "TONARA")
    {
        city = "L202";
        finished = true;
    }
    else if (city == "TONCO")
    {
        city = "L203";
        finished = true;
    }
    else if (city == "TONENGO")
    {
        city = "L204";
        finished = true;
    }
    else if (city == "TONEZZADELCIMONE")
    {
        city = "D717";
        finished = true;
    }
    else if (city == "TORAEPICCILLI")
    {
        city = "L205";
        finished = true;
    }
    else if (city == "TORANOCASTELLO")
    {
        city = "L206";
        finished = true;
    }
    else if (city == "TORANONUOVO")
    {
        city = "L207";
        finished = true;
    }
    else if (city == "TORBOLECASAGLIA")
    {
        city = "L210";
        finished = true;
    }
    else if (city == "TORCEGNO")
    {
        city = "L211";
        finished = true;
    }
    else if (city == "TORCHIARA")
    {
        city = "L212";
        finished = true;
    }
    else if (city == "TORCHIAROLO")
    {
        city = "L213";
        finished = true;
    }
    else if (city == "TORELLADEILOMBARDI")
    {
        city = "L214";
        finished = true;
    }
    else if (city == "TORELLADELSANNIO")
    {
        city = "L215";
        finished = true;
    }
    else if (city == "TORGIANO")
    {
        city = "L216";
        finished = true;
    }
    else if (city == "TORGNON")
    {
        city = "L217";
        finished = true;
    }
    else if (city == "TORINO")
    {
        city = "L219";
        finished = true;
    }
    else if (city == "TORINODISANGRO")
    {
        city = "L218";
        finished = true;
    }
    else if (city == "TORITTO")
    {
        city = "L220";
        finished = true;
    }
    else if (city == "TORLINOVIMERCATI")
    {
        city = "L221";
        finished = true;
    }
    else if (city == "TORNACO")
    {
        city = "L223";
        finished = true;
    }
    else if (city == "TORNARECCIO")
    {
        city = "L224";
        finished = true;
    }
    else if (city == "TORNATA")
    {
        city = "L225";
        finished = true;
    }
    else if (city == "TORNIMPARTE")
    {
        city = "L227";
        finished = true;
    }
    else if (city == "TORNO")
    {
        city = "L228";
        finished = true;
    }
    else if (city == "TORNOLO")
    {
        city = "L229";
        finished = true;
    }
    else if (city == "TORO")
    {
        city = "L230";
        finished = true;
    }
    else if (city == "TORPE'")
    {
        city = "L231";
        finished = true;
    }
    else if (city == "TORRACA")
    {
        city = "L233";
        finished = true;
    }
    else if (city == "TORRALBA")
    {
        city = "L235";
        finished = true;
    }
    else if (city == "TORRAZZACOSTE")
    {
        city = "L237";
        finished = true;
    }
    else if (city == "TORRAZZAPIEMONTE")
    {
        city = "L238";
        finished = true;
    }
    else if (city == "TORRAZZO")
    {
        city = "L239";
        finished = true;
    }
    else if (city == "TORREANNUNZIATA")
    {
        city = "L245";
        finished = true;
    }
    else if (city == "TORREBERETTIECASTELLARO")
    {
        city = "L250";
        finished = true;
    }
    else if (city == "TORREBOLDONE")
    {
        city = "L251";
        finished = true;
    }
    else if (city == "TORREBORMIDA")
    {
        city = "L252";
        finished = true;
    }
    else if (city == "TORRECAJETANI")
    {
        city = "L243";
        finished = true;
    }
    else if (city == "TORRECANAVESE")
    {
        city = "L247";
        finished = true;
    }
    else if (city == "TORRED'ARESE")
    {
        city = "L256";
        finished = true;
    }
    else if (city == "TORREDE'BUSI")
    {
        city = "L257";
        finished = true;
    }
    else if (city == "TORREDE'NEGRI")
    {
        city = "L262";
        finished = true;
    }
    else if (city == "TORREDE'PASSERI")
    {
        city = "L263";
        finished = true;
    }
    else if (city == "TORREDE'PICENARDI")
    {
        city = "L258";
        finished = true;
    }
    else if (city == "TORREDE'ROVERI")
    {
        city = "L265";
        finished = true;
    }
    else if (city == "TORREDELGRECO")
    {
        city = "L259";
        finished = true;
    }
    else if (city == "TORREDIMOSTO")
    {
        city = "L267";
        finished = true;
    }
    else if (city == "TORREDIRUGGIERO")
    {
        city = "L240";
        finished = true;
    }
    else if (city == "TORREDISANTAMARIA")
    {
        city = "L244";
        finished = true;
    }
    else if (city == "TORRED'ISOLA")
    {
        city = "L269";
        finished = true;
    }
    else if (city == "TORRELENOCELLE")
    {
        city = "L272";
        finished = true;
    }
    else if (city == "TORREMONDOVI'")
    {
        city = "L241";
        finished = true;
    }
    else if (city == "TORREORSAIA")
    {
        city = "L274";
        finished = true;
    }
    else if (city == "TORREPALLAVICINA")
    {
        city = "L276";
        finished = true;
    }
    else if (city == "TORREPELLICE")
    {
        city = "L277";
        finished = true;
    }
    else if (city == "TORRESANGIORGIO")
    {
        city = "L278";
        finished = true;
    }
    else if (city == "TORRESANPATRIZIO")
    {
        city = "L279";
        finished = true;
    }
    else if (city == "TORRESANTASUSANNA")
    {
        city = "L280";
        finished = true;
    }
    else if (city == "TORREANO")
    {
        city = "L246";
        finished = true;
    }
    else if (city == "TORREBELVICINO")
    {
        city = "L248";
        finished = true;
    }
    else if (city == "TORREBRUNA")
    {
        city = "L253";
        finished = true;
    }
    else if (city == "TORRECUSO")
    {
        city = "L254";
        finished = true;
    }
    else if (city == "TORREGLIA")
    {
        city = "L270";
        finished = true;
    }
    else if (city == "TORREGROTTA")
    {
        city = "L271";
        finished = true;
    }
    else if (city == "TORREMAGGIORE")
    {
        city = "L273";
        finished = true;
    }
    else if (city == "TORRENOVA")
    {
        city = "M286";
        finished = true;
    }
    else if (city == "TORRESINA")
    {
        city = "L281";
        finished = true;
    }
    else if (city == "TORRETTA")
    {
        city = "L282";
        finished = true;
    }
    else if (city == "TORREVECCHIAPIA")
    {
        city = "L285";
        finished = true;
    }
    else if (city == "TORREVECCHIATEATINA")
    {
        city = "L284";
        finished = true;
    }
    else if (city == "TORRIDELBENACO")
    {
        city = "L287";
        finished = true;
    }
    else if (city == "TORRIDIQUARTESOLO")
    {
        city = "L297";
        finished = true;
    }
    else if (city == "TORRIINSABINA")
    {
        city = "L286";
        finished = true;
    }
    else if (city == "TORRIANA")
    {
        city = "I550";
        finished = true;
    }
    else if (city == "TORRICE")
    {
        city = "L290";
        finished = true;
    }
    else if (city == "TORRICELLA")
    {
        city = "L294";
        finished = true;
    }
    else if (city == "TORRICELLADELPIZZO")
    {
        city = "L296";
        finished = true;
    }
    else if (city == "TORRICELLAINSABINA")
    {
        city = "L293";
        finished = true;
    }
    else if (city == "TORRICELLAPELIGNA")
    {
        city = "L291";
        finished = true;
    }
    else if (city == "TORRICELLASICURA")
    {
        city = "L295";
        finished = true;
    }
    else if (city == "TORRICELLAVERZATE")
    {
        city = "L292";
        finished = true;
    }
    else if (city == "TORRIGLIA")
    {
        city = "L298";
        finished = true;
    }
    else if (city == "TORRILE")
    {
        city = "L299";
        finished = true;
    }
    else if (city == "TORRIONI")
    {
        city = "L301";
        finished = true;
    }
    else if (city == "TORRITADISIENA")
    {
        city = "L303";
        finished = true;
    }
    else if (city == "TORRITATIBERINA")
    {
        city = "L302";
        finished = true;
    }
    else if (city == "TORTOLI'")
    {
        city = "A355";
        finished = true;
    }
    else if (city == "TORTONA")
    {
        city = "L304";
        finished = true;
    }
    else if (city == "TORTORA")
    {
        city = "L305";
        finished = true;
    }
    else if (city == "TORTORELLA")
    {
        city = "L306";
        finished = true;
    }
    else if (city == "TORTORETO")
    {
        city = "L307";
        finished = true;
    }
    else if (city == "TORTORICI")
    {
        city = "L308";
        finished = true;
    }
    else if (city == "TORVISCOSA")
    {
        city = "L309";
        finished = true;
    }
    else if (city == "TOSCOLANOMADERNO")
    {
        city = "L312";
        finished = true;
    }
    else if (city == "TOSSICIA")
    {
        city = "L314";
        finished = true;
    }
    else if (city == "TOVODISANT'AGATA")
    {
        city = "L316";
        finished = true;
    }
    else if (city == "TOVOSANGIACOMO")
    {
        city = "L315";
        finished = true;
    }
    else if (city == "TRABIA")
    {
        city = "L317";
        finished = true;
    }
    else if (city == "TRADATE")
    {
        city = "L319";
        finished = true;
    }
    else if (city == "TRAMATZA")
    {
        city = "L321";
        finished = true;
    }
    else if (city == "TRAMBILENO")
    {
        city = "L322";
        finished = true;
    }
    else if (city == "TRAMONTI")
    {
        city = "L323";
        finished = true;
    }
    else if (city == "TRAMONTIDISOPRA")
    {
        city = "L324";
        finished = true;
    }
    else if (city == "TRAMONTIDISOTTO")
    {
        city = "L325";
        finished = true;
    }
    else if (city == "TRAMUTOLA")
    {
        city = "L326";
        finished = true;
    }
    else if (city == "TRANA")
    {
        city = "L327";
        finished = true;
    }
    else if (city == "TRANI")
    {
        city = "L328";
        finished = true;
    }
    else if (city == "TRANSACQUA")
    {
        city = "L329";
        finished = true;
    }
    else if (city == "TRAONA")
    {
        city = "L330";
        finished = true;
    }
    else if (city == "TRAPANI")
    {
        city = "L331";
        finished = true;
    }
    else if (city == "TRAPPETO")
    {
        city = "L332";
        finished = true;
    }
    else if (city == "TRAREGOVIGGIONA")
    {
        city = "L333";
        finished = true;
    }
    else if (city == "TRASACCO")
    {
        city = "L334";
        finished = true;
    }
    else if (city == "TRASAGHIS")
    {
        city = "L335";
        finished = true;
    }
    else if (city == "TRASQUERA")
    {
        city = "L336";
        finished = true;
    }
    else if (city == "TRATALIAS")
    {
        city = "L337";
        finished = true;
    }
    else if (city == "TRAUSELLA")
    {
        city = "L338";
        finished = true;
    }
    else if (city == "TRAVACO'SICCOMARIO")
    {
        city = "I236";
        finished = true;
    }
    else if (city == "TRAVAGLIATO")
    {
        city = "L339";
        finished = true;
    }
    else if (city == "TRAVEDONA-MONATE")
    {
        city = "L342";
        finished = true;
    }
    else if (city == "TRAVERSELLA")
    {
        city = "L345";
        finished = true;
    }
    else if (city == "TRAVERSETOLO")
    {
        city = "L346";
        finished = true;
    }
    else if (city == "TRAVES")
    {
        city = "L340";
        finished = true;
    }
    else if (city == "TRAVESIO")
    {
        city = "L347";
        finished = true;
    }
    else if (city == "TRAVO")
    {
        city = "L348";
        finished = true;
    }
    else if (city == "TREVILLE")
    {
        city = "M361";
        finished = true;
    }
    else if (city == "TREBASELEGHE")
    {
        city = "L349";
        finished = true;
    }
    else if (city == "TREBISACCE")
    {
        city = "L353";
        finished = true;
    }
    else if (city == "TRECASALI")
    {
        city = "L354";
        finished = true;
    }
    else if (city == "TRECASE")
    {
        city = "M280";
        finished = true;
    }
    else if (city == "TRECASTAGNI")
    {
        city = "L355";
        finished = true;
    }
    else if (city == "TRECASTELLI")
    {
        city = "M318";
        finished = true;
    }
    else if (city == "TRECATE")
    {
        city = "L356";
        finished = true;
    }
    else if (city == "TRECCHINA")
    {
        city = "L357";
        finished = true;
    }
    else if (city == "TRECENTA")
    {
        city = "L359";
        finished = true;
    }
    else if (city == "TREDOZIO")
    {
        city = "L361";
        finished = true;
    }
    else if (city == "TREGLIO")
    {
        city = "L363";
        finished = true;
    }
    else if (city == "TREGNAGO")
    {
        city = "L364";
        finished = true;
    }
    else if (city == "TREIA")
    {
        city = "L366";
        finished = true;
    }
    else if (city == "TREISO")
    {
        city = "L367";
        finished = true;
    }
    else if (city == "TREMENICO")
    {
        city = "L368";
        finished = true;
    }
    else if (city == "TREMESTIERIETNEO")
    {
        city = "L369";
        finished = true;
    }
    else if (city == "TREMEZZINA")
    {
        city = "M341";
        finished = true;
    }
    else if (city == "TREMEZZO")
    {
        city = "L371";
        finished = true;
    }
    else if (city == "TREMOSINESULGARDA")
    {
        city = "L372";
        finished = true;
    }
    else if (city == "TRENTA")
    {
        city = "L375";
        finished = true;
    }
    else if (city == "TRENTINARA")
    {
        city = "L377";
        finished = true;
    }
    else if (city == "TRENTO")
    {
        city = "L378";
        finished = true;
    }
    else if (city == "TRENTOLADUCENTA")
    {
        city = "L379";
        finished = true;
    }
    else if (city == "TRENZANO")
    {
        city = "L380";
        finished = true;
    }
    else if (city == "TREPPOCARNICO")
    {
        city = "L381";
        finished = true;
    }
    else if (city == "TREPPOGRANDE")
    {
        city = "L382";
        finished = true;
    }
    else if (city == "TREPPOLIGOSULLO")
    {
        city = "M399";
        finished = true;
    }
    else if (city == "TREPUZZI")
    {
        city = "L383";
        finished = true;
    }
    else if (city == "TREQUANDA")
    {
        city = "L384";
        finished = true;
    }
    else if (city == "TRES")
    {
        city = "L385";
        finished = true;
    }
    else if (city == "TRESANA")
    {
        city = "L386";
        finished = true;
    }
    else if (city == "TRESCOREBALNEARIO")
    {
        city = "L388";
        finished = true;
    }
    else if (city == "TRESCORECREMASCO")
    {
        city = "L389";
        finished = true;
    }
    else if (city == "TRESIGALLO")
    {
        city = "L390";
        finished = true;
    }
    else if (city == "TRESIGNANA")
    {
        city = "M409";
        finished = true;
    }
    else if (city == "TRESIVIO")
    {
        city = "L392";
        finished = true;
    }
    else if (city == "TRESNURAGHES")
    {
        city = "L393";
        finished = true;
    }
    else if (city == "TREVENZUOLO")
    {
        city = "L396";
        finished = true;
    }
    else if (city == "TREVI")
    {
        city = "L397";
        finished = true;
    }
    else if (city == "TREVINELLAZIO")
    {
        city = "L398";
        finished = true;
    }
    else if (city == "TREVICO")
    {
        city = "L399";
        finished = true;
    }
    else if (city == "TREVIGLIO")
    {
        city = "L400";
        finished = true;
    }
    else if (city == "TREVIGNANO")
    {
        city = "L402";
        finished = true;
    }
    else if (city == "TREVIGNANOROMANO")
    {
        city = "L401";
        finished = true;
    }
    else if (city == "TREVILLE")
    {
        city = "L403";
        finished = true;
    }
    else if (city == "TREVIOLO")
    {
        city = "L404";
        finished = true;
    }
    else if (city == "TREVISO")
    {
        city = "L407";
        finished = true;
    }
    else if (city == "TREVISOBRESCIANO")
    {
        city = "L406";
        finished = true;
    }
    else if (city == "TREZZANOROSA")
    {
        city = "L408";
        finished = true;
    }
    else if (city == "TREZZANOSULNAVIGLIO")
    {
        city = "L409";
        finished = true;
    }
    else if (city == "TREZZOSULL'ADDA")
    {
        city = "L411";
        finished = true;
    }
    else if (city == "TREZZOTINELLA")
    {
        city = "L410";
        finished = true;
    }
    else if (city == "TREZZONE")
    {
        city = "L413";
        finished = true;
    }
    else if (city == "TRIBANO")
    {
        city = "L414";
        finished = true;
    }
    else if (city == "TRIBIANO")
    {
        city = "L415";
        finished = true;
    }
    else if (city == "TRIBOGNA")
    {
        city = "L416";
        finished = true;
    }
    else if (city == "TRICARICO")
    {
        city = "L418";
        finished = true;
    }
    else if (city == "TRICASE")
    {
        city = "L419";
        finished = true;
    }
    else if (city == "TRICERRO")
    {
        city = "L420";
        finished = true;
    }
    else if (city == "TRICESIMO")
    {
        city = "L421";
        finished = true;
    }
    else if (city == "TRICHIANA")
    {
        city = "L422";
        finished = true;
    }
    else if (city == "TRIEI")
    {
        city = "L423";
        finished = true;
    }
    else if (city == "TRIESTE")
    {
        city = "L424";
        finished = true;
    }
    else if (city == "TRIGGIANO")
    {
        city = "L425";
        finished = true;
    }
    else if (city == "TRIGOLO")
    {
        city = "L426";
        finished = true;
    }
    else if (city == "TRINITA'")
    {
        city = "L427";
        finished = true;
    }
    else if (city == "TRINITA'D'AGULTUEVIGNOLA")
    {
        city = "L428";
        finished = true;
    }
    else if (city == "TRINITAPOLI")
    {
        city = "B915";
        finished = true;
    }
    else if (city == "TRINO")
    {
        city = "L429";
        finished = true;
    }
    else if (city == "TRIORA")
    {
        city = "L430";
        finished = true;
    }
    else if (city == "TRIPI")
    {
        city = "L431";
        finished = true;
    }
    else if (city == "TRISOBBIO")
    {
        city = "L432";
        finished = true;
    }
    else if (city == "TRISSINO")
    {
        city = "L433";
        finished = true;
    }
    else if (city == "TRIUGGIO")
    {
        city = "L434";
        finished = true;
    }
    else if (city == "TRIVENTO")
    {
        city = "L435";
        finished = true;
    }
    else if (city == "TRIVERO")
    {
        city = "L436";
        finished = true;
    }
    else if (city == "TRIVIGLIANO")
    {
        city = "L437";
        finished = true;
    }
    else if (city == "TRIVIGNANOUDINESE")
    {
        city = "L438";
        finished = true;
    }
    else if (city == "TRIVIGNO")
    {
        city = "L439";
        finished = true;
    }
    else if (city == "TRIVOLZIO")
    {
        city = "L440";
        finished = true;
    }
    else if (city == "TRODENANELPARCONATURALE.TRUDENIMNATURPA")
    {
        city = "L444";
        finished = true;
    }
    else if (city == "TROFARELLO")
    {
        city = "L445";
        finished = true;
    }
    else if (city == "TROIA")
    {
        city = "L447";
        finished = true;
    }
    else if (city == "TROINA")
    {
        city = "L448";
        finished = true;
    }
    else if (city == "TROMELLO")
    {
        city = "L449";
        finished = true;
    }
    else if (city == "TRONTANO")
    {
        city = "L450";
        finished = true;
    }
    else if (city == "TRONZANOLAGOMAGGIORE")
    {
        city = "A705";
        finished = true;
    }
    else if (city == "TRONZANOVERCELLESE")
    {
        city = "L451";
        finished = true;
    }
    else if (city == "TROPEA")
    {
        city = "L452";
        finished = true;
    }
    else if (city == "TROVO")
    {
        city = "L453";
        finished = true;
    }
    else if (city == "TRUCCAZZANO")
    {
        city = "L454";
        finished = true;
    }
    else if (city == "TUBRE.TAUFERSIMMUENSTERTAL.")
    {
        city = "L455";
        finished = true;
    }
    else if (city == "TUENNO")
    {
        city = "L457";
        finished = true;
    }
    else if (city == "TUFARA")
    {
        city = "L458";
        finished = true;
    }
    else if (city == "TUFILLO")
    {
        city = "L459";
        finished = true;
    }
    else if (city == "TUFINO")
    {
        city = "L460";
        finished = true;
    }
    else if (city == "TUFO")
    {
        city = "L461";
        finished = true;
    }
    else if (city == "TUGLIE")
    {
        city = "L462";
        finished = true;
    }
    else if (city == "TUILI")
    {
        city = "L463";
        finished = true;
    }
    else if (city == "TULA")
    {
        city = "L464";
        finished = true;
    }
    else if (city == "TUOROSULTRASIMENO")
    {
        city = "L466";
        finished = true;
    }
    else if (city == "TURANIA")
    {
        city = "G507";
        finished = true;
    }
    else if (city == "TURANOLODIGIANO")
    {
        city = "L469";
        finished = true;
    }
    else if (city == "TURATE")
    {
        city = "L470";
        finished = true;
    }
    else if (city == "TURBIGO")
    {
        city = "L471";
        finished = true;
    }
    else if (city == "TURI")
    {
        city = "L472";
        finished = true;
    }
    else if (city == "TURRI")
    {
        city = "L473";
        finished = true;
    }
    else if (city == "TURRIACO")
    {
        city = "L474";
        finished = true;
    }
    else if (city == "TURRIVALIGNANI")
    {
        city = "L475";
        finished = true;
    }
    else if (city == "TURSI")
    {
        city = "L477";
        finished = true;
    }
    else if (city == "TUSA")
    {
        city = "L478";
        finished = true;
    }
    else if (city == "TUSCANIA")
    {
        city = "L310";
        finished = true;
    }
    else if (city == "UBIALECLANEZZO")
    {
        city = "C789";
        finished = true;
    }
    else if (city == "UBOLDO")
    {
        city = "L480";
        finished = true;
    }
    else if (city == "UCRIA")
    {
        city = "L482";
        finished = true;
    }
    else if (city == "UDINE")
    {
        city = "L483";
        finished = true;
    }
    else if (city == "UGENTO")
    {
        city = "L484";
        finished = true;
    }
    else if (city == "UGGIANOLACHIESA")
    {
        city = "L485";
        finished = true;
    }
    else if (city == "UGGIATE-TREVANO")
    {
        city = "L487";
        finished = true;
    }
    else if (city == "ULA'TIRSO")
    {
        city = "L488";
        finished = true;
    }
    else if (city == "ULASSAI")
    {
        city = "L489";
        finished = true;
    }
    else if (city == "ULTIMO.ULTEN.")
    {
        city = "L490";
        finished = true;
    }
    else if (city == "UMBERTIDE")
    {
        city = "D786";
        finished = true;
    }
    else if (city == "UMBRIATICO")
    {
        city = "L492";
        finished = true;
    }
    else if (city == "URAGOD'OGLIO")
    {
        city = "L494";
        finished = true;
    }
    else if (city == "URAS")
    {
        city = "L496";
        finished = true;
    }
    else if (city == "URBANA")
    {
        city = "L497";
        finished = true;
    }
    else if (city == "URBANIA")
    {
        city = "L498";
        finished = true;
    }
    else if (city == "URBE")
    {
        city = "L499";
        finished = true;
    }
    else if (city == "URBINO")
    {
        city = "L500";
        finished = true;
    }
    else if (city == "URBISAGLIA")
    {
        city = "L501";
        finished = true;
    }
    else if (city == "URGNANO")
    {
        city = "L502";
        finished = true;
    }
    else if (city == "URI")
    {
        city = "L503";
        finished = true;
    }
    else if (city == "URURI")
    {
        city = "L505";
        finished = true;
    }
    else if (city == "URZULEI")
    {
        city = "L506";
        finished = true;
    }
    else if (city == "USCIO")
    {
        city = "L507";
        finished = true;
    }
    else if (city == "USELLUS")
    {
        city = "L508";
        finished = true;
    }
    else if (city == "USINI")
    {
        city = "L509";
        finished = true;
    }
    else if (city == "USMATEVELATE")
    {
        city = "L511";
        finished = true;
    }
    else if (city == "USSANA")
    {
        city = "L512";
        finished = true;
    }
    else if (city == "USSARAMANNA")
    {
        city = "L513";
        finished = true;
    }
    else if (city == "USSASSAI")
    {
        city = "L514";
        finished = true;
    }
    else if (city == "USSEAUX")
    {
        city = "L515";
        finished = true;
    }
    else if (city == "USSEGLIO")
    {
        city = "L516";
        finished = true;
    }
    else if (city == "USSITA")
    {
        city = "L517";
        finished = true;
    }
    else if (city == "USTICA")
    {
        city = "L519";
        finished = true;
    }
    else if (city == "UTA")
    {
        city = "L521";
        finished = true;
    }
    else if (city == "UZZANO")
    {
        city = "L522";
        finished = true;
    }
    else if (city == "VACCARIZZOALBANESE")
    {
        city = "L524";
        finished = true;
    }
    else if (city == "VACONE")
    {
        city = "L525";
        finished = true;
    }
    else if (city == "VACRI")
    {
        city = "L526";
        finished = true;
    }
    else if (city == "VADENA.PFATTEN.")
    {
        city = "L527";
        finished = true;
    }
    else if (city == "VADOLIGURE")
    {
        city = "L528";
        finished = true;
    }
    else if (city == "VAGLISOTTO")
    {
        city = "L533";
        finished = true;
    }
    else if (city == "VAGLIA")
    {
        city = "L529";
        finished = true;
    }
    else if (city == "VAGLIOBASILICATA")
    {
        city = "L532";
        finished = true;
    }
    else if (city == "VAGLIOSERRA")
    {
        city = "L531";
        finished = true;
    }
    else if (city == "VAIANO")
    {
        city = "L537";
        finished = true;
    }
    else if (city == "VAIANOCREMASCO")
    {
        city = "L535";
        finished = true;
    }
    else if (city == "VAIE")
    {
        city = "L538";
        finished = true;
    }
    else if (city == "VAILATE")
    {
        city = "L539";
        finished = true;
    }
    else if (city == "VAIRANOPATENORA")
    {
        city = "L540";
        finished = true;
    }
    else if (city == "VAJONT")
    {
        city = "M265";
        finished = true;
    }
    else if (city == "VALBREMBILLA")
    {
        city = "M334";
        finished = true;
    }
    else if (city == "VALDELLATORRE")
    {
        city = "L555";
        finished = true;
    }
    else if (city == "VALDICHY")
    {
        city = "M405";
        finished = true;
    }
    else if (city == "VALDINIZZA")
    {
        city = "L562";
        finished = true;
    }
    else if (city == "VALDIVIZZE.PFITSCH.")
    {
        city = "L564";
        finished = true;
    }
    else if (city == "VALDIZOLDO")
    {
        city = "M374";
        finished = true;
    }
    else if (city == "VALLIONA")
    {
        city = "M384";
        finished = true;
    }
    else if (city == "VALMASINO")
    {
        city = "L638";
        finished = true;
    }
    else if (city == "VALREZZO")
    {
        city = "H259";
        finished = true;
    }
    else if (city == "VALBONDIONE")
    {
        city = "L544";
        finished = true;
    }
    else if (city == "VALBREMBO")
    {
        city = "L545";
        finished = true;
    }
    else if (city == "VALBRENTA")
    {
        city = "M423";
        finished = true;
    }
    else if (city == "VALBREVENNA")
    {
        city = "L546";
        finished = true;
    }
    else if (city == "VALBRONA")
    {
        city = "L547";
        finished = true;
    }
    else if (city == "VALCHIUSA")
    {
        city = "M415";
        finished = true;
    }
    else if (city == "VALDA")
    {
        city = "L550";
        finished = true;
    }
    else if (city == "VALDAGNO")
    {
        city = "L551";
        finished = true;
    }
    else if (city == "VALDAONE")
    {
        city = "M343";
        finished = true;
    }
    else if (city == "VALDAORA.OLANG.")
    {
        city = "L552";
        finished = true;
    }
    else if (city == "VALDASTICO")
    {
        city = "L554";
        finished = true;
    }
    else if (city == "VALDENGO")
    {
        city = "L556";
        finished = true;
    }
    else if (city == "VALDERICE")
    {
        city = "G319";
        finished = true;
    }
    else if (city == "VALDIDENTRO")
    {
        city = "L557";
        finished = true;
    }
    else if (city == "VALDIERI")
    {
        city = "L558";
        finished = true;
    }
    else if (city == "VALDILANA")
    {
        city = "M417";
        finished = true;
    }
    else if (city == "VALDINA")
    {
        city = "L561";
        finished = true;
    }
    else if (city == "VALDISOTTO")
    {
        city = "L563";
        finished = true;
    }
    else if (city == "VALDOBBIADENE")
    {
        city = "L565";
        finished = true;
    }
    else if (city == "VALDUGGIA")
    {
        city = "L566";
        finished = true;
    }
    else if (city == "VALEGGIO")
    {
        city = "L568";
        finished = true;
    }
    else if (city == "VALEGGIOSULMINCIO")
    {
        city = "L567";
        finished = true;
    }
    else if (city == "VALENTANO")
    {
        city = "L569";
        finished = true;
    }
    else if (city == "VALENZA")
    {
        city = "L570";
        finished = true;
    }
    else if (city == "VALENZANO")
    {
        city = "L571";
        finished = true;
    }
    else if (city == "VALERAFRATTA")
    {
        city = "L572";
        finished = true;
    }
    else if (city == "VALFABBRICA")
    {
        city = "L573";
        finished = true;
    }
    else if (city == "VALFENERA")
    {
        city = "L574";
        finished = true;
    }
    else if (city == "VALFLORIANA")
    {
        city = "L575";
        finished = true;
    }
    else if (city == "VALFORNACE")
    {
        city = "M382";
        finished = true;
    }
    else if (city == "VALFURVA")
    {
        city = "L576";
        finished = true;
    }
    else if (city == "VALGANNA")
    {
        city = "L577";
        finished = true;
    }
    else if (city == "VALGIOIE")
    {
        city = "L578";
        finished = true;
    }
    else if (city == "VALGOGLIO")
    {
        city = "L579";
        finished = true;
    }
    else if (city == "VALGRANA")
    {
        city = "L580";
        finished = true;
    }
    else if (city == "VALGREGHENTINO")
    {
        city = "L581";
        finished = true;
    }
    else if (city == "VALGRISENCHE")
    {
        city = "L582";
        finished = true;
    }
    else if (city == "VALGUARNERACAROPEPE")
    {
        city = "L583";
        finished = true;
    }
    else if (city == "VALLADAAGORDINA")
    {
        city = "L584";
        finished = true;
    }
    else if (city == "VALLANZENGO")
    {
        city = "L586";
        finished = true;
    }
    else if (city == "VALLARSA")
    {
        city = "L588";
        finished = true;
    }
    else if (city == "VALLATA")
    {
        city = "L589";
        finished = true;
    }
    else if (city == "VALLEAGRICOLA")
    {
        city = "L594";
        finished = true;
    }
    else if (city == "VALLEAURINA.AHRNTAL.")
    {
        city = "L595";
        finished = true;
    }
    else if (city == "VALLECANNOBINA")
    {
        city = "M404";
        finished = true;
    }
    else if (city == "VALLECASTELLANA")
    {
        city = "L597";
        finished = true;
    }
    else if (city == "VALLEDELL'ANGELO")
    {
        city = "G540";
        finished = true;
    }
    else if (city == "VALLEDICADORE")
    {
        city = "L590";
        finished = true;
    }
    else if (city == "VALLEDICASIES.GSIES.")
    {
        city = "L601";
        finished = true;
    }
    else if (city == "VALLEDIMADDALONI")
    {
        city = "L591";
        finished = true;
    }
    else if (city == "VALLELOMELLINA")
    {
        city = "L593";
        finished = true;
    }
    else if (city == "VALLEMOSSO")
    {
        city = "L606";
        finished = true;
    }
    else if (city == "VALLESALIMBENE")
    {
        city = "L617";
        finished = true;
    }
    else if (city == "VALLESANNICOLAO")
    {
        city = "L620";
        finished = true;
    }
    else if (city == "VALLEBONA")
    {
        city = "L596";
        finished = true;
    }
    else if (city == "VALLECORSA")
    {
        city = "L598";
        finished = true;
    }
    else if (city == "VALLECROSIA")
    {
        city = "L599";
        finished = true;
    }
    else if (city == "VALLEDOLMO")
    {
        city = "L603";
        finished = true;
    }
    else if (city == "VALLEDORIA")
    {
        city = "L604";
        finished = true;
    }
    else if (city == "VALLEFIORITA")
    {
        city = "I322";
        finished = true;
    }
    else if (city == "VALLEFOGLIA")
    {
        city = "M331";
        finished = true;
    }
    else if (city == "VALLELAGHI")
    {
        city = "M362";
        finished = true;
    }
    else if (city == "VALLELONGA")
    {
        city = "L607";
        finished = true;
    }
    else if (city == "VALLELUNGAPRATAMENO")
    {
        city = "L609";
        finished = true;
    }
    else if (city == "VALLEMAIO")
    {
        city = "L605";
        finished = true;
    }
    else if (city == "VALLEPIETRA")
    {
        city = "L611";
        finished = true;
    }
    else if (city == "VALLERANO")
    {
        city = "L612";
        finished = true;
    }
    else if (city == "VALLERMOSA")
    {
        city = "L613";
        finished = true;
    }
    else if (city == "VALLEROTONDA")
    {
        city = "L614";
        finished = true;
    }
    else if (city == "VALLESACCARDA")
    {
        city = "L616";
        finished = true;
    }
    else if (city == "VALLEVE")
    {
        city = "L623";
        finished = true;
    }
    else if (city == "VALLIDELPASUBIO")
    {
        city = "L624";
        finished = true;
    }
    else if (city == "VALLINFREDA")
    {
        city = "L625";
        finished = true;
    }
    else if (city == "VALLIOTERME")
    {
        city = "L626";
        finished = true;
    }
    else if (city == "VALLODELLALUCANIA")
    {
        city = "L628";
        finished = true;
    }
    else if (city == "VALLODINERA")
    {
        city = "L627";
        finished = true;
    }
    else if (city == "VALLOTORINESE")
    {
        city = "L629";
        finished = true;
    }
    else if (city == "VALLORIATE")
    {
        city = "L631";
        finished = true;
    }
    else if (city == "VALMACCA")
    {
        city = "L633";
        finished = true;
    }
    else if (city == "VALMADRERA")
    {
        city = "L634";
        finished = true;
    }
    else if (city == "VALMALA")
    {
        city = "L636";
        finished = true;
    }
    else if (city == "VALMONTONE")
    {
        city = "L639";
        finished = true;
    }
    else if (city == "VALMOREA")
    {
        city = "L640";
        finished = true;
    }
    else if (city == "VALMOZZOLA")
    {
        city = "L641";
        finished = true;
    }
    else if (city == "VALNEGRA")
    {
        city = "L642";
        finished = true;
    }
    else if (city == "VALPELLINE")
    {
        city = "L643";
        finished = true;
    }
    else if (city == "VALPERGA")
    {
        city = "L644";
        finished = true;
    }
    else if (city == "VALPRATOSOANA")
    {
        city = "B510";
        finished = true;
    }
    else if (city == "VALSAMOGGIA")
    {
        city = "M320";
        finished = true;
    }
    else if (city == "VALSAVARENCHE")
    {
        city = "L647";
        finished = true;
    }
    else if (city == "VALSECCA")
    {
        city = "L649";
        finished = true;
    }
    else if (city == "VALSINNI")
    {
        city = "D513";
        finished = true;
    }
    else if (city == "VALSOLDA")
    {
        city = "C936";
        finished = true;
    }
    else if (city == "VALSTAGNA")
    {
        city = "L650";
        finished = true;
    }
    else if (city == "VALSTRONA")
    {
        city = "L651";
        finished = true;
    }
    else if (city == "VALTOPINA")
    {
        city = "L653";
        finished = true;
    }
    else if (city == "VALTORTA")
    {
        city = "L655";
        finished = true;
    }
    else if (city == "VALTOURNENCHE")
    {
        city = "L654";
        finished = true;
    }
    else if (city == "VALVA")
    {
        city = "L656";
        finished = true;
    }
    else if (city == "VALVARRONE")
    {
        city = "M395";
        finished = true;
    }
    else if (city == "VALVASONE")
    {
        city = "L657";
        finished = true;
    }
    else if (city == "VALVASONEARZENE")
    {
        city = "M346";
        finished = true;
    }
    else if (city == "VALVERDE")
    {
        city = "L658";
        finished = true;
    }
    else if (city == "VALVERDE")
    {
        city = "L659";
        finished = true;
    }
    else if (city == "VALVESTINO")
    {
        city = "L468";
        finished = true;
    }
    else if (city == "VANDOIES.VINTL.")
    {
        city = "L660";
        finished = true;
    }
    else if (city == "VANZAGHELLO")
    {
        city = "L664";
        finished = true;
    }
    else if (city == "VANZAGO")
    {
        city = "L665";
        finished = true;
    }
    else if (city == "VANZONECONSANCARLO")
    {
        city = "L666";
        finished = true;
    }
    else if (city == "VAPRIOD'ADDA")
    {
        city = "L667";
        finished = true;
    }
    else if (city == "VAPRIOD'AGOGNA")
    {
        city = "L668";
        finished = true;
    }
    else if (city == "VARALLO")
    {
        city = "L669";
        finished = true;
    }
    else if (city == "VARALLOPOMBIA")
    {
        city = "L670";
        finished = true;
    }
    else if (city == "VARANOBORGHI")
    {
        city = "L671";
        finished = true;
    }
    else if (city == "VARANODE'MELEGARI")
    {
        city = "L672";
        finished = true;
    }
    else if (city == "VARAPODIO")
    {
        city = "L673";
        finished = true;
    }
    else if (city == "VARAZZE")
    {
        city = "L675";
        finished = true;
    }
    else if (city == "VARCOSABINO")
    {
        city = "L676";
        finished = true;
    }
    else if (city == "VAREDO")
    {
        city = "L677";
        finished = true;
    }
    else if (city == "VARENA")
    {
        city = "L678";
        finished = true;
    }
    else if (city == "VARENNA")
    {
        city = "L680";
        finished = true;
    }
    else if (city == "VARESE")
    {
        city = "L682";
        finished = true;
    }
    else if (city == "VARESELIGURE")
    {
        city = "L681";
        finished = true;
    }
    else if (city == "VARISELLA")
    {
        city = "L685";
        finished = true;
    }
    else if (city == "VARMO")
    {
        city = "L686";
        finished = true;
    }
    else if (city == "VARNA.VAHRN.")
    {
        city = "L687";
        finished = true;
    }
    else if (city == "VARSI")
    {
        city = "L689";
        finished = true;
    }
    else if (city == "VARZI")
    {
        city = "L690";
        finished = true;
    }
    else if (city == "VARZO")
    {
        city = "L691";
        finished = true;
    }
    else if (city == "VAS")
    {
        city = "L692";
        finished = true;
    }
    else if (city == "VASANELLO")
    {
        city = "A701";
        finished = true;
    }
    else if (city == "VASIA")
    {
        city = "L693";
        finished = true;
    }
    else if (city == "VASTO")
    {
        city = "E372";
        finished = true;
    }
    else if (city == "VASTOGIRARDI")
    {
        city = "L696";
        finished = true;
    }
    else if (city == "VATTARO")
    {
        city = "L697";
        finished = true;
    }
    else if (city == "VAUDACANAVESE")
    {
        city = "L698";
        finished = true;
    }
    else if (city == "VAZZANO")
    {
        city = "L699";
        finished = true;
    }
    else if (city == "VAZZOLA")
    {
        city = "L700";
        finished = true;
    }
    else if (city == "VECCHIANO")
    {
        city = "L702";
        finished = true;
    }
    else if (city == "VEDANOALLAMBRO")
    {
        city = "L704";
        finished = true;
    }
    else if (city == "VEDANOOLONA")
    {
        city = "L703";
        finished = true;
    }
    else if (city == "VEDDASCA")
    {
        city = "L705";
        finished = true;
    }
    else if (city == "VEDELAGO")
    {
        city = "L706";
        finished = true;
    }
    else if (city == "VEDESETA")
    {
        city = "L707";
        finished = true;
    }
    else if (city == "VEDUGGIOCONCOLZANO")
    {
        city = "L709";
        finished = true;
    }
    else if (city == "VEGGIANO")
    {
        city = "L710";
        finished = true;
    }
    else if (city == "VEGLIE")
    {
        city = "L711";
        finished = true;
    }
    else if (city == "VEGLIO")
    {
        city = "L712";
        finished = true;
    }
    else if (city == "VEJANO")
    {
        city = "L713";
        finished = true;
    }
    else if (city == "VELESO")
    {
        city = "L715";
        finished = true;
    }
    else if (city == "VELEZZOLOMELLINA")
    {
        city = "L716";
        finished = true;
    }
    else if (city == "VELLETRI")
    {
        city = "L719";
        finished = true;
    }
    else if (city == "VELLEZZOBELLINI")
    {
        city = "L720";
        finished = true;
    }
    else if (city == "VELOD'ASTICO")
    {
        city = "L723";
        finished = true;
    }
    else if (city == "VELOVERONESE")
    {
        city = "L722";
        finished = true;
    }
    else if (city == "VELTURNO.FELDTHURNS.")
    {
        city = "L724";
        finished = true;
    }
    else if (city == "VENAFRO")
    {
        city = "L725";
        finished = true;
    }
    else if (city == "VENARIAREALE")
    {
        city = "L727";
        finished = true;
    }
    else if (city == "VENAROTTA")
    {
        city = "L728";
        finished = true;
    }
    else if (city == "VENASCA")
    {
        city = "L729";
        finished = true;
    }
    else if (city == "VENAUS")
    {
        city = "L726";
        finished = true;
    }
    else if (city == "VENDONE")
    {
        city = "L730";
        finished = true;
    }
    else if (city == "VENDROGNO")
    {
        city = "L731";
        finished = true;
    }
    else if (city == "VENEGONOINFERIORE")
    {
        city = "L733";
        finished = true;
    }
    else if (city == "VENEGONOSUPERIORE")
    {
        city = "L734";
        finished = true;
    }
    else if (city == "VENETICO")
    {
        city = "L735";
        finished = true;
    }
    else if (city == "VENEZIA")
    {
        city = "L736";
        finished = true;
    }
    else if (city == "VENIANO")
    {
        city = "L737";
        finished = true;
    }
    else if (city == "VENOSA")
    {
        city = "L738";
        finished = true;
    }
    else if (city == "VENTASSO")
    {
        city = "M364";
        finished = true;
    }
    else if (city == "VENTICANO")
    {
        city = "L739";
        finished = true;
    }
    else if (city == "VENTIMIGLIA")
    {
        city = "L741";
        finished = true;
    }
    else if (city == "VENTIMIGLIADISICILIA")
    {
        city = "L740";
        finished = true;
    }
    else if (city == "VENTOTENE")
    {
        city = "L742";
        finished = true;
    }
    else if (city == "VENZONE")
    {
        city = "L743";
        finished = true;
    }
    else if (city == "VERANOBRIANZA")
    {
        city = "L744";
        finished = true;
    }
    else if (city == "VERANO.VOERAN.")
    {
        city = "L745";
        finished = true;
    }
    else if (city == "VERBANIA")
    {
        city = "L746";
        finished = true;
    }
    else if (city == "VERBICARO")
    {
        city = "L747";
        finished = true;
    }
    else if (city == "VERCANA")
    {
        city = "L748";
        finished = true;
    }
    else if (city == "VERCEIA")
    {
        city = "L749";
        finished = true;
    }
    else if (city == "VERCELLI")
    {
        city = "L750";
        finished = true;
    }
    else if (city == "VERCURAGO")
    {
        city = "L751";
        finished = true;
    }
    else if (city == "VERDELLINO")
    {
        city = "L752";
        finished = true;
    }
    else if (city == "VERDELLO")
    {
        city = "L753";
        finished = true;
    }
    else if (city == "VERDERIO")
    {
        city = "M337";
        finished = true;
    }
    else if (city == "VERDERIOINFERIORE")
    {
        city = "L755";
        finished = true;
    }
    else if (city == "VERDERIOSUPERIORE")
    {
        city = "L756";
        finished = true;
    }
    else if (city == "VERDUNO")
    {
        city = "L758";
        finished = true;
    }
    else if (city == "VERGATO")
    {
        city = "L762";
        finished = true;
    }
    else if (city == "VERGEMOLI")
    {
        city = "L763";
        finished = true;
    }
    else if (city == "VERGHERETO")
    {
        city = "L764";
        finished = true;
    }
    else if (city == "VERGIATE")
    {
        city = "L765";
        finished = true;
    }
    else if (city == "VERMEZZO")
    {
        city = "L768";
        finished = true;
    }
    else if (city == "VERMEZZOCONZELO")
    {
        city = "M424";
        finished = true;
    }
    else if (city == "VERMIGLIO")
    {
        city = "L769";
        finished = true;
    }
    else if (city == "VERNANTE")
    {
        city = "L771";
        finished = true;
    }
    else if (city == "VERNASCA")
    {
        city = "L772";
        finished = true;
    }
    else if (city == "VERNATE")
    {
        city = "L773";
        finished = true;
    }
    else if (city == "VERNAZZA")
    {
        city = "L774";
        finished = true;
    }
    else if (city == "VERNIO")
    {
        city = "L775";
        finished = true;
    }
    else if (city == "VERNOLE")
    {
        city = "L776";
        finished = true;
    }
    else if (city == "VEROLANUOVA")
    {
        city = "L777";
        finished = true;
    }
    else if (city == "VEROLAVECCHIA")
    {
        city = "L778";
        finished = true;
    }
    else if (city == "VEROLENGO")
    {
        city = "L779";
        finished = true;
    }
    else if (city == "VEROLI")
    {
        city = "L780";
        finished = true;
    }
    else if (city == "VERONA")
    {
        city = "L781";
        finished = true;
    }
    else if (city == "VERONELLA")
    {
        city = "D193";
        finished = true;
    }
    else if (city == "VERRAYES")
    {
        city = "L783";
        finished = true;
    }
    else if (city == "VERRES")
    {
        city = "C282";
        finished = true;
    }
    else if (city == "VERRETTO")
    {
        city = "L784";
        finished = true;
    }
    else if (city == "VERRONE")
    {
        city = "L785";
        finished = true;
    }
    else if (city == "VERRUAPO")
    {
        city = "L788";
        finished = true;
    }
    else if (city == "VERRUASAVOIA")
    {
        city = "L787";
        finished = true;
    }
    else if (city == "VERTEMATECONMINOPRIO")
    {
        city = "L792";
        finished = true;
    }
    else if (city == "VERTOVA")
    {
        city = "L795";
        finished = true;
    }
    else if (city == "VERUCCHIO")
    {
        city = "L797";
        finished = true;
    }
    else if (city == "VERUNO")
    {
        city = "L798";
        finished = true;
    }
    else if (city == "VERVIO")
    {
        city = "L799";
        finished = true;
    }
    else if (city == "VERVO'")
    {
        city = "L800";
        finished = true;
    }
    else if (city == "VERZEGNIS")
    {
        city = "L801";
        finished = true;
    }
    else if (city == "VERZINO")
    {
        city = "L802";
        finished = true;
    }
    else if (city == "VERZUOLO")
    {
        city = "L804";
        finished = true;
    }
    else if (city == "VESCOVANA")
    {
        city = "L805";
        finished = true;
    }
    else if (city == "VESCOVATO")
    {
        city = "L806";
        finished = true;
    }
    else if (city == "VESIME")
    {
        city = "L807";
        finished = true;
    }
    else if (city == "VESPOLATE")
    {
        city = "L808";
        finished = true;
    }
    else if (city == "VESSALICO")
    {
        city = "L809";
        finished = true;
    }
    else if (city == "VESTENANOVA")
    {
        city = "L810";
        finished = true;
    }
    else if (city == "VESTIGNE'")
    {
        city = "L811";
        finished = true;
    }
    else if (city == "VESTONE")
    {
        city = "L812";
        finished = true;
    }
    else if (city == "VESTRENO")
    {
        city = "L813";
        finished = true;
    }
    else if (city == "VETRALLA")
    {
        city = "L814";
        finished = true;
    }
    else if (city == "VETTO")
    {
        city = "L815";
        finished = true;
    }
    else if (city == "VEZZAD'ALBA")
    {
        city = "L817";
        finished = true;
    }
    else if (city == "VEZZAD'OGLIO")
    {
        city = "L816";
        finished = true;
    }
    else if (city == "VEZZANO")
    {
        city = "L821";
        finished = true;
    }
    else if (city == "VEZZANOLIGURE")
    {
        city = "L819";
        finished = true;
    }
    else if (city == "VEZZANOSULCROSTOLO")
    {
        city = "L820";
        finished = true;
    }
    else if (city == "VEZZIPORTIO")
    {
        city = "L823";
        finished = true;
    }
    else if (city == "VIADANA")
    {
        city = "L826";
        finished = true;
    }
    else if (city == "VIADANICA")
    {
        city = "L827";
        finished = true;
    }
    else if (city == "VIAGRANDE")
    {
        city = "L828";
        finished = true;
    }
    else if (city == "VIALE")
    {
        city = "L829";
        finished = true;
    }
    else if (city == "VIALFRE'")
    {
        city = "L830";
        finished = true;
    }
    else if (city == "VIANO")
    {
        city = "L831";
        finished = true;
    }
    else if (city == "VIAREGGIO")
    {
        city = "L833";
        finished = true;
    }
    else if (city == "VIARIGI")
    {
        city = "L834";
        finished = true;
    }
    else if (city == "VIBOVALENTIA")
    {
        city = "F537";
        finished = true;
    }
    else if (city == "VIBONATI")
    {
        city = "L835";
        finished = true;
    }
    else if (city == "VICALVI")
    {
        city = "L836";
        finished = true;
    }
    else if (city == "VICARI")
    {
        city = "L837";
        finished = true;
    }
    else if (city == "VICCHIO")
    {
        city = "L838";
        finished = true;
    }
    else if (city == "VICENZA")
    {
        city = "L840";
        finished = true;
    }
    else if (city == "VICOCANAVESE")
    {
        city = "L548";
        finished = true;
    }
    else if (city == "VICODELGARGANO")
    {
        city = "L842";
        finished = true;
    }
    else if (city == "VICOEQUENSE")
    {
        city = "L845";
        finished = true;
    }
    else if (city == "VICONELLAZIO")
    {
        city = "L843";
        finished = true;
    }
    else if (city == "VICOFORTE")
    {
        city = "L841";
        finished = true;
    }
    else if (city == "VICOLI")
    {
        city = "L846";
        finished = true;
    }
    else if (city == "VICOLUNGO")
    {
        city = "L847";
        finished = true;
    }
    else if (city == "VICOPISANO")
    {
        city = "L850";
        finished = true;
    }
    else if (city == "VICOVARO")
    {
        city = "L851";
        finished = true;
    }
    else if (city == "VIDDALBA")
    {
        city = "M259";
        finished = true;
    }
    else if (city == "VIDIGULFO")
    {
        city = "L854";
        finished = true;
    }
    else if (city == "VIDOR")
    {
        city = "L856";
        finished = true;
    }
    else if (city == "VIDRACCO")
    {
        city = "L857";
        finished = true;
    }
    else if (city == "VIESTE")
    {
        city = "L858";
        finished = true;
    }
    else if (city == "VIETRIDIPOTENZA")
    {
        city = "L859";
        finished = true;
    }
    else if (city == "VIETRISULMARE")
    {
        city = "L860";
        finished = true;
    }
    else if (city == "VIGANELLA")
    {
        city = "L864";
        finished = true;
    }
    else if (city == "VIGANO'")
    {
        city = "L866";
        finished = true;
    }
    else if (city == "VIGANOSANMARTINO")
    {
        city = "L865";
        finished = true;
    }
    else if (city == "VIGARANOMAINARDA")
    {
        city = "L868";
        finished = true;
    }
    else if (city == "VIGASIO")
    {
        city = "L869";
        finished = true;
    }
    else if (city == "VIGEVANO")
    {
        city = "L872";
        finished = true;
    }
    else if (city == "VIGGIANELLO")
    {
        city = "L873";
        finished = true;
    }
    else if (city == "VIGGIANO")
    {
        city = "L874";
        finished = true;
    }
    else if (city == "VIGGIU'")
    {
        city = "L876";
        finished = true;
    }
    else if (city == "VIGHIZZOLOD'ESTE")
    {
        city = "L878";
        finished = true;
    }
    else if (city == "VIGLIANOBIELLESE")
    {
        city = "L880";
        finished = true;
    }
    else if (city == "VIGLIANOD'ASTI")
    {
        city = "L879";
        finished = true;
    }
    else if (city == "VIGNALEMONFERRATO")
    {
        city = "L881";
        finished = true;
    }
    else if (city == "VIGNANELLO")
    {
        city = "L882";
        finished = true;
    }
    else if (city == "VIGNATE")
    {
        city = "L883";
        finished = true;
    }
    else if (city == "VIGNOLA")
    {
        city = "L885";
        finished = true;
    }
    else if (city == "VIGNOLAFALESINA")
    {
        city = "L886";
        finished = true;
    }
    else if (city == "VIGNOLEBORBERA")
    {
        city = "L887";
        finished = true;
    }
    else if (city == "VIGNOLO")
    {
        city = "L888";
        finished = true;
    }
    else if (city == "VIGNONE")
    {
        city = "L889";
        finished = true;
    }
    else if (city == "VIGODICADORE")
    {
        city = "L890";
        finished = true;
    }
    else if (city == "VIGODelse ifASSA")
    {
        city = "L893";
        finished = true;
    }
    else if (city == "VIGORENDENA")
    {
        city = "L903";
        finished = true;
    }
    else if (city == "VIGODARZERE")
    {
        city = "L892";
        finished = true;
    }
    else if (city == "VIGOLO")
    {
        city = "L894";
        finished = true;
    }
    else if (city == "VIGOLOVATTARO")
    {
        city = "L896";
        finished = true;
    }
    else if (city == "VIGOLZONE")
    {
        city = "L897";
        finished = true;
    }
    else if (city == "VIGONE")
    {
        city = "L898";
        finished = true;
    }
    else if (city == "VIGONOVO")
    {
        city = "L899";
        finished = true;
    }
    else if (city == "VIGONZA")
    {
        city = "L900";
        finished = true;
    }
    else if (city == "VIGUZZOLO")
    {
        city = "L904";
        finished = true;
    }
    else if (city == "VILLAAGNEDO")
    {
        city = "L910";
        finished = true;
    }
    else if (city == "VILLABARTOLOMEA")
    {
        city = "L912";
        finished = true;
    }
    else if (city == "VILLABASILICA")
    {
        city = "L913";
        finished = true;
    }
    else if (city == "VILLABISCOSSI")
    {
        city = "L917";
        finished = true;
    }
    else if (city == "VILLACARCINA")
    {
        city = "L919";
        finished = true;
    }
    else if (city == "VILLACASTELLI")
    {
        city = "L920";
        finished = true;
    }
    else if (city == "VILLACELIERA")
    {
        city = "L922";
        finished = true;
    }
    else if (city == "VILLACOLLEMANDINA")
    {
        city = "L926";
        finished = true;
    }
    else if (city == "VILLACORTESE")
    {
        city = "L928";
        finished = true;
    }
    else if (city == "VILLAD'ADDA")
    {
        city = "L929";
        finished = true;
    }
    else if (city == "VILLAD'ALME'")
    {
        city = "A215";
        finished = true;
    }
    else if (city == "VILLADELBOSCO")
    {
        city = "L933";
        finished = true;
    }
    else if (city == "VILLADELCONTE")
    {
        city = "L934";
        finished = true;
    }
    else if (city == "VILLADIBRIANO")
    {
        city = "D801";
        finished = true;
    }
    else if (city == "VILLADICHIAVENNA")
    {
        city = "L907";
        finished = true;
    }
    else if (city == "VILLADISERIO")
    {
        city = "L936";
        finished = true;
    }
    else if (city == "VILLADITIRANO")
    {
        city = "L908";
        finished = true;
    }
    else if (city == "VILLAD'OGNA")
    {
        city = "L938";
        finished = true;
    }
    else if (city == "VILLAESTENSE")
    {
        city = "L937";
        finished = true;
    }
    else if (city == "VILLAFARALDI")
    {
        city = "L943";
        finished = true;
    }
    else if (city == "VILLAGUARDIA")
    {
        city = "L956";
        finished = true;
    }
    else if (city == "VILLALAGARINA")
    {
        city = "L957";
        finished = true;
    }
    else if (city == "VILLALATINA")
    {
        city = "A081";
        finished = true;
    }
    else if (city == "VILLALITERNO")
    {
        city = "L844";
        finished = true;
    }
    else if (city == "VILLAMINOZZO")
    {
        city = "L969";
        finished = true;
    }
    else if (city == "VILLAPOMA")
    {
        city = "F804";
        finished = true;
    }
    else if (city == "VILLARENDENA")
    {
        city = "M006";
        finished = true;
    }
    else if (city == "VILLASANGIOVANNI")
    {
        city = "M018";
        finished = true;
    }
    else if (city == "VILLASANGIOVANNIINTUSCIA")
    {
        city = "H913";
        finished = true;
    }
    else if (city == "VILLASANPIETRO")
    {
        city = "I118";
        finished = true;
    }
    else if (city == "VILLASANSECONDO")
    {
        city = "M019";
        finished = true;
    }
    else if (city == "VILLASANTALUCIA")
    {
        city = "L905";
        finished = true;
    }
    else if (city == "VILLASANTALUCIADEGLIABRUZZI")
    {
        city = "M021";
        finished = true;
    }
    else if (city == "VILLASANTAMARIA")
    {
        city = "M022";
        finished = true;
    }
    else if (city == "VILLASANT'ANGELO")
    {
        city = "M023";
        finished = true;
    }
    else if (city == "VILLASANT'ANTONIO")
    {
        city = "I298";
        finished = true;
    }
    else if (city == "VILLASANTINA")
    {
        city = "L909";
        finished = true;
    }
    else if (city == "VILLASANTOSTEFANO")
    {
        city = "I364";
        finished = true;
    }
    else if (city == "VILLAVERDE")
    {
        city = "A609";
        finished = true;
    }
    else if (city == "VILLAVICENTINA")
    {
        city = "M034";
        finished = true;
    }
    else if (city == "VILLABASSA.NIEDERDORF.")
    {
        city = "L915";
        finished = true;
    }
    else if (city == "VILLABATE")
    {
        city = "L916";
        finished = true;
    }
    else if (city == "VILLACHIARA")
    {
        city = "L923";
        finished = true;
    }
    else if (city == "VILLACIDRO")
    {
        city = "L924";
        finished = true;
    }
    else if (city == "VILLADEATI")
    {
        city = "L931";
        finished = true;
    }
    else if (city == "VILLADOSE")
    {
        city = "L939";
        finished = true;
    }
    else if (city == "VILLADOSSOLA")
    {
        city = "L906";
        finished = true;
    }
    else if (city == "VILLAFALLETTO")
    {
        city = "L942";
        finished = true;
    }
    else if (city == "VILLAFRANCAD'ASTI")
    {
        city = "L945";
        finished = true;
    }
    else if (city == "VILLAFRANCADIVERONA")
    {
        city = "L949";
        finished = true;
    }
    else if (city == "VILLAFRANCAINLUNIGIANA")
    {
        city = "L946";
        finished = true;
    }
    else if (city == "VILLAFRANCAPADOVANA")
    {
        city = "L947";
        finished = true;
    }
    else if (city == "VILLAFRANCAPIEMONTE")
    {
        city = "L948";
        finished = true;
    }
    else if (city == "VILLAFRANCASICULA")
    {
        city = "L944";
        finished = true;
    }
    else if (city == "VILLAFRANCATIRRENA")
    {
        city = "L950";
        finished = true;
    }
    else if (city == "VILLAFRATI")
    {
        city = "L951";
        finished = true;
    }
    else if (city == "VILLAGA")
    {
        city = "L952";
        finished = true;
    }
    else if (city == "VILLAGRANDESTRISAILI")
    {
        city = "L953";
        finished = true;
    }
    else if (city == "VILLALAGO")
    {
        city = "L958";
        finished = true;
    }
    else if (city == "VILLALBA")
    {
        city = "L959";
        finished = true;
    }
    else if (city == "VILLALFONSINA")
    {
        city = "L961";
        finished = true;
    }
    else if (city == "VILLALVERNIA")
    {
        city = "L963";
        finished = true;
    }
    else if (city == "VILLAMAGNA")
    {
        city = "L964";
        finished = true;
    }
    else if (city == "VILLAMAINA")
    {
        city = "L965";
        finished = true;
    }
    else if (city == "VILLAMAR")
    {
        city = "L966";
        finished = true;
    }
    else if (city == "VILLAMARZANA")
    {
        city = "L967";
        finished = true;
    }
    else if (city == "VILLAMASSARGIA")
    {
        city = "L968";
        finished = true;
    }
    else if (city == "VILLAMIROGLIO")
    {
        city = "L970";
        finished = true;
    }
    else if (city == "VILLANDRO.VILLANDERS.")
    {
        city = "L971";
        finished = true;
    }
    else if (city == "VILLANOVABIELLESE")
    {
        city = "L978";
        finished = true;
    }
    else if (city == "VILLANOVACANAVESE")
    {
        city = "L982";
        finished = true;
    }
    else if (city == "VILLANOVAD'ALBENGA")
    {
        city = "L975";
        finished = true;
    }
    else if (city == "VILLANOVAD'ARDENGHI")
    {
        city = "L983";
        finished = true;
    }
    else if (city == "VILLANOVAD'ASTI")
    {
        city = "L984";
        finished = true;
    }
    else if (city == "VILLANOVADELBATTISTA")
    {
        city = "L973";
        finished = true;
    }
    else if (city == "VILLANOVADELGHEBBO")
    {
        city = "L985";
        finished = true;
    }
    else if (city == "VILLANOVADELSILLARO")
    {
        city = "L977";
        finished = true;
    }
    else if (city == "VILLANOVADICAMPOSAMPIERO")
    {
        city = "L979";
        finished = true;
    }
    else if (city == "VILLANOVAMARCHESANA")
    {
        city = "L988";
        finished = true;
    }
    else if (city == "VILLANOVAMONDOVI'")
    {
        city = "L974";
        finished = true;
    }
    else if (city == "VILLANOVAMONFERRATO")
    {
        city = "L972";
        finished = true;
    }
    else if (city == "VILLANOVAMONTELEONE")
    {
        city = "L989";
        finished = true;
    }
    else if (city == "VILLANOVASOLARO")
    {
        city = "L990";
        finished = true;
    }
    else if (city == "VILLANOVASULL'ARDA")
    {
        city = "L980";
        finished = true;
    }
    else if (city == "VILLANOVATRUSCHEDU")
    {
        city = "L991";
        finished = true;
    }
    else if (city == "VILLANOVATULO")
    {
        city = "L992";
        finished = true;
    }
    else if (city == "VILLANOVAFORRU")
    {
        city = "L986";
        finished = true;
    }
    else if (city == "VILLANOVAFRANCA")
    {
        city = "L987";
        finished = true;
    }
    else if (city == "VILLANTERIO")
    {
        city = "L994";
        finished = true;
    }
    else if (city == "VILLANUOVASULCLISI")
    {
        city = "L995";
        finished = true;
    }
    else if (city == "VILLAPERUCCIO")
    {
        city = "M278";
        finished = true;
    }
    else if (city == "VILLAPIANA")
    {
        city = "B903";
        finished = true;
    }
    else if (city == "VILLAPUTZU")
    {
        city = "L998";
        finished = true;
    }
    else if (city == "VILLARDORA")
    {
        city = "L999";
        finished = true;
    }
    else if (city == "VILLARFOCCHIARDO")
    {
        city = "M007";
        finished = true;
    }
    else if (city == "VILLARPELLICE")
    {
        city = "M013";
        finished = true;
    }
    else if (city == "VILLARPEROSA")
    {
        city = "M014";
        finished = true;
    }
    else if (city == "VILLARSANCOSTANZO")
    {
        city = "M015";
        finished = true;
    }
    else if (city == "VILLARBASSE")
    {
        city = "M002";
        finished = true;
    }
    else if (city == "VILLARBOIT")
    {
        city = "M003";
        finished = true;
    }
    else if (city == "VILLAREGGIA")
    {
        city = "M004";
        finished = true;
    }
    else if (city == "VILLARICCA")
    {
        city = "G309";
        finished = true;
    }
    else if (city == "VILLAROMAGNANO")
    {
        city = "M009";
        finished = true;
    }
    else if (city == "VILLAROSA")
    {
        city = "M011";
        finished = true;
    }
    else if (city == "VILLASALTO")
    {
        city = "M016";
        finished = true;
    }
    else if (city == "VILLASANTA")
    {
        city = "M017";
        finished = true;
    }
    else if (city == "VILLASIMIUS")
    {
        city = "B738";
        finished = true;
    }
    else if (city == "VILLASOR")
    {
        city = "M025";
        finished = true;
    }
    else if (city == "VILLASPECIOSA")
    {
        city = "M026";
        finished = true;
    }
    else if (city == "VILLASTELLONE")
    {
        city = "M027";
        finished = true;
    }
    else if (city == "VILLATA")
    {
        city = "M028";
        finished = true;
    }
    else if (city == "VILLAURBANA")
    {
        city = "M030";
        finished = true;
    }
    else if (city == "VILLAVALLELONGA")
    {
        city = "M031";
        finished = true;
    }
    else if (city == "VILLAVERLA")
    {
        city = "M032";
        finished = true;
    }
    else if (city == "VILLED'ANAUNIA")
    {
        city = "M363";
        finished = true;
    }
    else if (city == "VILLEDelse ifIEMME")
    {
        city = "M431";
        finished = true;
    }
    else if (city == "VILLENEUVE")
    {
        city = "L981";
        finished = true;
    }
    else if (city == "VILLESSE")
    {
        city = "M043";
        finished = true;
    }
    else if (city == "VILLETTABARREA")
    {
        city = "M041";
        finished = true;
    }
    else if (city == "VILLETTE")
    {
        city = "M042";
        finished = true;
    }
    else if (city == "VILLIMPENTA")
    {
        city = "M044";
        finished = true;
    }
    else if (city == "VILLONGO")
    {
        city = "M045";
        finished = true;
    }
    else if (city == "VILLORBA")
    {
        city = "M048";
        finished = true;
    }
    else if (city == "VILMINOREDISCALVE")
    {
        city = "M050";
        finished = true;
    }
    else if (city == "VIMERCATE")
    {
        city = "M052";
        finished = true;
    }
    else if (city == "VIMODRONE")
    {
        city = "M053";
        finished = true;
    }
    else if (city == "VINADIO")
    {
        city = "M055";
        finished = true;
    }
    else if (city == "VINCHIATURO")
    {
        city = "M057";
        finished = true;
    }
    else if (city == "VINCHIO")
    {
        city = "M058";
        finished = true;
    }
    else if (city == "VINCI")
    {
        city = "M059";
        finished = true;
    }
    else if (city == "VINOVO")
    {
        city = "M060";
        finished = true;
    }
    else if (city == "VINZAGLIO")
    {
        city = "M062";
        finished = true;
    }
    else if (city == "VIOLA")
    {
        city = "M063";
        finished = true;
    }
    else if (city == "VIONE")
    {
        city = "M065";
        finished = true;
    }
    else if (city == "VIPITENO.STERZING.")
    {
        city = "M067";
        finished = true;
    }
    else if (city == "VIRGILIO")
    {
        city = "H123";
        finished = true;
    }
    else if (city == "VIRLEPIEMONTE")
    {
        city = "M069";
        finished = true;
    }
    else if (city == "VISANO")
    {
        city = "M070";
        finished = true;
    }
    else if (city == "VISCHE")
    {
        city = "M071";
        finished = true;
    }
    else if (city == "VISCIANO")
    {
        city = "M072";
        finished = true;
    }
    else if (city == "VISCO")
    {
        city = "M073";
        finished = true;
    }
    else if (city == "VISONE")
    {
        city = "M077";
        finished = true;
    }
    else if (city == "VISSO")
    {
        city = "M078";
        finished = true;
    }
    else if (city == "VISTARINO")
    {
        city = "M079";
        finished = true;
    }
    else if (city == "VISTRORIO")
    {
        city = "M080";
        finished = true;
    }
    else if (city == "VITA")
    {
        city = "M081";
        finished = true;
    }
    else if (city == "VITERBO")
    {
        city = "M082";
        finished = true;
    }
    else if (city == "VITICUSO")
    {
        city = "M083";
        finished = true;
    }
    else if (city == "VITOD'ASIO")
    {
        city = "M085";
        finished = true;
    }
    else if (city == "VITORCHIANO")
    {
        city = "M086";
        finished = true;
    }
    else if (city == "VITTORIA")
    {
        city = "M088";
        finished = true;
    }
    else if (city == "VITTORIOVENETO")
    {
        city = "M089";
        finished = true;
    }
    else if (city == "VITTORITO")
    {
        city = "M090";
        finished = true;
    }
    else if (city == "VITTUONE")
    {
        city = "M091";
        finished = true;
    }
    else if (city == "VITULANO")
    {
        city = "M093";
        finished = true;
    }
    else if (city == "VITULAZIO")
    {
        city = "M092";
        finished = true;
    }
    else if (city == "VIU'")
    {
        city = "M094";
        finished = true;
    }
    else if (city == "VIVARO")
    {
        city = "M096";
        finished = true;
    }
    else if (city == "VIVAROROMANO")
    {
        city = "M095";
        finished = true;
    }
    else if (city == "VIVERONE")
    {
        city = "M098";
        finished = true;
    }
    else if (city == "VIZZINI")
    {
        city = "M100";
        finished = true;
    }
    else if (city == "VIZZOLATICINO")
    {
        city = "M101";
        finished = true;
    }
    else if (city == "VIZZOLOPREDABISSI")
    {
        city = "M102";
        finished = true;
    }
    else if (city == "VO'")
    {
        city = "M103";
        finished = true;
    }
    else if (city == "VOBARNO")
    {
        city = "M104";
        finished = true;
    }
    else if (city == "VOBBIA")
    {
        city = "M105";
        finished = true;
    }
    else if (city == "VOCCA")
    {
        city = "M106";
        finished = true;
    }
    else if (city == "VODOCADORE")
    {
        city = "M108";
        finished = true;
    }
    else if (city == "VOGHERA")
    {
        city = "M109";
        finished = true;
    }
    else if (city == "VOGHIERA")
    {
        city = "M110";
        finished = true;
    }
    else if (city == "VOGOGNA")
    {
        city = "M111";
        finished = true;
    }
    else if (city == "VOLANO")
    {
        city = "M113";
        finished = true;
    }
    else if (city == "VOLLA")
    {
        city = "M115";
        finished = true;
    }
    else if (city == "VOLONGO")
    {
        city = "M116";
        finished = true;
    }
    else if (city == "VOLPAGODELMONTELLO")
    {
        city = "M118";
        finished = true;
    }
    else if (city == "VOLPARA")
    {
        city = "M119";
        finished = true;
    }
    else if (city == "VOLPEDO")
    {
        city = "M120";
        finished = true;
    }
    else if (city == "VOLPEGLINO")
    {
        city = "M121";
        finished = true;
    }
    else if (city == "VOLPIANO")
    {
        city = "M122";
        finished = true;
    }
    else if (city == "VOLTAMANTOVANA")
    {
        city = "M125";
        finished = true;
    }
    else if (city == "VOLTAGGIO")
    {
        city = "M123";
        finished = true;
    }
    else if (city == "VOLTAGOAGORDINO")
    {
        city = "M124";
        finished = true;
    }
    else if (city == "VOLTERRA")
    {
        city = "M126";
        finished = true;
    }
    else if (city == "VOLTIDO")
    {
        city = "M127";
        finished = true;
    }
    else if (city == "VOLTURARAAPPULA")
    {
        city = "M131";
        finished = true;
    }
    else if (city == "VOLTURARAIRPINA")
    {
        city = "M130";
        finished = true;
    }
    else if (city == "VOLTURINO")
    {
        city = "M132";
        finished = true;
    }
    else if (city == "VOLVERA")
    {
        city = "M133";
        finished = true;
    }
    else if (city == "VOTTIGNASCO")
    {
        city = "M136";
        finished = true;
    }
    else if (city == "ZACCANOPOLI")
    {
        city = "M138";
        finished = true;
    }
    else if (city == "ZAFFERANAETNEA")
    {
        city = "M139";
        finished = true;
    }
    else if (city == "ZAGARISE")
    {
        city = "M140";
        finished = true;
    }
    else if (city == "ZAGAROLO")
    {
        city = "M141";
        finished = true;
    }
    else if (city == "ZAMBANA")
    {
        city = "M142";
        finished = true;
    }
    else if (city == "ZAMBRONE")
    {
        city = "M143";
        finished = true;
    }
    else if (city == "ZANDOBBIO")
    {
        city = "M144";
        finished = true;
    }
    else if (city == "ZANE'")
    {
        city = "M145";
        finished = true;
    }
    else if (city == "ZANICA")
    {
        city = "M147";
        finished = true;
    }
    else if (city == "ZAPPONETA")
    {
        city = "M267";
        finished = true;
    }
    else if (city == "ZAVATTARELLO")
    {
        city = "M150";
        finished = true;
    }
    else if (city == "ZECCONE")
    {
        city = "M152";
        finished = true;
    }
    else if (city == "ZEDDIANI")
    {
        city = "M153";
        finished = true;
    }
    else if (city == "ZELBIO")
    {
        city = "M156";
        finished = true;
    }
    else if (city == "ZELOBUONPERSICO")
    {
        city = "M158";
        finished = true;
    }
    else if (city == "ZELOSURRIGONE")
    {
        city = "M160";
        finished = true;
    }
    else if (city == "ZEME")
    {
        city = "M161";
        finished = true;
    }
    else if (city == "ZENEVREDO")
    {
        city = "M162";
        finished = true;
    }
    else if (city == "ZENSONDIPIAVE")
    {
        city = "M163";
        finished = true;
    }
    else if (city == "ZERBA")
    {
        city = "M165";
        finished = true;
    }
    else if (city == "ZERBO")
    {
        city = "M166";
        finished = true;
    }
    else if (city == "ZERBOLO'")
    {
        city = "M167";
        finished = true;
    }
    else if (city == "ZERFALIU")
    {
        city = "M168";
        finished = true;
    }
    else if (city == "ZERI")
    {
        city = "M169";
        finished = true;
    }
    else if (city == "ZERMEGHEDO")
    {
        city = "M170";
        finished = true;
    }
    else if (city == "ZEROBRANCO")
    {
        city = "M171";
        finished = true;
    }
    else if (city == "ZEVIO")
    {
        city = "M172";
        finished = true;
    }
    else if (city == "ZIANODIFIEMME")
    {
        city = "M173";
        finished = true;
    }
    else if (city == "ZIANOPIACENTINO")
    {
        city = "L848";
        finished = true;
    }
    else if (city == "ZIBELLO")
    {
        city = "M174";
        finished = true;
    }
    else if (city == "ZIBIDOSANGIACOMO")
    {
        city = "M176";
        finished = true;
    }
    else if (city == "ZIGNAGO")
    {
        city = "M177";
        finished = true;
    }
    else if (city == "ZIMELLA")
    {
        city = "M178";
        finished = true;
    }
    else if (city == "ZIMONE")
    {
        city = "M179";
        finished = true;
    }
    else if (city == "ZINASCO")
    {
        city = "M180";
        finished = true;
    }
    else if (city == "ZOAGLI")
    {
        city = "M182";
        finished = true;
    }
    else if (city == "ZOCCA")
    {
        city = "M183";
        finished = true;
    }
    else if (city == "ZOGNO")
    {
        city = "M184";
        finished = true;
    }
    else if (city == "ZOLAPREDOSA")
    {
        city = "M185";
        finished = true;
    }
    else if (city == "ZOLDOALTO")
    {
        city = "I345";
        finished = true;
    }
    else if (city == "ZOLLINO")
    {
        city = "M187";
        finished = true;
    }
    else if (city == "ZONE")
    {
        city = "M188";
        finished = true;
    }
    else if (city == "ZOPPE'DICADORE")
    {
        city = "M189";
        finished = true;
    }
    else if (city == "ZOPPOLA")
    {
        city = "M190";
        finished = true;
    }
    else if (city == "ZOVENCEDO")
    {
        city = "M194";
        finished = true;
    }
    else if (city == "ZUBIENA")
    {
        city = "M196";
        finished = true;
    }
    else if (city == "ZUCCARELLO")
    {
        city = "M197";
        finished = true;
    }
    else if (city == "ZUCLO")
    {
        city = "M198";
        finished = true;
    }
    else if (city == "ZUGLIANO")
    {
        city = "M199";
        finished = true;
    }
    else if (city == "ZUGLIO")
    {
        city = "M200";
        finished = true;
    }
    else if (city == "ZUMAGLIA")
    {
        city = "M201";
        finished = true;
    }
    else if (city == "ZUMPANO")
    {
        city = "M202";
        finished = true;
    }
    else if (city == "ZUNGOLI")
    {
        city = "M203";
        finished = true;
    }
    else if (city == "ZUNGRI")
    {
        city = "M204";
        finished = true;
    }
    else
    {
        cout << "ERROR: Couldn't find any city named " << city << "." << endl;
    }
}

void codeCoder()
{
    for (i = 0; i < 15; i++)
    {
        if (fiscalCode[i] == 'A' || fiscalCode[i] == '0')
        {
            if ((i + 1) % 2 == 0)
            {
                par = par + 0;
            }
            else
            {
                disp = disp + 1;
            }
        }
        else if (fiscalCode[i] == 'B' || fiscalCode[i] == '1')
        {
            if ((i + 1) % 2 == 0)
            {
                par = par + 1;
            }
            else
            {
                disp = disp + 0;
            }
        }

        else if (fiscalCode[i] == 'C' || fiscalCode[i] == '2')
        {
            if ((i + 1) % 2 == 0)
            {
                par = par + 2;
            }
            else
            {
                disp = disp + 5;
            }
        }
        else if (fiscalCode[i] == 'D' || fiscalCode[i] == '3')
        {
            if ((i + 1) % 2 == 0)
            {
                par = par + 3;
            }
            else
            {
                disp = disp + 7;
            }
        }
        else if (fiscalCode[i] == 'E' || fiscalCode[i] == '4')
        {
            if ((i + 1) % 2 == 0)
            {
                par = par + 4;
            }
            else
            {
                disp = disp + 9;
            }
        }

        else if (fiscalCode[i] == 'F' || fiscalCode[i] == '5')
        {
            if ((i + 1) % 2 == 0)
            {
                par = par + 5;
            }
            else
            {
                disp = disp + 13;
            }
        }
        else if (fiscalCode[i] == 'G' || fiscalCode[i] == '6')
        {
            if ((i + 1) % 2 == 0)
            {
                par = par + 6;
            }
            else
            {
                disp = disp + 15;
            }
        }
        else if (fiscalCode[i] == 'H' || fiscalCode[i] == '7')
        {
            if ((i + 1) % 2 == 0)
            {
                par = par + 7;
            }
            else
            {
                disp = disp + 17;
            }
        }
        else if (fiscalCode[i] == 'I' || fiscalCode[i] == '8')
        {
            if ((i + 1) % 2 == 0)
            {
                par = par + 8;
            }
            else
            {
                disp = disp + 19;
            }
        }

        else if (fiscalCode[i] == 'J' || fiscalCode[i] == '9')
        {
            if ((i + 1) % 2 == 0)
            {
                par = par + 9;
            }
            else
            {
                disp = disp + 21;
            }
        }
        else if (fiscalCode[i] == 'K')
        {
            if ((i + 1) % 2 == 0)
            {
                par = par + 10;
            }
            else
            {
                disp = disp + 2;
            }
        }
        else if (fiscalCode[i] == 'L')
        {
            if ((i + 1) % 2 == 0)
            {
                par = par + 11;
            }
            else
            {
                disp = disp + 4;
            }
        }

        else if (fiscalCode[i] == 'M')
        {
            if ((i + 1) % 2 == 0)
            {
                par = par + 12;
            }
            else
            {
                disp = disp + 18;
            }
        }
        else if (fiscalCode[i] == 'N')
        {
            if ((i + 1) % 2 == 0)
            {
                par = par + 13;
            }
            else
            {
                disp = disp + 20;
            }
        }
        else if (fiscalCode[i] == 'O')
        {
            if ((i + 1) % 2 == 0)
            {
                par = par + 14;
            }
            else
            {
                disp = disp + 11;
            }
        }
        else if (fiscalCode[i] == 'P')
        {
            if ((i + 1) % 2 == 0)
            {
                par = par + 15;
            }
            else
            {
                disp = disp + 3;
            }
        }
        else if (fiscalCode[i] == 'Q')
        {
            if ((i + 1) % 2 == 0)
            {
                par = par + 16;
            }
            else
            {
                disp = disp + 6;
            }
        }
        else if (fiscalCode[i] == 'R')
        {
            if ((i + 1) % 2 == 0)
            {
                par = par + 17;
            }
            else
            {
                disp = disp + 8;
            }
        }
        else if (fiscalCode[i] == 'S')
        {
            if ((i + 1) % 2 == 0)
            {
                par = par + 18;
            }
            else
            {
                disp = disp + 12;
            }
        }
        else if (fiscalCode[i] == 'T')
        {
            if ((i + 1) % 2 == 0)
            {
                par = par + 19;
            }
            else
            {
                disp = disp + 14;
            }
        }
        else if (fiscalCode[i] == 'U')
        {
            if ((i + 1) % 2 == 0)
            {
                par = par + 20;
            }
            else
            {
                disp = disp + 16;
            }
        }
        else if (fiscalCode[i] == 'V')
        {
            if ((i + 1) % 2 == 0)
            {
                par = par + 21;
            }
            else
            {
                disp = disp + 10;
            }
        }
        else if (fiscalCode[i] == 'W')
        {
            if ((i + 1) % 2 == 0)
            {
                par = par + 22;
            }
            else
            {
                disp = disp + 22;
            }
        }
        else if (fiscalCode[i] == 'X')
        {
            if ((i + 1) % 2 == 0)
            {
                par = par + 23;
            }
            else
            {
                disp = disp + 25;
            }
        }
        else if (fiscalCode[i] == 'Y')
        {
            if ((i + 1) % 2 == 0)
            {
                par = par + 24;
            }
            else
            {
                disp = disp + 24;
            }
        }
        else if (fiscalCode[i] == 'Z')
        {
            if ((i + 1) % 2 == 0)
            {
                par = par + 25;
            }
            else
            {
                disp = disp + 23;
            }
        }
    }

    check = (par + disp) % 26;
    if (check == 0)
    {
        fiscalCode[15] = 'A';
    }
    else if (check == 1)
    {
        fiscalCode[15] = 'B';
    }
    else if (check == 2)
    {
        fiscalCode[15] = 'C';
    }
    else if (check == 3)
    {
        fiscalCode[15] = 'D';
    }
    else if (check == 4)
    {
        fiscalCode[15] = 'E';
    }
    else if (check == 5)
    {
        fiscalCode[15] = 'F';
    }
    else if (check == 6)
    {
        fiscalCode[15] = 'G';
    }
    else if (check == 7)
    {
        fiscalCode[15] = 'H';
    }
    else if (check == 8)
    {
        fiscalCode[15] = 'I';
    }
    else if (check == 9)
    {
        fiscalCode[15] = 'J';
    }
    else if (check == 10)
    {
        fiscalCode[15] = 'K';
    }
    else if (check == 11)
    {
        fiscalCode[15] = 'L';
    }
    else if (check == 12)
    {
        fiscalCode[15] = 'M';
    }
    else if (check == 13)
    {
        fiscalCode[15] = 'N';
    }
    else if (check == 14)
    {
        fiscalCode[15] = 'O';
    }
    else if (check == 15)
    {
        fiscalCode[15] = 'P';
    }
    else if (check == 16)
    {
        fiscalCode[15] = 'Q';
    }
    else if (check == 17)
    {
        fiscalCode[15] = 'R';
    }
    else if (check == 18)
    {
        fiscalCode[15] = 'S';
    }
    else if (check == 19)
    {
        fiscalCode[15] = 'T';
    }
    else if (check == 20)
    {
        fiscalCode[15] = 'U';
    }
    else if (check == 21)
    {
        fiscalCode[15] = 'V';
    }
    else if (check == 22)
    {
        fiscalCode[15] = 'W';
    }
    else if (check == 23)
    {
        fiscalCode[15] = 'X';
    }
    else if (check == 24)
    {
        fiscalCode[15] = 'Y';
    }
    else if (check == 25)
    {
        fiscalCode[15] = 'Z';
    }
}

int main()
{
    cout << "Insert Surname: ";
    cin >> surname;

    cout << "Insert Name: ";
    cin >> name;

    finished = false;
    while (finished == false)
    {
        cout << "Insert Day of Birth: ";
        cin >> day;
        if (day > 31)
        {
            cout << "ERROR: There can't be more than 31 days in a month." << endl;
        }
        else
        {
            cout << "Insert Month of Birth (number): ";
            cin >> month;

            if (month == 2 && day > 29)
            {
                cout << "ERROR: There can't be more than 29 days in February." << endl;
            }
            else if (month == 4 ||
                     month == 6 ||
                     month == 9 ||
                     month == 11)
            {
                if (day > 30)
                {
                    cout << "ERROR: There can't be more than 30 days in that month." << endl;
                }
                else
                {
                    cout << "Insert Year of Birth: ";
                    cin >> year;

                    if (year < 1931)
                    {
                        cout << "ERROR: The year can't be less than 1931." << endl;
                    }
                    else if (year > 2030)
                    {
                        cout << "ERROR: The year can't be more than 2030." << endl;
                    }
                    else
                    {
                        finished = true;
                    }
                }
            }
            else if (month < 12 && month > 0)
            {
                cout << "Insert Year of Birth: ";
                cin >> year;

                if (year < 1931)
                {
                    cout << "ERROR: The year can't be less than 1931." << endl;
                }
                else if (year > 2030)
                {
                    cout << "ERROR: The year can't be more than 2030." << endl;
                }
                else if (month == 2 && day > 28 && year % 2 != 0)
                {
                    cout << "ERROR: There can't be more than 28 days in February " << year << "." << endl;
                }
                else
                {
                    finished = true;
                }
            }
            else
            {
                cout << "ERROR: Invalid number of months." << endl;
            }
        }
    }

    finished = false;
    while (finished == false)
    {
        cout << "Insert Sex (M or F): ";
        cin >> sex;

        if (sex != "F" &&
            sex != "f" &&
            sex != "M" &&
            sex != "m")
        {
            cout << "ERROR: This gender does not exist." << endl;
        }
        else
        {
            finished = true;
        }
    }

    finished = false;
    while (finished == false)
    {
        cout << "Insert Place of Birth (use CAPS and don't use spaces): ";
        cin >> city;
        cityCoder();
    }
    fiscalCode[11] = city[0];
    fiscalCode[12] = city[1];
    fiscalCode[13] = city[2];
    fiscalCode[14] = city[3];

    surnameCoder();
    nameCoder();
    yearCoder();
    monthCoder();
    dayCoder();
    codeCoder();

    cout << "\n\n";

    cout << "The fiscal code is: " << fiscalCode;

    cout << "\n\n";
    system("pause");
}