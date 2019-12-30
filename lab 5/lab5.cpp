#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
struct song
{
	char* version;
	char* title;
	char* artist;
	char* duration;
};
song** create_playlist(char* f_name, int& no_of_songs)
{
	ifstream fin(f_name);
	no_of_songs = 1000;
	song** playlist = new song*[no_of_songs];
	for (int i = 0; i < no_of_songs; i++)
	{
		playlist[i] = new song;
	}
	int length, i = 0;
	if (fin.is_open())
	{
		int j = 0, i = 0, k = 0;
		int sen_len;
		char**sent = new char*[1000];
		for (int h = 0; h < 1000; h++)
		{
			sent[h] = new char[500];
		}
		while (!fin.eof())
		{
			cout << endl << i << endl << endl;
			fin.getline(sent[k], 500, ',');
			length = strlen(sent[k]) + 1;
			playlist[i]->version = new char[length];
			strcpy_s(playlist[i]->version, length, sent[k]);
			cout << playlist[i]->version << endl;
			fin.getline(sent[k], 500, ',');
			length = strlen(sent[k]) + 1;
			playlist[i]->title = new char[length];
			strcpy_s(playlist[i]->title, length, sent[k]);
			cout << playlist[i]->title << endl;
			fin.getline(sent[k], 500, ',');
			length = strlen(sent[k]) + 1;
			playlist[i]->artist = new char[length];
			strcpy_s(playlist[i]->artist, length, sent[k]);
			cout << playlist[i]->artist<< endl;
			fin.getline(sent[k], 500);
			length = strlen(sent[k]) + 1;
			playlist[i]->duration = new char[length];
			strcpy_s(playlist[i]->duration, length, sent[k]);
			cout << playlist[i]->duration << endl;
			i++;
		}
	}
	else
	{
		cout << "Error" << endl;
	}
	return playlist;
}
song** add_song(char*version, char* artist_name, char* song_name,char*duration, song** old_playlist, int&n)
{
	int len_art=0,len_song=0,len_version=0,len_duration=0;
	len_art=strlen(artist_name)+1;
	len_song=strlen(song_name)+1;
	len_version = strlen(version) + 1;
	len_duration = strlen(duration) + 1;
	song** new_playlist=new song* [n+1];
	for (int i = 0; i < n ; i++)
	{
		new_playlist[i]=old_playlist[i];
	}
	new_playlist[n]=new song;
	new_playlist[n]->artist = new char[len_art];
	new_playlist[n]->title = new char[len_song];
	new_playlist[n]->version = new char[len_version];
	new_playlist[n]->duration = new char[len_duration];
	strcpy_s(new_playlist[n]->version, len_version, version);
	cout << new_playlist[n]->version << "\n";
	strcpy_s(new_playlist[n]->artist,len_art,artist_name);
	cout << new_playlist[n]->artist << "\n";
	strcpy_s(new_playlist[n]->title,len_song,song_name);
	cout << new_playlist[n]->title << endl;
	strcpy_s(new_playlist[n]->duration, len_duration, duration);
	cout << new_playlist[n]->duration << "\n";
	delete []old_playlist;
	n++;
	return new_playlist;
}
void delete_song(int index, song** playlist, int&n)
{
	delete playlist[index]->artist;
	delete playlist[index]->title;
	delete playlist[index]->version;
	delete playlist[index]->duration;
	int i = index;
	for (; i < n-1; i++)
	{
		playlist[i] = playlist[i + 1];
	}
	i++;
	playlist[i] = nullptr;
	n--;
	cout << "New list is\n";
	for (int j = 0; j < n; j++)
	{
		cout << j << endl;
		cout << playlist[j]->version << endl;
		cout << playlist[j]->artist << endl;
		cout << playlist[j]->title << endl;
		cout << playlist[j]->duration << endl;
	}
}
int main()
{
	int n;
	song** playlist = create_playlist("SongList.txt", n);
	playlist=add_song("3.0","Junaid Jamshed","Dil dil Pakistan","288 seconds" ,playlist,n);
	delete_song(0, playlist, n);
	system("pause");
	return 0;
}