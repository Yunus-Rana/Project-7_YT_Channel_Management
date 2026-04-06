#include<iostream>
#include<list>
using namespace std;

class YoutubeChannel{
private:
	string Name;
	int SubsCount;
	list<string>PubVids;
protected:
	string OwnerName;
public:	
	YoutubeChannel(string name, string ownername)
	{
		Name = name;
		OwnerName = ownername;
		SubsCount = 0;
	}
	void Subscribe()
	{
		SubsCount++;
	}
	void Unsubscribe()
	{
		if(SubsCount>0)
		SubsCount--;
	}
	void PubVideo(string title)
	{
		PubVids.push_back(title);
	}
	
	
	void getInfo()
	{
	cout<<"Name: "<<Name<<endl;
	cout<<"Owner Name: "<<OwnerName<<endl;
	cout<<"Subs Count: "<<SubsCount<<endl;
	//cout<<"Published Video Titles: "<<yt.PubVids<<endl; (error)
	
	cout<<"Videos: "<<endl;
	for(string vid: PubVids)
	{
		cout<<vid<<endl;
	}
	
	cout<<endl;
	}
};

class CookingYoutubeChannel: public YoutubeChannel{
public:	
	CookingYoutubeChannel(string name, string ownername): YoutubeChannel(name, ownername)
	{
		
	}
	void practice()
	{
		cout<<OwnerName<<" is practicing cooking, learning new recipes and experimenting with spices"<<endl;
		cout<<endl;
	}
};

int main()
{
	YoutubeChannel yt("Nova","Yunus");
	yt.PubVideo("\tAces United lineup");
	yt.PubVideo("\tA Versus Video");
	yt.Subscribe();
	yt.getInfo();
	
	
	CookingYoutubeChannel cookingyt("PeaCooks","Adam");
	cookingyt.PubVideo("\tMaking Pasta");
	cookingyt.PubVideo("\tMaking Sandwiches");
	cookingyt.PubVideo("\tMaking EggRolls");
	cookingyt.Subscribe();
	cookingyt.Subscribe();
	
	cookingyt.getInfo();
	cookingyt.practice();
	
	
	CookingYoutubeChannel cookingyt2("Foodiemad","James");
	cookingyt.PubVideo("\tMaking Cheesecake");
	cookingyt.PubVideo("\tMaking Pizza");
	cookingyt.PubVideo("\tMaking Salad");
	cookingyt2.getInfo();
	cookingyt2.practice();
	
	

	
	
	return 0;
}
