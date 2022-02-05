# Sum of dependencies in a graph
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a directed graph with V&nbsp;nodes and E edges. If there is an edge from u to v then u depends on v. Find out the sum of dependencies for every node. Duplicate edges should be counted as separate&nbsp;edges.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
V=4
E=4
Edges={ {0,2},{0,3},{1,3},{2,3} }
</span>

<span style="font-size:18px"><img alt="" src="https://contribute.geeksforgeeks.org/wp-content/uploads/tree-6.png" style="height:234px; width:211px" class="img-responsive"></span>

<span style="font-size:18px"><strong>Output:</strong>
4
<strong>Explanation:</strong>
For the graph in diagram, A depends
on C and D i.e. 2, B depends on D i.e.
1, C depends on D i.e. 1
and D depends on none.
Hence answer -&gt; 0 + 1 + 1 + 2 = 4</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
V=4
E=3
Edges={ {0,3},{0,2},{0,1} }
<strong>Output:</strong>
3
<strong>Explanation:</strong>
The sum of dependencies=3+0+0+0=3.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything.Your task is to complete the function <strong>sumOfDependencies()</strong> which takes the adj (Adjacency list) and V (Number of nodes)as input parameters and returns the total sum of dependencies of all nodes.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>O(V)<br>
<strong>Expected Auxillary Space:</strong>O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=V,E&lt;=150</span></p>

<p><span style="font-size:18px">0&lt;= Edges[i][0],Edges[i][1] &lt;= V-1</span></p>
 <p></p>
            </div>