package tree_sitter_gsql_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-gsql"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_gsql.Language())
	if language == nil {
		t.Errorf("Error loading Gsql grammar")
	}
}
