# Visual Studio GridProject
A grid and json file project using C++ in visual studio. This program shows the use of grids to display information from a json file. This was created because I got tired of manually inputting information to an excel spreadsheet as the spreadsheet was getting really long. This program will be redone using C#. The C# version is now out [here](https://github.com/Kttra/JsonGridLoader).

**Layout**
-----------------------------------
My json file was formatted in a way to keep entries of times, teams, dates, and rank placements. Imagine a competition where multiple teams compete for the fastest times for specific quests. Each week, the quest rotates to a new one. That's why I wanted to keep track of my personal time, my team's time, the time the last place team got, the time the first placed team time got, the date, my placement, and my group's placement. Taking this into account, the program ended up looking like this:

![image](https://user-images.githubusercontent.com/100814612/160510571-62503dfc-4300-47af-bf54-dc8639061269.png)

An entry in the json file for the first mission is displayed below. Here we see an array for each category I wanted to keep track of. The first value of each entry indicates that it is the 1st run. The second value of each array is part of the second run and so on.

```
"Mission 1": {
    "1st solo": [ "4:10", "2:20", "2:12", "2:47", "1:42", "1:41", "1:38", "2:04", "2:07" ],
    "20th solo": [ "6:16", "4:40", "4:18", "4:16", "3:52", "3:49", "3:36", "4:35", "4:17" ],
    "My solo": [ "4:48", "4:13", "3:59", "3:17", "2:43", "2:37", "2:24", "2:28", "2:24" ],
    "Solo rank": [ 4, 14, 15, 6, 5, 5, 4, 3, 2 ],
    "Last rank": [ 20, 20, 20, 20, 20, 20, 20, 20, 20 ],
    "Date": [ "5/25/2020", "6/29/2020", "9/28/2020", "11/30/2020", "2/1/2021", "4/5/2021", "6/7/2021", "8/9/2021", "10/11/2021" ],
    "Class used": [ "-", "-", "-", "-", "-", "-", "-", "-", "-" ],
    "Group time": [ "0", "0", "2:33", "1:44", "1:41", "1:38", "1:30", "1:30", "1:28" ],
    "Group place": [ 0, 0, 26, 13, 12, 9, 9, 5, 5 ],
    "1st group time": [ "0", "0", "1:15", "1:17", "1:08", "1:10", "1:02", "1:08", "1:08" ],
    "Group 20 time": [ "0", "0", "2:24", "3:08", "2:14", "1:47", "1:59", "2:52", "2:19" ],
    "20th group place": [ 0, 0, 20, 18, 19, 17, 19, 20, 15 ],
    "Team": [ 0, 0, 0, 13, 14, 8, 5, 5, 1 ]
  }
```

**Loading a Json File**
-----------------------------------
```
//Opening json file
std::ifstream file;
file.open("sample.json");
nlohmann::json jsonObject;

if (file.is_open()) {
  file >> jsonObject;
}
```

**Assigning a Cell Value**
-----------------------------------
First we want to get the string or value from the json file, then we want to convert it to a c string using the built in c_str() function. The function c_str() converts a C++ string into a C-style string which is essentially a null terminated array of bytes. After all this, we convert the c-style string into a system string. The reason for all this conversion is because cells can only take in a system string.

```
//In this example, we are going to take the 1st entry group time for mission 1
string tempString = jsonObject["Mission 1"]["Group time"][0];
auto cellValue = gcnew String(tempString.c_str());
dataGridView1->Rows[0]->Cells[6]->Value = cellValue;
```

**Grid Indexing**
-----------------------------------
The grid is indexed like a normal matrix or array in most programming languages except we ignore the first row. The first row is considered to be the labels. Below is a picture detailing each index by row x column.

![Untitled-1](https://user-images.githubusercontent.com/100814612/160525207-6e15290a-f809-4efc-9c2a-ce80b3652f0e.png)

Comparing this array to the current rotation grid, we can see that "mission 1" is in the index 0, 0. The date "10/25/2021" is at index 2, 4.

**Unfinished Features and Future Plans**
-----------------------------------
The add and load button on the right side of the program currently have no function as I have not gotten around to adding it. As I said above, I plan to move this project over to C# instead. Currently, this project is left up in case it may help someone in the future whether it's with the indexing, using datagridview, or converting C++ strings to system strings. As this project was more of a personal project, it's not meant to be compatible with just any json file. However, the C# version I plan on making will have much better compatibility.
