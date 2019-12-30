#include<iostream>
#include<fstream>
#include<windows.h>
#include<string.h>
#include<conio.h>
using namespace std;
struct song
{
	char* artist;
	char* version;
	char* duration;
	char* title;

};
song** create_playlist(char* f_name, int no_of_songs)
{
	ifstream read(f_name);
	int count=0;
	song** playlist = new song*[no_of_songs];
	for (int i = 0; i < no_of_songs; i++)
	{
		playlist[i] = new song;
	}
	char * token;
	int length, f = 0;
	if (read.is_open())
	{
		char buff[500];

		while (!read.eof())
		{
		    read.getline(buff,500);
            token=strtok(buff,",");
			while(token!=NULL)
            {
                if(count==0)
               {
                   length=strlen(token);
                   playlist[f]->version=new char[length];
                   strcpy(playlist[f]->version,token);
                   cout<<playlist[f]->version<<" ";

               }
               if(count==1)
               {
                   length=strlen(token);
                   playlist[f]->title=new char[length];
                   strcpy(playlist[f]->title,token);
                   cout<<playlist[f]->title<<" ";

               }
               if(count==2)
               {
                   length=strlen(token);
                  playlist[f]->artist=new char[length];
                   strcpy(playlist[f]->artist,token);
                   cout<<playlist[f]->artist<<" ";

               }
               if(count==3)
               {
                length=strlen(token);
                playlist[f]->duration=new char[length];
                strcpy(playlist[f]->duration,token);
                cout<<playlist[f]->duration<<" ";

               }
               if(count==3)
               {
                   count=-1;
               }

            // Sleep(500);
            cout<<endl;
                token=strtok(NULL,",");
                count++;
            }

           token=strtok(buff,",");
			f++;
		}
	}
	else
	{
		cout << "Error" << endl;
	}

	return playlist;
}
song ** add_a_song_and_save(char *file_name,song ** old_playlist, int &no_of_songs)
{
    song ** new_playlist;
    new_playlist=new song*[no_of_songs+1];
    new_playlist=old_playlist;
    cout<<"Enter the version of the new song?"<<endl;
    char arr_ver[50];
    cin.getline(arr_ver,50);
    int length=strlen(arr_ver);
    new_playlist[no_of_songs]->version=new char[length];
    strcpy(new_playlist[no_of_songs]->version,arr_ver);
    char arr_title [50];
    cout<<"What's the title of the song?"<<endl;
    cin.getline(arr_title,50);
    length=strlen(arr_title);
    new_playlist[no_of_songs]->title=new char[length];
    strcpy(new_playlist[no_of_songs]->title,arr_title);
    char arr_art[50];
    cout<<"Who' the artist?"<<endl;
    cin.getline(arr_art,50);
    length=strlen(arr_art);
    new_playlist[no_of_songs]->artist=new char[length];
    strcpy(new_playlist[no_of_songs]->artist,arr_art);
    char arr_dur[20];
    cout<<"What's the song duration?"<<endl;
    cin.getline(arr_dur,20);
    length=strlen(arr_dur);
    new_playlist[no_of_songs]->duration=new char[length];
    strcpy(new_playlist[no_of_songs]->duration,arr_dur);
    cout<<"Your song has been added to the songs playlist!"<<endl;
    Sleep(500);
    no_of_songs=no_of_songs+1;
    delete []old_playlist;
    ofstream write(file_name);
    for(int i=0;i<no_of_songs;i++)
    {
        write<<new_playlist[i]->version<<",";
        write<<new_playlist[i]->title<<",";
        write<<new_playlist[i]->artist<<",";
        write<<new_playlist[i]->duration;
        write<<endl;
    }
    return new_playlist;
}
int main()
{
	int n=0;
	ifstream read("SongList.txt");
	char arr[2000];
	while (!read.eof())
	{
		read.getline(arr, 2000);
		n++;
	}
	int choice;
	song** playlist;
	cout<<"1. See The Song Playlist"<<endl;
	cout<<"2. Add A Song and Save"<<endl;
	cout<<"What Do You Want To Do?"<<endl;
	cin>>choice;
	if(choice == 1)
    {
        playlist = create_playlist("SongList.txt", n);
    }
    else if(choice==2)
    {
        playlist=add_a_song_and_save("SongList.txt",playlist,n);
    }

   // delete []playlist;

	return 0;
}
