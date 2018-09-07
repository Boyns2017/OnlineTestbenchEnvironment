# OnlineTestbenchEnvironment
Online Testbench environment. Please follow the instructions to run.




OS 
1.	Linux 64 bit 14.04.5 LTS. Essential.

2.	install Java and Python

3.	Download Tkinter

•	sudo apt-get install python-tk
•	sudo apt-get install python-imaging python-imaging-tk

4.	Navigate into desired document.

•	cd Documents

5.	Install ROS – Indio

•	sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'
•	sudo apt-key adv --keyserver hkp://pool.sks-keyservers.net --recv-key 0xB01FA116
•	sudo apt-get update
•	sudo apt-get install ros-indigo-desktop-full
•	sudo rosdep init
•	rosdep update
•	echo "source /opt/ros/indigo/setup.bash" >> ~/.bashrc
•	source ~/.bashrc
•	sudo apt-get install python-rosinstall

6.	----Install Gazebo 2.2----

•	sudo sh -c 'echo "deb http://packages.osrfoundation.org/gazebo/ubuntu trusty main" > /etc/apt/sources.list.d/gazebo-latest.list'
•	wget http://packages.osrfoundation.org/gazebo.key -O - | sudo apt-key add -
•	sudo apt-get update
•	sudo apt-get install gazebo2

7.	For checking the installation:

•	gazebo
•	which gzserver
•	which gzclient

8.	----Install ROS-Gazebo linking packages----

•	sudo apt-get install ros-indigo-gazebo-ros-pkgs ros-indigo-gazebo-ros-control

9.	----Install MoveIt!----

•	sudo apt-get install ros-indigo-moveit-full

10.	----Setup a Catkin workspace----|

•	mkdir -p ~/catkin_ws/src
•	cd ~/catkin_ws/src
•	catkin_init_workspace
•	cd ~/catkin_ws
•	catkin_make
•	echo "source ~/catkin_ws/devel/setup.bash" >> ~/.bashrc

11.	----Check the installation so far----

•	roscore &
•	rosrun gazebo_ros gazebo

12.	----Install package ros_controllers (for joint control)----

•	sudo apt-get install ros-indigo-ros-control ros-indigo-ros-controllers

13.	----Install Coverage Python module (and Pip if you do not have it)----

•	sudo apt-get install python-pip 
•	sudo pip install coverage

14.	----Compile the testbench packages----

•	Put the bert2_simulator and bert2_moveit folders from the Git repository in the catkin_ws/src folder
•	Put the results folder in the catkin_ws folder
•	Put the ./table.sh bash script and the GUI.py script in the catkin_ws/src folder
•	cd ~/catkin_ws/src/
•	catkin_make

15.	USE virtual studio code

•	Code .
•	Search all the files and replace the appropriate pwd with your own pwd.

Since no C++ source files are present, the compilation should not give any problem. Otherwise, contact me.

16.	To RUN

•	cd catkin_ws/src
•	code .
•	Decide what environment to run.
•	To run the Offline environment navigate to robot page.
•	Comment out line 438 and 439.
•	To run the Online environment navigate to robot page.
•	Comment line 438 and 439 back in.
•	cd catkin_ws/src
•	./table.sh


17.	To evaluate results 

•	Run the Offline and Online environment 5 times each.
•	Place the covhtm folder, assertion folder and stats folder in a Results file in a separate folder
•	Place in correct folder.
•	REPEAT.



18.	To generate coverage bar chart.

•	Execute the graph builder.py script for the bar charts, standard deviation and mean.

19.	To generate the coverage graphs.

•	Navigate to the coverage_graph folder
•	place 2 desired stats.txt files into a folder with the coverage_graph.py script. 
•	Name one file Stats_Offline.txt and the other Stats_Online.txt.
•	Execute script.
•	Graph will be generated.
