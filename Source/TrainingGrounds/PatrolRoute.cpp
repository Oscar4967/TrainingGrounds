// Copyright Oscar Pettersson (2018). All rights reservec

#include "PatrolRoute.h"


TArray<AActor*> UPatrolRoute::GetPatrolPoints() const
{
	return PatrolPoints;
}