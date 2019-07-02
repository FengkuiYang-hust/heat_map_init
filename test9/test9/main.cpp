#include "test9.h"
#include <QtWidgets/QApplication>

#include <osgDB/ReadFile>
#include <osgViewer/Viewer>
#include <osg/Node>
#include <osg/Geometry>
#include <osg/Geode>
#include <osg/LineWidth>

osg::ref_ptr<osg::Node> createLine();

void main()
{
	osgViewer::Viewer viewer;
	osg::Group *root = new osg::Group();

	root->addChild(createLine().get());

	viewer.setSceneData(root);
	viewer.realize();
	viewer.run();
}

osg::ref_ptr<osg::Node> createLine()
{
	osg::ref_ptr<osg::Geometry> geom = new osg::Geometry();

	osg::ref_ptr<osg::LineWidth> LineSize = new osg::LineWidth();
	LineSize->setWidth(20.0);
	geom->getOrCreateStateSet()->setAttributeAndModes(LineSize.get(), osg::StateAttribute::ON);

	osg::ref_ptr<osg::Vec3Array> v = new osg::Vec3Array();
	geom->setVertexArray(v.get());
	v->push_back(osg::Vec3(-1.f, 0.f, -1.f));
	v->push_back(osg::Vec3(1.f, 0.f, -1.f));
	v->push_back(osg::Vec3(1.f, 0.f, 1.f)); 
	v->push_back(osg::Vec3(-1.f, 0.f, 1.f));
	v->push_back(osg::Vec3(-2.f, 1.f, 1.f));

	osg::ref_ptr<osg::Vec4Array> c = new osg::Vec4Array;
	geom->setColorArray(c.get());
	geom->setColorBinding(osg::Geometry::BIND_PER_PRIMITIVE_SET);
	c->push_back(osg::Vec4(1.f, 0.f, 0.f, 1.f));
	//c->push_back(osg::Vec4(0.f, 1.f, 0.f, 1.f));
	//c->push_back(osg::Vec4(0.f, 0.f, 1.f, 1.f));
	//c->push_back(osg::Vec4(1.f, 0.f, 1.f, 1.f));

	osg::ref_ptr<osg::Vec3Array> n = new osg::Vec3Array;
	geom->setNormalArray(n.get());
	geom->setNormalBinding(osg::Geometry::BIND_OVERALL);
	n->push_back(osg::Vec3(0.f, -1.f,0.f));
	
	geom->addPrimitiveSet(new osg::DrawArrays(osg::PrimitiveSet::POLYGON, 0, 5));
	osg::ref_ptr<osg::Geode> geode = new osg::Geode;
	geode->addDrawable(geom.get());
	return geode.get();

}


/*int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	test9 w;
	w.show();
	return a.exec();
}*/
