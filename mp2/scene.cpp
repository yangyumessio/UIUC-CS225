#include "scene.hpp"

using namespace std;

Scene::Scene (int max){
    sceneVector = vector<Image*>(max);
    for(auto it = sceneVector.begin(); it != sceneVector.end(); it++)
    {
        *it=NULL;
    }
}
Scene::~Scene (){}
Scene::Scene (const Scene &source){}
void Scene::changemaxlayers (int newmax){}
void Scene::addpicture (const char *FileName, int index, int x, int y){}
void Scene::changelayer (int index, int newindex){}
void Scene::translate (int index, int xcoord, int ycoord){}
void Scene::deletepicture (int index){}
Image * Scene::getpicture (int index) const{return NULL;}
Image Scene::drawscene () const{return Image();}
