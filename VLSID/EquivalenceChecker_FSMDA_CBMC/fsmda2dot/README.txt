fsmda2dot
Kunal Banerjee
Sep 25, 2014


Pre-requisites:
1. gcc 4.7.2
2. flex 2.5.35
3. bison 2.5


Please execute the following commands to install and run fsmda2dot.

/************************************************************/

In the folder fsmda2dot:

make                     <-- This will install fsmda2dot.

cd bin			

./fsmda2dot <filename>   <-- To run fsmda2dot.

/*************************************************************/


Some sample FSMDAs can be found in the "Benchmarks" directory of
the original folder "EquivalenceChecker".


The software "graphviz" for viewing dot files can be downloaded from http://www.graphviz.org
The graphs in dot format can be converted into pdf format using the following command:
                    dot -Tpdf filename.dot -o outfile.pdf
For other types of output files supported by graphviz, please visit the site 
http://www.graphviz.org/doc/info/output.html



For more information (and on discovery of bugs), please contact:
kunalb@cse.iitkgp.ernet.in


******************************************************************************
   Copyright (C) 2014 by Kunal Banerjee, Dipankar Sarkar, Chittaranjan Mandal
   Email: kunalb@cse.iitkgp.ernet.in, ds@cse.iitkgp.ernet.in, 
   chitta@iitkgp.ac.in

   This file is part of the equivalence checker distribution.

   This is a free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This software is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this; if not, write to the Free Software Foundation, Inc.,
   59 Temple Place, Suite 330, Boston, MA  02111-1307  USA.
******************************************************************************
