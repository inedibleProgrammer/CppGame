#include "MapController.h"

MapController::MapController()
{

}

void MapController::ClearPosition(Screen::Buffer_T* buffer, IPositionable & p)
{
	(*buffer)[p.GetY()][p.GetX()] = ' ';
}

void MapController::SetPosition(Screen::Buffer_T* buffer, IPositionable& p)
{
	(*buffer)[p.GetY()][p.GetX()] = p.GetSymbol();
}