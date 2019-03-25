Link to the [webpage](https://cereventeo.github.io/Static-Code-Analysis/)

# Static Code Analysis

I am [Cere Venteo](https://www.linkedin.com/in/cere-venteo-rodrigo-53529a5b/), and I'm a student on CITM on Terrassa. This is my personal research under the supervision of the lecturer [Ricard Pillosu](<https://es.linkedin.com/in/ricardpillosu>) .

I will explain what a static code analysis is and how to use Coverity (online tool) and Cppcheck (offline tool) in your own projects.    

## What is static code analysis?

The Static Code Analysis or SCA is a method of debugging by examining source code before a program is run. It’s done by analyzing a set of code against a set (or multiple sets) of coding rules.

This type of analysis addresses weaknesses in source code that might lead to vulnerabilities. Of course, this may also be achieved through manual code reviews. But using automated tools is much more effective.

Static analysis is commonly used to comply with coding guidelines. And it’s often used for complying with industry standards.

## What are it's uses?

- Identify anomalies or flaws in the code.    
- Calculate performance metrics.      
- Ensure code security against hack attempts.     
- Analyze structures and dependencies.  
- Provide accurate and meaningful error descriptions.     

## How does it work?

 - First, the program scans your code.
 - Then, the program calculates the call graph / dependencies.
 - Next, computes the fan-out for all the possible paths thru your code.
 - Lastly, traverses thru each and every path, looking for specified defect types.
 
___
 
# SCA tools (online)

The main benefit of online tools comes when used in sync with a code storage service (Git, Bitbucket), allowing to automatic and continuous evaluation of the code written by all team members.         

## Coverity

Pros:
- Online functionality
- Integrated with Github
- Reference in this topic
- Performance and reliability
- Supports almost any language

Cons:
- Only free for open source projects
- Hard to use

In the following link you can watch an informative video about *How to Install Coverity*.

[Video Tutorial Install Coverity](https://community.synopsys.com/s/article/Coverity-Tutorial-Installing-Coverity-Analysis)        

___

# SCA tools (offline)

Most commonly used compilers, as Visual Studio, feature their own SCA tool.       
However, dedicated SCA programs can provide better performance, support more programming languages or display better error definitions. 

## CppCheck

Pros:     
- Completely free
- Highly-customizable
- Can analyze non-standard code
- Visual Studio plug-in [here](https://marketplace.visualstudio.com/items?itemName=Alexium.Cppcheckadd-in)      


Cons:        
- Rudimentary, few features     
- False positives


___

## Tutorial to install and use CppCheck

First, we must download the necessary file.
[CppCheck](http://cppcheck.sourceforge.net/)             

 - Install CppCheck using default options.
 - Execute the cppcheckgui.exe   
 - In the CppCheck menu, go to **New Project**, create the bugtracking folder and choose a name for your CppCheck file.     
 - When project configuration pop-up appears, go to the first tab **paths and defines**, select **Import Project** and browse to your     solution file (.sln) inside your Visual Studio project folder.
 - Go to the next tab **Checking**, select the target platform of the project and check all libraries your project uses or will use, in   our case, SDL and windows.
 - Click **Done** on the project configuration tab. Accept if you are asked to create the build dir folder.

Right when you end configuring your CppCheck files, the analysis will start.
Once finished, a list with all found errors will be displayed.
You can also access error files inside the build dir folder specified previously.
Before proceeding to check the errors, let's configure a bit more our CppCheck.

 - Inside the CppCheck menu, go to **Edit/preferences**. In **General**, check all options but **Enable inline supressions**, and in      **Reports**, check both options.

Let's check the results from the CppCheck analysis. 
If you are using the release test code, only a single bug is found related to a const attribute of the three purposely introduced into the code.

___

## Tutorial to install and use VisualCodeGrepper

First, we must download the necessary file.
[VGC](https://sourceforge.net/projects/visualcodegrepp/)  

 - Execute the program, and make sure that the language in Settings is set to the language you are using (C++ if you are using the sample code).
 - Go to **File/New target** directory and search the folder where your source files are located.
 - Press **Scan/Full Scan** to start the analysis.

If you are using the test code, you will see VCG has found a bug that CppCheck did not, a memory leak. However, we can also see that VCG has not found the const error that CppCheck did before. 

If you are, instead, using your own code, you are likely to have found as well different bugs using CppCheck and VCG.

___

## Conclusions 

- Although human revision cannot be obviated, SCA tools are very useful as support for QA in any development stage.
- Keep in mind the quality of the integrated SCA of the development environment you use.
- If you are working in an open source project, you can find reliable and free SCA tools.

## Resources

- [What is Static Code Analysis](https://www.perforce.com/blog/qac/what-static-code-analysis)
- [Coverity Introduction Tutorial](https://community.synopsys.com/s/article/Coverity-Tutorial-Introduction-to-Coverity)
- [Coverity Installing Tutorial](https://community.synopsys.com/s/article/Coverity-Tutorial-Installing-Coverity-Analysis)
- [CppCheck documentation](http://cppcheck.sourceforge.net/#documentation)
- [Coverity SCA information page](https://community.synopsys.com/s/)

## Contact info

If you have any doubt about this tutorial or the SCA subject, please e-mail me at cere148@gmail.com

