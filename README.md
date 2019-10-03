# The Nybble Manifesto

The manifesto on its surface is within the file manifesto.c.

To see the manifesto in its entirety you can download these files.

To download the files click the green 'Clone or download' button located above.

This will open a little drop down menu with options of cloning, or 'Download ZIP.'

You will want to click, 'Download ZIP.'

A small file with a little zipper on it should appear in a bar on the bottom of your screen.

This is where it gets somewhat complicated. You will want to extract the contents of the 
zipped file. There are many ways to do this depending on your computer's Operating System (OS).

I've made a list of extraction methods based on common Operating Systems below:

Linux
-----
 The quickest way to unveil the contents of your downloaded file is to open up your terminal 
(command line) like a 90's hacker. 

Opening the Command Line:
-------------------------
This can be done by either following the shortcut: Ctrl+Alt+t
OR you can just look it up 'Terminal' or 'Command Line' on your computer. Once it's opened all
you have to do is type the command(s) below replacing 'your_username' with your actual user name:

    unzip /home/your_username/Downloads/nybble_manifesto-master.zip; 
    cd /home/your_username/Downloads/nybble_manifesto-master; make

Mac (OSX)
---------
To unzip a zipped file on Mac you can do the following:

* Double click the zipped file.
* The file will automatically be decompressed by Archive Utility into the same folder it was in.

Now that you've done that you'll have to open the command line. Read the section above titled
'Opening the Command Line'

Once you have the command line opened on your computer you'll want to type the following commands,
replacing 'your_username' with your actual username.

    cd /home/your_username/Downloads/nybble_manifesto-master; make

Windows 10
----------
To unzip a zipped file on your PC you can do the following: 

Go to your downloaded file and click 'Extract All' at the top of your File Explorer.

Here comes the second tricky section. You're going to want to make sure the gcc compiler is 
installed on your computer. This set of instructions is a bit of extensive, so here's a link to 
getting that all set up:

https://geekstraw.com/compile-and-run-c-program-in-windows-10-using-command-prompt/

You can go so far as to follow the instructions on Compiling and running the C program provided 
in the file as well, and vuala, the manifesto has been unveiled!

## Some fun things to try and do if you feel so inclined:
* 
