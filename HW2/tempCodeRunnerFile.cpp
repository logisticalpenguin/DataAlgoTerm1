 while(1) { //will not read letters
        if(unoInput == ch || dosInput == ch) { 
            cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout << "Please input numbers only. Try again!"<<endl;
            return mainProg();
        }
        if(!cin.fail())
        break;
    }
