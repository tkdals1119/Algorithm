#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
#define MAXV 8

using namespace std;

vector<int> adj[MAXV];
int visited[MAXV];

int main() 
{
	queue<int> q;

	int start = 1;
	q.push(start);
	visited[start] = 1;

	while (!q.empty())
	{
		printf("?\n");

		int here = q.front();
		q.pop();

		for (int i = 0; i < adj[here].size(); i++)
		{
			int there = adj[here][i];

			if (visited[there] == 0)
			{
				q.push(there);
				visited[there] = 1;
			}
		}
	}

	return 0;
}
