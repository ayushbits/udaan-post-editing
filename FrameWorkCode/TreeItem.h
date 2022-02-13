#pragma once
#include <QVector>
#include <QVariant>
#include <QFile>
#include "Filters.h"
enum NodeType {
	FILTER,
	_FILETYPE,
	FOLDER
};
class TreeItem {
public:
	//Use values not containers like QVector
	template<typename T>
	explicit TreeItem(T &pData, NodeType pType,TreeItem * pParentItem = nullptr) {
		QVariant qvar(pData);
		type = pType;
		//qvar.setValue(pData);
		mItemData.push_back(qvar);
		mParentItem = pParentItem;
		
	}
	~TreeItem();
	void append_child(TreeItem * child);
	TreeItem *child(int row);
	int child_count() const;
	int column_count() const;
	TreeItem * find(QString & str);
	QVariant data(int column) const;
	int row() const;
    void SetFile( QFile * pFile);
    void SetFilter(Filter * pFilter);
    NodeType GetNodeType();
    QFile * GetFile();
    Filter * GetFilter();
    TreeItem * FindFileNode(QFile*f,TreeItem * item);

    void RemoveNode(TreeItem * item);
	TreeItem * parentItem();
private:
	QVector<TreeItem*> mChildItems;
	QVector<QVariant> mItemData;
	TreeItem *mParentItem;
	NodeType type;
	QFile    *file = nullptr;
	Filter   *mFilter = nullptr;
};
