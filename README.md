#Project title: Providence Food Map

#Data visualization Group A

#Group member:
Xincai Liu  	(xincai_liu@brown.edu)

Shixin Liu  	(shixin_liu@brown.edu)

Zeyu Ruan   	(zeyu_ruan@brown.edu)


#Course: 

2018 Fall ENGN 2912B


#Date submitted: 

Dec 18, 2018


#Introduction:

##1.Project Overview.

During the past 4 weeks, our group members have tried our best to complete our application, 'the providence food map' with the study of knowledge about data visualization. Finally, we succeeded in creating the GUI application. This is an application about restaurants search for Providence based on Qt with a simple GUI. It can be easily run on Qt Creator rather than to be built on CCV. Just use Qt Creator and this project can be open. The data in the application is downloaded from YELP website but processed using sql and stored in restaurant.csv. To prevent the data set to be to large and to increase the processing speed, we only choose the data of the restaurants that have more than 5 comments located in Providence. This process was done with the help of sqlite. Later, with the intention of designing the GUI, we chose to use Qt instead of other software due to its convenience. In conclusion, the work we have done can be divided into three main parts: the connection to database, the method of processing the data and the design of GUI. 

##2.Goals and Objectives.

The main goal of our application is to realize the function of searching for specific restaurants using key words of the restaurant name or the restaurant address. 

The GUI consists of a map of Providence on the left and a search bar on the top, every time the user enters a string, the information will appear on the right part of the GUI, and if there is a valid result, a new map will appear showing where the restaurant is with a red point. Our motivation is to transfer the raw data from the Internet into a practical application, while the application itself is not very complicated, the idea of it is of great significance since data visualization is everywhere in our daily life and has a great prospect in many areas.

###Object 1:Data resource and pre-processing
Our data set is from the yelp website, but the raw data has too much information  that is useless for our project, so we learned sql and selected the data that is useful to us. In the end, we saved the basic information(name, location, address, stars, review count）of the restaurants in Providence with more than 5 review counts in a csv file named restaurant.csv.  

###Object 2:Background and Classes
We chose QT as our final application background due to its plenty of functions and great convenience, and it can realize all of our goals with c++ coding and design of GUI.
Then, in order to use the data stored in restaurant.csv，we create the class restaurant to save all the information.

###Object 3:Functions and methods
To realize the search functions of our project, we create several functions including dataprocessing and match to process the restaurant information and save it in the restaurant class, along with the search of information when a string is input in the search box. This part is the core part of the scientific methods and computation.

###Object 4:Displays and GUI
This is the most important and last part of our project, which actually achieves data visualization。 All the functions are tested in the GUI, we have a guide interface telling you how to use the application, whenever you input a string in the search box and press the search button, the information of the search results will appear in the interface. Meanwhile, there is a map button that you can press that will show the results in the map of Providence with red points.



#Software Architectural Design

##1. General Architecture

The final application is designed and run on Qt. It contains three functional modules: one for reading data from csv files, processing and storing them; one for matching the input information and raw data; and the third one for building the GUI for the application.

##2. Functional Block Diagrams

![Functional Block Diagram](https://github.com/ENGN2912B-2018/DV-A/blob/master/update3/FunctionDiagram.jpg)

##3. Data Flow Diagrams

![Data Flow Diagram](https://github.com/ENGN2912B-2018/DV-A/blob/master/update3/FunctionDiagram.jpg)




#Interface Descriptions:

Our interface is mainly developed to provide a convenient access to search for the restaurants and directly show the location of the target restaurant. In order to make our project interface clear, we made it by two parts.

##1. Window Framework
The first part is the window which contains the whole project interface.  On the top of the window is the title bar which shows our project name, “Providence Food Map”.  We left the left part of window blank so that we can show our result there.  At the right part of the window, we placed some information to help the user to use our project smoothly.  The guide can be helpful to everyone who want to search for a target restaurant.

figure 1 - window framework 

##2. Interactive Components
The other part is the interactive components and it is the core and the most important part of this project.  In our project, we placed 4 buttons to achieve different functions.
“Name” Button and “Address” Button
The “Name” button and the “Address” button are buttons to decide how to search for the target restaurant.  When the “Name” button is clicked, the result will be searched by restaurant name.  When the “Address” button is clicked, the result will be searched by the address of restaurant.  

“Search” Button
The “Search” Button is the most important button in our project.  When the “Search” button is clicked, we will search for the matching results based on the key words which the user provides.  And then, the results will be presented on the left part by list.  If we can not find the matching result, the left part will show the sentence, ”No result.” , to show that the project works well but not results.

“Map” Button
The “Map” Button is the button to show the matching result on a map.  Of course, the map is large enough to contain all the restaurants in our database.  By clicking the “Map” Button, user can check the location of the restaurant.  The order number in the list and map are matched. 



#Testing and Evaluation:

Our application will be shown on the final visualizing graph, the testing is all done through typing in the search content and click on search mode and check the results. One thing to note: before launching the application, please adapt the path to restaurant.csv (the function is in the dataprocessing.cpp). Otherwise, the program can't find the data file. 

After launching this app, you will see a new window with a search bar on top and two search mode you can choose: name and address. After typing in search content(e.g. east), click the search button. On the bottom list will display search results(e.g. East Side Pockets...) with name, address, average stars rated by customers, etc. The match is based on restaurant's name or address and is case insensitive. If you click the 'map' button, a new window will display the location of search results on the Providence map. If there's no match, the list will display "No results".

Some screen shots are as follows:

![Name Search Fig](https://github.com/ENGN2912B-2018/DV-A/blob/master/update3/shot1.png)

Search 1 on name-match mode

![Name Search result](https://github.com/ENGN2912B-2018/DV-A/blob/master/update3/shot3.png)

Search 1 results

![Addr Search Fig](https://github.com/ENGN2912B-2018/DV-A/blob/master/update3/shot2.png)

Search 2 on address-match mode

![addr Search result](https://github.com/ENGN2912B-2018/DV-A/blob/master/update3/shot4.png)

Search 2 results


#Conclusions:
In conclusion, we implemented a data visualization application helping users search particular restaurants in Providence by name or address.

The core function of the application is based on the search method, we connected the information of the database to the GUI to realize the data visualization of the restaurant information, and we vividly demonstrated the specific location of the restaurants to help the users to find them quickly with the map button.

After all, we have finished most of the goals that we intended to meet at first. However, due to the limited time and the lack of related knowledge, we still have a lot to do including the more delicate GUI and extra functions like the labels of the restaurants.

#Future Work:
In future, first, we will try to improve the GUI to make it mouse sensitive and more delicate.
 
Second, we can add some more functions with more complicated search methods, for example, we may add the restaurant label function which can give each restaurant several labels like the typical food and evaluations, which can allow users to search for the particular restaurants that can offer them ideal food or service (This method was not finished because the database we downloaded from the yelp didn't have such a label, so we have to attach labels to the restaurants by ourselves).

Third, the map is currently only a picture which is inconvenient. We will try to use webkit tools on Qt to display Google map online. 

Last but not the least, we can connect to database so that the data scale can be easily expanded. Then the food map can be used for larger area instead of PVD.


#Author Contributions:
During the entire development of the project, three group members contributed evenly to the work, we mainly did the following work to push on the project:

##1. Preparation and research:
In order to choose the subject from the five topics, we did research about different topics and chose our topic based on the basic knowledge and interest of all the team member.

##2. Information search and tools choice:
In team assignment 1, we did a lot to study the trend and application of data visualization, and learned about many tools and libraries about data visualization like VTK and QT. In the end, we made our decision to use QT as our main background, which helped to build the foundamental technology base.

##3. Plan making and task division:
In team assignment 2, we made a detailed plan of what to do in the next four weeks and assigned work to each group member. Xincai Liu took the responsibility to learn the QT, Shixin Liu spent most of his time learning sql and database, Zeyu Ruan started to design the method and function code of the main project. We planed to learn by everyone self in the first two weeks and shared our progress and merged them together in the last 2 weeks, which was actually followed later.

##4. Database study:
This part was mainly done by Shixin Liu, in order to get data from the db file downloaded from the Yelp website, he learned sql by himself and selected the useful information from the database. What's more, since the data of the restaurants cannot be used directly, we also successfully transformed the data into a practical mode using our mathmatical and geography knowledge.

##5. QT learning and GUI design:
This part was mainly done by Xincai Liu, he began to learn QT from week 1, and because he even didn't know QT before, it took him a lot of time to get used to the environment of QT and finally managed to design the GUI.

##6. Coding and method design:
This part was mainly done by Zeyu Ruan, with the data provided by Shixin and the help offered by Xincai about how to use QT, he disigned the software architectural of the project, including the dataprocessing method, the match method and the main class.

##7. Merge and completion
In the last two weeks, we began to merge our project and polish our GUI to make it more delicate and practical. Finally, we completed our basic functions and still tried to improve it.

##8. Testing and debugging:
In the last week, the code still had some bugs and we continued learning about how to improve our project, especially the GUI. Even after the code depository deadline, we did make some changes to our project. All of this work was done by all of our group members together.


During the four weeks, our group members always kept in touch and shared both our progress and problems with each other, we met at least three times a week to follow up the plan and encourage each other, all of us devoted a lot of time to the project. 






