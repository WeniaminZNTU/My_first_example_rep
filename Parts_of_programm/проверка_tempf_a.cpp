int t;
cout<<"1 or 2:";
t = tempf(&temp);
cout<<"\nВозвращаемое значение:"<<t<<endl;
//tempf(&temp);
//char ch;
//ch = temp;
//cout<<endl<<"ch:"<<ch<<endl<<"if:";
cout<<endl<<"cout<<tempf(&temp):"<<tempf(&temp)<<endl;
if( tempf(&temp) == 1 ) cout<<"main:"<<"1";
if( tempf(&temp) == 2 ) cout<<"main:"<<"2";
exit(1);

