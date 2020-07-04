#include "graphnode.h"
#include "graphedge.h"

GraphEdge::GraphEdge(int id)
{
    _id = id;
}

void GraphEdge::SetChildNode(GraphNode &childNode) /* (3) */
{
    _childNode = &childNode;
}

void GraphEdge::SetParentNode(GraphNode &parentNode) /* (3) */
{
    _parentNode = &parentNode;
}

void GraphEdge::AddToken(std::string token)
{
    _keywords.push_back(token);
}